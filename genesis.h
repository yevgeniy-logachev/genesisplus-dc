
#ifndef _GENESIS_H_
#define _GENESIS_H_

/* Global variables */
extern uint8 cart_rom[0x400000];
extern uint8 work_ram[0x10000];
extern uint8 zram[0x2000];
extern uint8 zbusreq;
extern uint8 zbusack;
extern uint8 zreset;
extern uint8 zirq;
extern uint32 zbank;
extern uint8 gen_running;

/* Function prototypes */
void gen_init(void);
void gen_reset(void);
void gen_shutdown(void);
int gen_busack_r(void);
void gen_busreq_w(int state);
void gen_reset_w(int state);
void gen_bank_w(int state);
void bswap(uint8 *mem, int length);
int z80_irq_callback(int param);
int m68k_irq_ack_callback(int int_level);
s32 FASTCALL m68k_irq_ack_callbackf(s32 int_level);

#endif /* _GEN_H_ */

