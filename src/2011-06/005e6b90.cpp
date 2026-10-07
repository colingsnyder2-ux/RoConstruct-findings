// roc 2011-06 005e6b90  unit: RBX::DataModel  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6b90
//
// 005e6b90  6894a8cb00           push 0xcba894
// 005e6b95  e836a62100           call 0x8011d0
// 005e6b9a  59                   pop ecx
// 005e6b9b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_005e6b90;
extern void G1_func_005e6b90(void*);
void func_005e6b90()
{
    G1_func_005e6b90(&G2_func_005e6b90);
}
