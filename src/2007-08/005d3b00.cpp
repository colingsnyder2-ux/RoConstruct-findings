// from server: 82% by colin
// roc 2007-08 005d3b00  unit: RBX::Tool  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d3b00
//
// 005d3b00  83ec30               sub esp, 0x30
// 005d3b03  56                   push esi
// 005d3b04  8bf1                 mov esi, ecx
// 005d3b06  8d8674010000         lea eax, [esi + 0x174]
// 005d3b0c  50                   push eax
// 005d3b0d  8d4c2408             lea ecx, [esp + 8]
// 005d3b11  e8ba5af3ff           call 0x5095d0
// 005d3b16  8b442438             mov eax, dword ptr [esp + 0x38]
// 005d3b1a  d900                 fld dword ptr [eax]
// 005d3b1c  8d4c2404             lea ecx, [esp + 4]
// 005d3b20  d95c2428             fstp dword ptr [esp + 0x28]
// 005d3b24  51                   push ecx
// 005d3b25  d94004               fld dword ptr [eax + 4]
// 005d3b28  8bce                 mov ecx, esi
// 005d3b2a  d95c2430             fstp dword ptr [esp + 0x30]
// 005d3b2e  d94008               fld dword ptr [eax + 8]
// 005d3b31  d95c2434             fstp dword ptr [esp + 0x34]
// 005d3b35  e836ffffff           call 0x5d3a70
// 005d3b3a  5e                   pop esi
// 005d3b3b  83c430               add esp, 0x30
// 005d3b3e  c20400               ret 4

struct Tool {
    char pad[0x174];
    int field_174;
    void sub_5d3a70(float*);
    void sub_5d3b00(float*);
};

extern "C" void __stdcall sub_5095d0(int*, int*);

void Tool::sub_5d3b00(float* p)
{
    int local;
    float v[3];
    sub_5095d0(&local, &field_174);
    v[0] = p[0];
    v[1] = p[1];
    v[2] = p[2];
    sub_5d3a70(v);
}
