// from server: 100% by king_originala
// roc 2008-06 005fd8e0  unit: RBX::P8Tool::?$GetSetImpl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd8e0
//
// 005fd8e0  8b442404             mov eax, dword ptr [esp + 4]
// 005fd8e4  8bd1                 mov edx, ecx
// 005fd8e6  85c0                 test eax, eax
// 005fd8e8  7405                 je 0x5fd8ef
// 005fd8ea  83c0ec               add eax, -0x14
// 005fd8ed  eb02                 jmp 0x5fd8f1
// 005fd8ef  33c0                 xor eax, eax
// 005fd8f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd8f5  56                   push esi
// 005fd8f6  8b7220               mov esi, dword ptr [edx + 0x20]
// 005fd8f9  51                   push ecx
// 005fd8fa  8b88c0010000         mov ecx, dword ptr [eax + 0x1c0]
// 005fd900  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005fd903  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005fd906  8b5218               mov edx, dword ptr [edx + 0x18]
// 005fd909  8d8c01c0010000       lea ecx, [ecx + eax + 0x1c0]
// 005fd910  ffd2                 call edx
// 005fd912  5e                   pop esi
// 005fd913  c20800               ret 8

typedef void (__thiscall *Setter)(void *, int);

struct S {
    char padding[24];
    Setter setter;
    int adjustment;
    int virtualOffset;
    void f(void *object, int value);
};

void S::f(void *object, int value)
{
    char *base = object ? (char *)object - 20 : 0;
    setter(base + 448 +
           (*(int *)((char *)*(int **)(base + 448) + virtualOffset)
            + adjustment), value);
}
