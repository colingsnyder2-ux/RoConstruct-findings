// from server: 59% by colin
// roc 2007-08 005d2880  unit: RBX::Tool  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2880
//
// 005d2880  8b442408             mov eax, dword ptr [esp + 8]
// 005d2884  83f802               cmp eax, 2
// 005d2887  7519                 jne 0x5d28a2
// 005d2889  56                   push esi
// 005d288a  8b742408             mov esi, dword ptr [esp + 8]
// 005d288e  56                   push esi
// 005d288f  b948c78a00           mov ecx, 0x8ac748
// 005d2894  ff1508e77700         call dword ptr [0x77e708]
// 005d289a  f6d8                 neg al
// 005d289c  1bc0                 sbb eax, eax
// 005d289e  23c6                 and eax, esi
// 005d28a0  5e                   pop esi
// 005d28a1  c3                   ret 
// 005d28a2  8b542404             mov edx, dword ptr [esp + 4]
// 005d28a6  c644240800           mov byte ptr [esp + 8], 0
// 005d28ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d28af  51                   push ecx
// 005d28b0  50                   push eax
// 005d28b1  52                   push edx
// 005d28b2  e849fdffff           call 0x5d2600
// 005d28b7  83c40c               add esp, 0xc
// 005d28ba  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" type_info type_info_8ac748;

struct Tool {
    int f(int, int);
};

int Tool::f(int a, int b) {
    if (b == 2) {
        int r = a;
        if (!(type_info_8ac748 == *(type_info*)a)) {
            r = 0;
        }
        return r;
    }
    return ((int (__cdecl*)(int, int, int))0x5d2600)(a, b, 0);
}
