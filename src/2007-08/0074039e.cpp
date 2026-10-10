// from server: 72% by colin
// roc 2007-08 0074039e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074039e

extern "C" void __cdecl sub_630A1E(void*);
extern "C" void __cdecl sub_630A18(void*);

void* g_8474C4;

void __cdecl sub_74039E(int a1, int a2)
{
    int* p = (int*)a2;
    int v = p[-1] ^ (int)p;
    sub_630A1E((void*)v);
    sub_630A18(&g_8474C4);
}
