// from server: 100% by king_originala
// roc 2008-06 00608c90  unit: RBX::P8PVInstance::?$SetImpl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608c90
//
// 00608c90  8b442404             mov eax, dword ptr [esp + 4]
// 00608c94  8bd1                 mov edx, ecx
// 00608c96  85c0                 test eax, eax
// 00608c98  7405                 je 0x608c9f
// 00608c9a  83c0ec               add eax, -0x14
// 00608c9d  eb02                 jmp 0x608ca1
// 00608c9f  33c0                 xor eax, eax
// 00608ca1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00608ca5  56                   push esi
// 00608ca6  8b7210               mov esi, dword ptr [edx + 0x10]
// 00608ca9  51                   push ecx
// 00608caa  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00608cb0  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00608cb3  034a0c               add ecx, dword ptr [edx + 0xc]
// 00608cb6  8b5208               mov edx, dword ptr [edx + 8]
// 00608cb9  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 00608cc0  ffd2                 call edx
// 00608cc2  5e                   pop esi
// 00608cc3  c20800               ret 8

typedef void (__thiscall *Setter)(void *, void *);

struct S {
    int reserved[2];
    Setter setter;
    int adjustment;
    int tableOffset;
    void f(void *object, void *value);
};

void S::f(void *object, void *value)
{
    char *base = object ? (char *)object - 20 : 0;
    int offset = *(int *)((char *)*(int **)(base + 308) + tableOffset);
    setter(base + (offset + adjustment) + 308, value);
}
