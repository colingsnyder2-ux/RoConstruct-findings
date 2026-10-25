// from server: 100% by king_originala
// roc 2008-06 00599d70  unit: RBX::P8PartInstance::?$GetSetImpl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599d70
//
// 00599d70  8b442404             mov eax, dword ptr [esp + 4]
// 00599d74  8bd1                 mov edx, ecx
// 00599d76  85c0                 test eax, eax
// 00599d78  7405                 je 0x599d7f
// 00599d7a  83c0ec               add eax, -0x14
// 00599d7d  eb02                 jmp 0x599d81
// 00599d7f  33c0                 xor eax, eax
// 00599d81  56                   push esi
// 00599d82  8b7220               mov esi, dword ptr [edx + 0x20]
// 00599d85  51                   push ecx
// 00599d86  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00599d8a  d901                 fld dword ptr [ecx]
// 00599d8c  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00599d92  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00599d95  d91c24               fstp dword ptr [esp]
// 00599d98  034a1c               add ecx, dword ptr [edx + 0x1c]
// 00599d9b  8b5218               mov edx, dword ptr [edx + 0x18]
// 00599d9e  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 00599da5  ffd2                 call edx
// 00599da7  5e                   pop esi
// 00599da8  c20800               ret 8

typedef void (__thiscall *Setter)(void *, float);

struct S {
    char padding[0x18];
    Setter setter;
    int adjustment;
    int tableOffset;

    void f(void *object, const float *value);
};

void S::f(void *object, const float *value)
{
    char *base = object ? (char *)object - 0x14 : 0;
    int offset = tableOffset;
    setter(base + 0x134 +
               *(int *)(*(char **)(base + 0x134) + offset) +
               adjustment,
           *value);
}
