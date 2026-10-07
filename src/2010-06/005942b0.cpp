// roc 2010-06 005942b0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005942b0
//
// 005942b0  68fe08a000           push 0xa008fe
// 005942b5  e886feffff           call 0x594140
// 005942ba  83c404               add esp, 4
// 005942bd  a378b2c000           mov dword ptr [0xc0b278], eax
// 005942c2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_005942b0(void*);
void func_005942b0()
{
    G1_VALUE = (int*)G2_func_005942b0(&G3_OBJ);
}
