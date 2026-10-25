// from server: 100% by king_originala
// roc 2008-06 00494ed0  unit: RBX::VRunService::?$SignalDesc  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494ed0
//
// 00494ed0  64a100000000         mov eax, dword ptr fs:[0]
// 00494ed6  6aff                 push -1
// 00494ed8  6858647c00           push 0x7c6458
// 00494edd  50                   push eax
// 00494ede  64892500000000       mov dword ptr fs:[0], esp
// 00494ee5  56                   push esi
// 00494ee6  57                   push edi
// 00494ee7  8bf1                 mov esi, ecx
// 00494ee9  8d442418             lea eax, [esp + 0x18]
// 00494eed  50                   push eax
// 00494eee  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00494ef6  c70600000000         mov dword ptr [esi], 0
// 00494efc  e8ef531700           call 0x60a2f0
// 00494f01  83c404               add esp, 4
// 00494f04  84c0                 test al, al
// 00494f06  7522                 jne 0x494f2a
// 00494f08  6a24                 push 0x24
// 00494f0a  e811ba2000           call 0x6a0920
// 00494f0f  8d4c241c             lea ecx, [esp + 0x1c]
// 00494f13  8bf8                 mov edi, eax
// 00494f15  51                   push ecx
// 00494f16  57                   push edi
// 00494f17  e874c3ffff           call 0x491290
// 00494f1c  83c40c               add esp, 0xc
// 00494f1f  897e08               mov dword ptr [esi + 8], edi
// 00494f22  c7069c228200         mov dword ptr [esi], 0x82229c
// 00494f28  eb06                 jmp 0x494f30
// 00494f2a  c70600000000         mov dword ptr [esi], 0
// 00494f30  8d4c2418             lea ecx, [esp + 0x18]
// 00494f34  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00494f3c  e85f88ffff           call 0x48d7a0
// 00494f41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00494f45  5f                   pop edi
// 00494f46  8bc6                 mov eax, esi
// 00494f48  64890d00000000       mov dword ptr fs:[0], ecx
// 00494f4f  5e                   pop esi
// 00494f50  83c40c               add esp, 0xc
// 00494f53  c22800               ret 0x28

struct Argument {
    char data[40];
    ~Argument();
};

extern "C" bool __cdecl func_0060a2f0();
void* __cdecl operator new(unsigned int);
extern "C" void __cdecl initialize(void*, const Argument*);
extern unsigned char functionTable[];

struct S {
    const void* table;
    unsigned int reserved;
    void* object;

    S(Argument argument);
};

S::S(Argument argument)
{
    table = 0;
    if (!reinterpret_cast<bool (__cdecl*)(const Argument*)>(
            func_0060a2f0)(&argument)) {
        void* p = operator new(36);
        initialize(p, &argument);
        object = p;
        table = functionTable;
    } else {
        table = 0;
    }
}
