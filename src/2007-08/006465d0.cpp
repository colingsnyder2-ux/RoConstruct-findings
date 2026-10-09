// from server: 81% by colin
// roc 2007-08 006465d0  unit: CXTPCommandBar  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006465d0
//
// 006465d0  56                   push esi
// 006465d1  8bf1                 mov esi, ecx
// 006465d3  8b06                 mov eax, dword ptr [esi]
// 006465d5  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 006465db  ffd2                 call edx
// 006465dd  8d4900               lea ecx, [ecx]
// 006465e0  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 006465e7  751a                 jne 0x646603
// 006465e9  837e3800             cmp dword ptr [esi + 0x38], 0
// 006465ed  751c                 jne 0x64660b
// 006465ef  85c0                 test eax, eax
// 006465f1  7423                 je 0x646616
// 006465f3  8b10                 mov edx, dword ptr [eax]
// 006465f5  8bf0                 mov esi, eax
// 006465f7  8bc8                 mov ecx, eax
// 006465f9  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006465ff  ffd0                 call eax
// 00646601  ebdd                 jmp 0x6465e0
// 00646603  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 00646609  5e                   pop esi
// 0064660a  c3                   ret 
// 0064660b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0064660e  51                   push ecx
// 0064660f  e8ac9bfeff           call 0x6301c0
// 00646614  5e                   pop esi
// 00646615  c3                   ret 
// 00646616  8bce                 mov ecx, esi
// 00646618  5e                   pop esi
// 00646619  e952ffffff           jmp 0x646570

struct CXTPCommandBar {
    int field_0;
    char pad[0x34];
    int field_38;
    char pad2[0x104 - 0x3C];
    int field_104;
    int GetSomething();
    int GetOther();
    int func_00646570();
};

extern "C" int __stdcall func_006301c0(int);

int CXTPCommandBar::GetSomething()
{
    int result = ((int (__thiscall *)(CXTPCommandBar *))*(void **)(*(int *)this + 0x184))(this);
    while (field_104 == 0) {
        if (field_38 != 0) {
            return func_006301c0(field_38);
        }
        if (result == 0) {
            return func_00646570();
        }
        result = ((int (__thiscall *)(CXTPCommandBar *))*(void **)(*(int *)result + 0x184))((CXTPCommandBar *)result);
    }
    return field_104;
}
