// from server: 81% by colin
// roc 2007-08 00697c80  unit: CXTPPropertyGridItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697c80
//
// 00697c80  51                   push ecx
// 00697c81  56                   push esi
// 00697c82  8bf1                 mov esi, ecx
// 00697c84  51                   push ecx
// 00697c85  8d86a4000000         lea eax, [esi + 0xa4]
// 00697c8b  8bcc                 mov ecx, esp
// 00697c8d  89642408             mov dword ptr [esp + 8], esp
// 00697c91  50                   push eax
// 00697c92  ff1574dd7700         call dword ptr [0x77dd74]
// 00697c98  8b16                 mov edx, dword ptr [esi]
// 00697c9a  8b4264               mov eax, dword ptr [edx + 0x64]
// 00697c9d  8bce                 mov ecx, esi
// 00697c9f  ffd0                 call eax
// 00697ca1  5e                   pop esi
// 00697ca2  59                   pop ecx
// 00697ca3  c3                   ret 

struct CXTPPropertyGridItem
{
    char pad[0xa4];
    int field_a4;
    void sub_00697c80();
};

extern "C" void __stdcall G_func_0077dd74(int*, int*);

void CXTPPropertyGridItem::sub_00697c80()
{
    int local;
    G_func_0077dd74(&local, &field_a4);
    (*(void (__thiscall **)(CXTPPropertyGridItem*))(*(int*)this + 0x64))(this);
}
