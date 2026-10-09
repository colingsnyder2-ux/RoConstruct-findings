// from server: 100% by colin
// roc 2007-08 00720640  unit: CXTWindowMap  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720640
//
// 00720640  56                   push esi
// 00720641  57                   push edi
// 00720642  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00720646  57                   push edi
// 00720647  8bf1                 mov esi, ecx
// 00720649  e8f2feffff           call 0x720540
// 0072064e  85c0                 test eax, eax
// 00720650  7417                 je 0x720669
// 00720652  8b10                 mov edx, dword ptr [eax]
// 00720654  8bc8                 mov ecx, eax
// 00720656  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00720659  6a00                 push 0
// 0072065b  ffd0                 call eax
// 0072065d  57                   push edi
// 0072065e  8bce                 mov ecx, esi
// 00720660  e8dbfeffff           call 0x720540
// 00720665  85c0                 test eax, eax
// 00720667  75e9                 jne 0x720652
// 00720669  5f                   pop edi
// 0072066a  5e                   pop esi
// 0072066b  c20400               ret 4

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
