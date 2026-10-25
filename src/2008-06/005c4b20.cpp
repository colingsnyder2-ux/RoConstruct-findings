// from server: 100% by king_originala
// roc 2008-06 005c4b20  unit: RBX::Visit  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4b20
//
// 005c4b20  64a100000000         mov eax, dword ptr fs:[0]
// 005c4b26  6aff                 push -1
// 005c4b28  6898497d00           push 0x7d4998
// 005c4b2d  50                   push eax
// 005c4b2e  64892500000000       mov dword ptr fs:[0], esp
// 005c4b35  56                   push esi
// 005c4b36  57                   push edi
// 005c4b37  8bf1                 mov esi, ecx
// 005c4b39  8d442418             lea eax, [esp + 0x18]
// 005c4b3d  50                   push eax
// 005c4b3e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c4b46  c70600000000         mov dword ptr [esi], 0
// 005c4b4c  e89f570400           call 0x60a2f0
// 005c4b51  83c404               add esp, 4
// 005c4b54  84c0                 test al, al
// 005c4b56  7522                 jne 0x5c4b7a
// 005c4b58  6a24                 push 0x24
// 005c4b5a  e8c1bd0d00           call 0x6a0920
// 005c4b5f  8d4c241c             lea ecx, [esp + 0x1c]
// 005c4b63  8bf8                 mov edi, eax
// 005c4b65  51                   push ecx
// 005c4b66  57                   push edi
// 005c4b67  e894feffff           call 0x5c4a00
// 005c4b6c  83c40c               add esp, 0xc
// 005c4b6f  897e08               mov dword ptr [esi + 8], edi
// 005c4b72  c706f48d8300         mov dword ptr [esi], 0x838df4
// 005c4b78  eb06                 jmp 0x5c4b80
// 005c4b7a  c70600000000         mov dword ptr [esi], 0
// 005c4b80  8d4c241c             lea ecx, [esp + 0x1c]
// 005c4b84  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005c4b8c  ff1568248000         call dword ptr [0x802468]
// 005c4b92  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c4b96  5f                   pop edi
// 005c4b97  8bc6                 mov eax, esi
// 005c4b99  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4ba0  5e                   pop esi
// 005c4ba1  83c40c               add esp, 0xc
// 005c4ba4  c22800               ret 0x28

struct String {
    unsigned char storage[28];
    ~String();
};

extern void (__thiscall *string_destroy)(String*);

inline String::~String()
{
    string_destroy(this);
}

struct Argument {
    unsigned int first;
    String text;
    unsigned int extra[2];
};

bool __cdecl func_0060a2f0();
void* __cdecl operator new(unsigned int);
void __cdecl func_005c4a00(void*, Argument*);
extern unsigned char function_table[];

struct S {
    const void* table;
    unsigned int reserved;
    void* object;

    S(Argument argument);
};

S::S(Argument argument)
{
    table = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Argument*)>(
            func_0060a2f0)(&argument)) {
        void* p = operator new(36);
        func_005c4a00(p, &argument);
        object = p;
        table = function_table;
    } else {
        table = 0;
    }
}
