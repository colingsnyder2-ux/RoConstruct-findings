// from server: 60% by colin
// roc 2007-08 00699960  unit: CXTPPropertyGridItemConstraints  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699960
//
// 00699960  56                   push esi
// 00699961  57                   push edi
// 00699962  8bf9                 mov edi, ecx
// 00699964  33f6                 xor esi, esi
// 00699966  397728               cmp dword ptr [edi + 0x28], esi
// 00699969  7e21                 jle 0x69998c
// 0069996b  eb03                 jmp 0x699970
// 0069996d  8d4900               lea ecx, [ecx]
// 00699970  85f6                 test esi, esi
// 00699972  7c39                 jl 0x6999ad
// 00699974  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00699977  7d34                 jge 0x6999ad
// 00699979  8b4724               mov eax, dword ptr [edi + 0x24]
// 0069997c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0069997f  e86068f9ff           call 0x6301e4
// 00699984  83c601               add esi, 1
// 00699987  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0069998a  7ce4                 jl 0x699970
// 0069998c  6aff                 push -1
// 0069998e  6a00                 push 0
// 00699990  8d4f20               lea ecx, [edi + 0x20]
// 00699993  e818610600           call 0x6ffab0
// 00699998  837f3800             cmp dword ptr [edi + 0x38], 0
// 0069999c  7414                 je 0x6999b2
// 0069999e  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 006999a1  8b11                 mov edx, dword ptr [ecx]
// 006999a3  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 006999a9  5f                   pop edi
// 006999aa  5e                   pop esi
// 006999ab  ffe0                 jmp eax
// 006999ad  e96e65f9ff           jmp 0x62ff20
// 006999b2  5f                   pop edi
// 006999b3  5e                   pop esi
// 006999b4  c3                   ret 

struct CXTPPropertyGridItemConstraints {
    char pad0[0x20];
    int field_20;
    char pad24[0x4];
    int field_28;
    int field_2c;
    char pad30[0x8];
    int field_38;
    void RemoveAll();
};

extern "C" void __stdcall sub_6301E4(int);
extern "C" void __stdcall sub_6FFAB0(int, int, int);
extern "C" void __stdcall sub_62FF20();

void CXTPPropertyGridItemConstraints::RemoveAll()
{
    int i = 0;
    if (field_28 > 0) {
        do {
            if (i < 0 || i >= field_28) {
                sub_62FF20();
            }
            sub_6301E4(*(int*)(field_2c + i * 4));
            i++;
        } while (i < field_28);
    }
    sub_6FFAB0((int)(this) + 0x20, 0, -1);
    if (field_38 != 0) {
        int* p = (int*)field_38;
        int vt = *p;
        void (__thiscall *fn)(int) = *(void (__thiscall**)(int))(vt + 0xe0);
        fn(field_38);
    }
}
