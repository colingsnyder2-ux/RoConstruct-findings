// roc 2009-06 0088e480  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088e480
//
// 0088e480  6874198e00           push 0x8e1974
// 0088e485  e826f2d3ff           call 0x5cd6b0
// 0088e48a  83c404               add esp, 4
// 0088e48d  a374cda400           mov dword ptr [0xa4cd74], eax
// 0088e492  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088e480(void*);
void func_0088e480()
{
    G1_VALUE = (int*)G2_func_0088e480(&G3_OBJ);
}
