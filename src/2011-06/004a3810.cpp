// roc 2011-06 004a3810  unit: RBX::Network::Player  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3810
//
// 004a3810  683452cb00           push 0xcb5234
// 004a3815  e8b6d93500           call 0x8011d0
// 004a381a  59                   pop ecx
// 004a381b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_004a3810;
extern void G1_func_004a3810(void*);
void func_004a3810()
{
    G1_func_004a3810(&G2_func_004a3810);
}
