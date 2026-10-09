// roc 2007-03 00721a90  unit: seg_00720000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721a90
//
// 00721a90  56                   push esi
// 00721a91  57                   push edi
// 00721a92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00721a96  57                   push edi
// 00721a97  8bf1                 mov esi, ecx
// 00721a99  e8f2feffff           call 0x721990
// 00721a9e  85c0                 test eax, eax
// 00721aa0  7417                 je 0x721ab9
// 00721aa2  8b10                 mov edx, dword ptr [eax]
// 00721aa4  8bc8                 mov ecx, eax
// 00721aa6  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00721aa9  6a00                 push 0
// 00721aab  ffd0                 call eax
// 00721aad  57                   push edi
// 00721aae  8bce                 mov ecx, esi
// 00721ab0  e8dbfeffff           call 0x721990
// 00721ab5  85c0                 test eax, eax
// 00721ab7  75e9                 jne 0x721aa2
// 00721ab9  5f                   pop edi
// 00721aba  5e                   pop esi
// 00721abb  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@ns_ROCX000005@@QAEXH@Z)

namespace ns_ROCX000005 {
struct CXTWindowMap {
    void* Find(int);
    void Remove(int);
};

void CXTWindowMap::Remove(int key) {
    void* p;
    while ((p = Find(key)) != 0) {
        void** vtbl = *(void***)p;
        ((void (__thiscall*)(void*, int))vtbl[7])(p, 0);
    }
}
}
