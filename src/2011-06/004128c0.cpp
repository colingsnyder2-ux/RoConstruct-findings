// from server: 43% by atomic.potato
// roc 2011-06 004128c0  unit: CIDEBrowserView  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004128c0
//
// 004128c0  56                   push esi
// 004128c1  8b742408             mov esi, dword ptr [esp + 8]
// 004128c5  57                   push edi
// 004128c6  8b3e                 mov edi, dword ptr [esi]
// 004128c8  81c1b0020000         add ecx, 0x2b0
// 004128ce  ff15b026a400         call dword ptr [0xa426b0]
// 004128d4  8b17                 mov edx, dword ptr [edi]
// 004128d6  33c9                 xor ecx, ecx
// 004128d8  84c0                 test al, al
// 004128da  0f94c1               sete cl
// 004128dd  51                   push ecx
// 004128de  8bce                 mov ecx, esi
// 004128e0  ffd2                 call edx
// 004128e2  5f                   pop edi
// 004128e3  5e                   pop esi
// 004128e4  c20400               ret 4

extern "C" int G1_func_00A426B0(void*);

struct CIDEBrowserView
{
    int f(void*);
};

int CIDEBrowserView::f(void* p)
{
    int v = G1_func_00A426B0((char*)this + 0x2b0);
    return ((int (__stdcall *)(void*, int))(*(void**) *(void**)p))(p, v == 0);
}
