// roc 2008-06 007a1210  unit: CXTWindowMap  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1210
//
// 007a1210  56                   push esi
// 007a1211  57                   push edi
// 007a1212  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007a1216  57                   push edi
// 007a1217  8bf1                 mov esi, ecx
// 007a1219  e8f2feffff           call 0x7a1110
// 007a121e  85c0                 test eax, eax
// 007a1220  7417                 je 0x7a1239
// 007a1222  8b10                 mov edx, dword ptr [eax]
// 007a1224  8bc8                 mov ecx, eax
// 007a1226  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007a1229  6a00                 push 0
// 007a122b  ffd0                 call eax
// 007a122d  57                   push edi
// 007a122e  8bce                 mov ecx, esi
// 007a1230  e8dbfeffff           call 0x7a1110
// 007a1235  85c0                 test eax, eax
// 007a1237  75e9                 jne 0x7a1222
// 007a1239  5f                   pop edi
// 007a123a  5e                   pop esi
// 007a123b  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@ns_ROCX000004@@QAEXH@Z)

namespace ns_ROCX000004 {
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
