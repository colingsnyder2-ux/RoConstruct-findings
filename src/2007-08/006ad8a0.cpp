// from server: 79% by colin
// roc 2007-08 006ad8a0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad8a0
//
// 006ad8a0  83ec10               sub esp, 0x10
// 006ad8a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ad8a7  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 006ad8ad  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 006ad8b3  890c24               mov dword ptr [esp], ecx
// 006ad8b6  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 006ad8bc  894c2408             mov dword ptr [esp + 8], ecx
// 006ad8c0  89542404             mov dword ptr [esp + 4], edx
// 006ad8c4  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 006ad8ca  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 006ad8d0  8d0c24               lea ecx, [esp]
// 006ad8d3  51                   push ecx
// 006ad8d4  50                   push eax
// 006ad8d5  89542414             mov dword ptr [esp + 0x14], edx
// 006ad8d9  e812ffffff           call 0x6ad7f0
// 006ad8de  f7d8                 neg eax
// 006ad8e0  1bc0                 sbb eax, eax
// 006ad8e2  f7d8                 neg eax
// 006ad8e4  83c418               add esp, 0x18
// 006ad8e7  c3                   ret 

struct CXTPTabPaintManager_CAppearanceSetFlat
{
    char pad[0xc0];
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    char pad2[0x2c];
    int field_fc;

    int sub_6ad8a0(int arg);
};

extern "C" int __cdecl sub_6ad7f0(int, int*);

int CXTPTabPaintManager_CAppearanceSetFlat::sub_6ad8a0(int arg)
{
    int local[4];
    CXTPTabPaintManager_CAppearanceSetFlat* p = (CXTPTabPaintManager_CAppearanceSetFlat*)arg;
    local[0] = p->field_c0;
    local[1] = p->field_c4;
    local[2] = p->field_c8;
    local[3] = p->field_cc;
    int r = sub_6ad7f0(p->field_fc, local);
    return (r != 0) ? 1 : 0;
}
