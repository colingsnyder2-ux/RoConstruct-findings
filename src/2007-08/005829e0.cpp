// from server: 82% by colin
// roc 2007-08 005829e0  unit: RBX::Accoutrement  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005829e0
//
// 005829e0  83ec30               sub esp, 0x30
// 005829e3  56                   push esi
// 005829e4  8bf1                 mov esi, ecx
// 005829e6  8d8600010000         lea eax, [esi + 0x100]
// 005829ec  50                   push eax
// 005829ed  8d4c2408             lea ecx, [esp + 8]
// 005829f1  e8da6bf8ff           call 0x5095d0
// 005829f6  8b442438             mov eax, dword ptr [esp + 0x38]
// 005829fa  d900                 fld dword ptr [eax]
// 005829fc  8d4c2404             lea ecx, [esp + 4]
// 00582a00  d95c2428             fstp dword ptr [esp + 0x28]
// 00582a04  51                   push ecx
// 00582a05  d94004               fld dword ptr [eax + 4]
// 00582a08  8bce                 mov ecx, esi
// 00582a0a  d95c2430             fstp dword ptr [esp + 0x30]
// 00582a0e  d94008               fld dword ptr [eax + 8]
// 00582a11  d95c2434             fstp dword ptr [esp + 0x34]
// 00582a15  e836ffffff           call 0x582950
// 00582a1a  5e                   pop esi
// 00582a1b  83c430               add esp, 0x30
// 00582a1e  c20400               ret 4

struct Accoutrement {
    char pad[0x100];
    int field_100;
    void sub_00582950(float* v);
    void sub_005829e0(float* v);
};

extern "C" void __stdcall sub_005095d0(int* out, int* in);

void Accoutrement::sub_005829e0(float* v)
{
    int tmp[10];
    sub_005095d0(tmp, &field_100);
    float local[3];
    local[0] = v[0];
    local[1] = v[1];
    local[2] = v[2];
    sub_00582950(local);
}
