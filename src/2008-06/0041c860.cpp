// from server: 100% by king_originala
// roc 2008-06 0041c860  unit: RBX::VDataModel::?$BoundFuncDesc  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c860
//
// 0041c860  64a100000000         mov eax, dword ptr fs:[0]
// 0041c866  6aff                 push -1
// 0041c868  68a8e17b00           push 0x7be1a8
// 0041c86d  50                   push eax
// 0041c86e  64892500000000       mov dword ptr fs:[0], esp
// 0041c875  56                   push esi
// 0041c876  57                   push edi
// 0041c877  8bf1                 mov esi, ecx
// 0041c879  8d442418             lea eax, [esp + 0x18]
// 0041c87d  50                   push eax
// 0041c87e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041c886  c70600000000         mov dword ptr [esi], 0
// 0041c88c  e85fda1e00           call 0x60a2f0
// 0041c891  83c404               add esp, 4
// 0041c894  84c0                 test al, al
// 0041c896  7522                 jne 0x41c8ba
// 0041c898  6a38                 push 0x38
// 0041c89a  e881402800           call 0x6a0920
// 0041c89f  8d4c241c             lea ecx, [esp + 0x1c]
// 0041c8a3  8bf8                 mov edi, eax
// 0041c8a5  51                   push ecx
// 0041c8a6  57                   push edi
// 0041c8a7  e804c7ffff           call 0x418fb0
// 0041c8ac  83c40c               add esp, 0xc
// 0041c8af  897e08               mov dword ptr [esi + 8], edi
// 0041c8b2  c70628ee8000         mov dword ptr [esi], 0x80ee28
// 0041c8b8  eb06                 jmp 0x41c8c0
// 0041c8ba  c70600000000         mov dword ptr [esi], 0
// 0041c8c0  8d4c2420             lea ecx, [esp + 0x20]
// 0041c8c4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0041c8cc  e8dfaaffff           call 0x4173b0
// 0041c8d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041c8d5  5f                   pop edi
// 0041c8d6  8bc6                 mov eax, esi
// 0041c8d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0041c8df  5e                   pop esi
// 0041c8e0  83c40c               add esp, 0xc
// 0041c8e3  c23c00               ret 0x3c

struct String {
    char data[28];
    ~String();
};

struct Argument {
    unsigned int prefix[2];
    String text;
    unsigned int suffix[6];
};

extern bool __cdecl func_0060a2f0();
extern void* __cdecl operator new(unsigned int);
extern void __cdecl func_00418fb0(void*, const Argument*);
extern const unsigned char functionTable[];

struct S {
    const void* table;
    unsigned int reserved;
    void* object;

    S(Argument argument);
};

S::S(Argument argument)
{
    table = 0;
    if (!reinterpret_cast<bool (__cdecl *)(const Argument*)>(
            &func_0060a2f0)(&argument)) {
        void* storage = operator new(0x38);
        func_00418fb0(storage, &argument);
        object = storage;
        table = functionTable;
    } else {
        table = 0;
    }
}
