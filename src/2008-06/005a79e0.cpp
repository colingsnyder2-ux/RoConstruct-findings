// from server: 100% by king_originala
// roc 2008-06 005a79e0  unit: RBX::Log  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a79e0
//
// 005a79e0  6aff                 push -1
// 005a79e2  6838307d00           push 0x7d3038
// 005a79e7  64a100000000         mov eax, dword ptr fs:[0]
// 005a79ed  50                   push eax
// 005a79ee  64892500000000       mov dword ptr fs:[0], esp
// 005a79f5  51                   push ecx
// 005a79f6  a1ecf29700           mov eax, dword ptr [0x97f2ec]
// 005a79fb  8b500c               mov edx, dword ptr [eax + 0xc]
// 005a79fe  56                   push esi
// 005a79ff  8bf1                 mov esi, ecx
// 005a7a01  b9ecf29700           mov ecx, 0x97f2ec
// 005a7a06  89742404             mov dword ptr [esp + 4], esi
// 005a7a0a  ffd2                 call edx
// 005a7a0c  83c010               add eax, 0x10
// 005a7a0f  8906                 mov dword ptr [esi], eax
// 005a7a11  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a7a15  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a7a1d  85c0                 test eax, eax
// 005a7a1f  7438                 je 0x5a7a59
// 005a7a21  a90000ffff           test eax, 0xffff0000
// 005a7a26  7531                 jne 0x5a7a59
// 005a7a28  57                   push edi
// 005a7a29  0fb7f8               movzx edi, ax
// 005a7a2c  6a00                 push 0
// 005a7a2e  57                   push edi
// 005a7a2f  e86c44fbff           call 0x55bea0
// 005a7a34  83c408               add esp, 8
// 005a7a37  85c0                 test eax, eax
// 005a7a39  7409                 je 0x5a7a44
// 005a7a3b  57                   push edi
// 005a7a3c  50                   push eax
// 005a7a3d  8bce                 mov ecx, esi
// 005a7a3f  e8ac5ffbff           call 0x55d9f0
// 005a7a44  5f                   pop edi
// 005a7a45  8bc6                 mov eax, esi
// 005a7a47  5e                   pop esi
// 005a7a48  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a7a4c  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7a53  83c410               add esp, 0x10
// 005a7a56  c20400               ret 4
// 005a7a59  50                   push eax
// 005a7a5a  8bce                 mov ecx, esi
// 005a7a5c  e82ffeffff           call 0x5a7890
// 005a7a61  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a7a65  8bc6                 mov eax, esi
// 005a7a67  5e                   pop esi
// 005a7a68  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7a6f  83c410               add esp, 0x10
// 005a7a72  c20400               ret 4

struct Manager;
typedef char *(__thiscall *ManagerFunction)(Manager *);

struct Manager {
    ManagerFunction *vtable;
};

extern Manager manager;
extern "C" void *__cdecl findResource(unsigned int id, void *module);

struct StringBase {
    char *data;
    __forceinline StringBase();
    ~StringBase();
};

struct S : StringBase {
    S(const char *text);
    void loadResource(void *module, unsigned int id);
    void assign(const char *text);
};

__forceinline StringBase::StringBase()
{
    data = manager.vtable[3](&manager) + 16;
}

S::S(const char *text)
{
    if (text != 0 && ((unsigned long)text & 0xffff0000UL) == 0) {
        unsigned int id = (unsigned short)(unsigned long)text;
        void *module = findResource(id, 0);
        if (module != 0)
            loadResource(module, id);
    } else {
        assign(text);
    }
}
