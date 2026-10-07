// roc 2011-06 00a1a990  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1a990
//
// 00a1a990  680043a300           push 0xa34300
// 00a1a995  e8c307dfff           call 0x80b15d
// 00a1a99a  59                   pop ecx
// 00a1a99b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a1a990;
extern void G1_func_00a1a990(void*);
void func_00a1a990()
{
    G1_func_00a1a990(&G2_func_00a1a990);
}
