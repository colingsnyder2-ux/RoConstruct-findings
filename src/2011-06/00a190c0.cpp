// roc 2011-06 00a190c0  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a190c0
//
// 00a190c0  684034a300           push 0xa33440
// 00a190c5  e89320dfff           call 0x80b15d
// 00a190ca  59                   pop ecx
// 00a190cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a190c0;
extern void G1_func_00a190c0(void*);
void func_00a190c0()
{
    G1_func_00a190c0(&G2_func_00a190c0);
}
