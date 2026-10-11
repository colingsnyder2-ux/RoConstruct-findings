// from server: 88% by colin
// roc 2008-06 0040e130  unit: CBrowserView  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e130
//
// 0040e130  56                   push esi
// 0040e131  8b742408             mov esi, dword ptr [esp + 8]
// 0040e135  57                   push edi
// 0040e136  8b3e                 mov edi, dword ptr [esi]
// 0040e138  81c1cc020000         add ecx, 0x2cc
// 0040e13e  ff15d82f8000         call dword ptr [0x802fd8]
// 0040e144  8b17                 mov edx, dword ptr [edi]
// 0040e146  33c9                 xor ecx, ecx
// 0040e148  84c0                 test al, al
// 0040e14a  0f94c1               sete cl
// 0040e14d  51                   push ecx
// 0040e14e  8bce                 mov ecx, esi
// 0040e150  ffd2                 call edx
// 0040e152  5f                   pop edi
// 0040e153  5e                   pop esi
// 0040e154  c20400               ret 4

struct CBrowserView {
    char pad[0x2cc];
    void method(void* arg);
};

extern "C" bool __stdcall sub_802fd8(void*);

void CBrowserView::method(void* arg) {
    void** vtbl = *(void***)arg;
    bool result = sub_802fd8((char*)this + 0x2cc);
    int flag = result ? 0 : 1;
    void (__stdcall *fn)(void*, int) = (void (__stdcall *)(void*, int))vtbl[0];
    fn(arg, flag);
}
