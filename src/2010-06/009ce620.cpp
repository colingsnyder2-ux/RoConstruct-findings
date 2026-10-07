// roc 2010-06 009ce620  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce620
//
// 009ce620  6884e0a200           push 0xa2e084
// 009ce625  e8165bbcff           call 0x594140
// 009ce62a  83c404               add esp, 4
// 009ce62d  a36c93c100           mov dword ptr [0xc1936c], eax
// 009ce632  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce620(void*);
void func_009ce620()
{
    G1_VALUE = (int*)G2_func_009ce620(&G3_OBJ);
}
