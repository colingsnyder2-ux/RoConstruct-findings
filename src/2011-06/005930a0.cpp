// roc 2011-06 005930a0  unit: VAuthoringSettings::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005930a0
//
// 005930a0  685839cb00           push 0xcb3958
// 005930a5  e826e12600           call 0x8011d0
// 005930aa  59                   pop ecx
// 005930ab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_005930a0;
extern void G1_func_005930a0(void*);
void func_005930a0()
{
    G1_func_005930a0(&G2_func_005930a0);
}
