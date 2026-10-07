// roc 2011-06 0060ae10  unit: RBX::ModelInstance  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060ae10
//
// 0060ae10  686839cb00           push 0xcb3968
// 0060ae15  e8b6631f00           call 0x8011d0
// 0060ae1a  59                   pop ecx
// 0060ae1b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0060ae10;
extern void G1_func_0060ae10(void*);
void func_0060ae10()
{
    G1_func_0060ae10(&G2_func_0060ae10);
}
