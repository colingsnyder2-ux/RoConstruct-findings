// roc 2011-06 007fd8f0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fd8f0
//
// 007fd8f0  685c39cb00           push 0xcb395c
// 007fd8f5  e8d6380000           call 0x8011d0
// 007fd8fa  59                   pop ecx
// 007fd8fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007fd8f0;
extern void G1_func_007fd8f0(void*);
void func_007fd8f0()
{
    G1_func_007fd8f0(&G2_func_007fd8f0);
}
