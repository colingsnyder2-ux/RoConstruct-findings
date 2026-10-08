// from server: 75% by colin
// roc 2007-08 00697960  unit: CXTAuxData  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697960
//
// 00697960  51                   push ecx
// 00697961  56                   push esi
// 00697962  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00697966  81c1ac000000         add ecx, 0xac
// 0069796c  51                   push ecx
// 0069796d  8bce                 mov ecx, esi
// 0069796f  c744240800000000     mov dword ptr [esp + 8], 0
// 00697977  ff1574dd7700         call dword ptr [0x77dd74]
// 0069797d  8bc6                 mov eax, esi
// 0069797f  5e                   pop esi
// 00697980  59                   pop ecx
// 00697981  c20400               ret 4

struct CXTAuxData {
    char pad[0xac];
    int field_ac;
    CXTAuxData* init(int*);
};

extern "C" void __stdcall sub_77dd74(int*, int*);

CXTAuxData* CXTAuxData::init(int* p) {
    int tmp = 0;
    sub_77dd74(&field_ac, &tmp);
    return this;
}
