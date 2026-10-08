// from server: 74% by colin
// roc 2007-08 00698ab0  unit: CXTPPropertyGridItem  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698ab0
//
// 00698ab0  53                   push ebx
// 00698ab1  56                   push esi
// 00698ab2  8bf1                 mov esi, ecx
// 00698ab4  8b9ed4000000         mov ebx, dword ptr [esi + 0xd4]
// 00698aba  85db                 test ebx, ebx
// 00698abc  742c                 je 0x698aea
// 00698abe  57                   push edi
// 00698abf  8dbea0000000         lea edi, [esi + 0xa0]
// 00698ac5  8bcf                 mov ecx, edi
// 00698ac7  ff1598dd7700         call dword ptr [0x77dd98]
// 00698acd  50                   push eax
// 00698ace  8bcb                 mov ecx, ebx
// 00698ad0  ff15b8dc7700         call dword ptr [0x77dcb8]
// 00698ad6  85c0                 test eax, eax
// 00698ad8  740f                 je 0x698ae9
// 00698ada  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00698ae0  50                   push eax
// 00698ae1  8bcf                 mov ecx, edi
// 00698ae3  ff1534d47700         call dword ptr [0x77d434]
// 00698ae9  5f                   pop edi
// 00698aea  5e                   pop esi
// 00698aeb  5b                   pop ebx
// 00698aec  c3                   ret 

struct CXTPPropertyGridItem {
    void Remove();
};

extern "C" void* __stdcall sub_77dd98(void*);
extern "C" int __stdcall sub_77dcb8(void*, void*);
extern "C" void __stdcall sub_77d434(void*, void*);

void CXTPPropertyGridItem::Remove() {
    void* p = *(void**)((char*)this + 0xd4);
    if (p == 0) {
        void* q = sub_77dd98((char*)this + 0xa0);
        if (sub_77dcb8(p, q) != 0) {
            sub_77d434((char*)this + 0xa0, *(void**)((char*)this + 0xd4));
        }
    }
}
