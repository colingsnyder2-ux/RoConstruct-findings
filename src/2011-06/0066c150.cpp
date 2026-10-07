// roc 2011-06 0066c150  unit: DxUserInput  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066c150
//
// 0066c150  686439cb00           push 0xcb3964
// 0066c155  e876501900           call 0x8011d0
// 0066c15a  59                   pop ecx
// 0066c15b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0066c150;
extern void G1_func_0066c150(void*);
void func_0066c150()
{
    G1_func_0066c150(&G2_func_0066c150);
}
