// from server: 78% by colin
// roc 2007-08 00438e50  unit: CXTPPropertyGridItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438e50
//
// 00438e50  51                   push ecx
// 00438e51  56                   push esi
// 00438e52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00438e56  81c1a0000000         add ecx, 0xa0
// 00438e5c  51                   push ecx
// 00438e5d  8bce                 mov ecx, esi
// 00438e5f  c744240800000000     mov dword ptr [esp + 8], 0
// 00438e67  ff1574dd7700         call dword ptr [0x77dd74]
// 00438e6d  8bc6                 mov eax, esi
// 00438e6f  5e                   pop esi
// 00438e70  59                   pop ecx
// 00438e71  c20400               ret 4

struct CXTPPropertyGridItem {
    char pad[0xa0];
    void* field_a0;
    CXTPPropertyGridItem* construct(CXTPPropertyGridItem* other);
};

extern "C" void* __stdcall sub_77dd74(void*, void*);

CXTPPropertyGridItem* CXTPPropertyGridItem::construct(CXTPPropertyGridItem* other) {
    void* tmp = 0;
    sub_77dd74(&field_a0, &tmp);
    return other;
}
