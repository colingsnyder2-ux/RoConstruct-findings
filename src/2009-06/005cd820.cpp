// roc 2009-06 005cd820  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cd820
//
// 005cd820  6816d28a00           push 0x8ad216
// 005cd825  e886feffff           call 0x5cd6b0
// 005cd82a  83c404               add esp, 4
// 005cd82d  a3bc3ba400           mov dword ptr [0xa43bbc], eax
// 005cd832  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_005cd820(void*);
void func_005cd820()
{
    G1_VALUE = (int*)G2_func_005cd820(&G3_OBJ);
}
