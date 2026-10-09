// roc 2009-06 00818cd0  unit: CXTWindowMap  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818cd0
//
// 00818cd0  56                   push esi
// 00818cd1  57                   push edi
// 00818cd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00818cd6  57                   push edi
// 00818cd7  8bf1                 mov esi, ecx
// 00818cd9  e8f2feffff           call 0x818bd0
// 00818cde  85c0                 test eax, eax
// 00818ce0  7417                 je 0x818cf9
// 00818ce2  8b10                 mov edx, dword ptr [eax]
// 00818ce4  8bc8                 mov ecx, eax
// 00818ce6  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00818ce9  6a00                 push 0
// 00818ceb  ffd0                 call eax
// 00818ced  57                   push edi
// 00818cee  8bce                 mov ecx, esi
// 00818cf0  e8dbfeffff           call 0x818bd0
// 00818cf5  85c0                 test eax, eax
// 00818cf7  75e9                 jne 0x818ce2
// 00818cf9  5f                   pop edi
// 00818cfa  5e                   pop esi
// 00818cfb  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@ns_ROCX000003@@QAEXH@Z)

namespace ns_ROCX000003 {
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
