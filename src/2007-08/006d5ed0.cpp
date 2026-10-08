// from server: 67% by colin
// roc 2007-08 006d5ed0  unit: CXTPReportGroupRow_Batch  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d5ed0
//
// 006d5ed0  51                   push ecx
// 006d5ed1  56                   push esi
// 006d5ed2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d5ed6  83c170               add ecx, 0x70
// 006d5ed9  51                   push ecx
// 006d5eda  8bce                 mov ecx, esi
// 006d5edc  c744240800000000     mov dword ptr [esp + 8], 0
// 006d5ee4  ff1574dd7700         call dword ptr [0x77dd74]
// 006d5eea  8bc6                 mov eax, esi
// 006d5eec  5e                   pop esi
// 006d5eed  59                   pop ecx
// 006d5eee  c20400               ret 4

struct T_006d5ed0 {
    char pad[0x70];
    int field_70;
    T_006d5ed0* m(T_006d5ed0* other);
};

extern "C" void __stdcall sub_77dd74(void*);

T_006d5ed0* T_006d5ed0::m(T_006d5ed0* other)
{
    *(int*)other = 0;
    sub_77dd74(&field_70);
    return other;
}
