// from server: 100% by king_originala
// roc 2008-06 00597080  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597080
//
// 00597080  64a100000000         mov eax, dword ptr fs:[0]
// 00597086  6aff                 push -1
// 00597088  6878237d00           push 0x7d2378
// 0059708d  50                   push eax
// 0059708e  64892500000000       mov dword ptr fs:[0], esp
// 00597095  56                   push esi
// 00597096  57                   push edi
// 00597097  8bf1                 mov esi, ecx
// 00597099  8d442418             lea eax, [esp + 0x18]
// 0059709d  50                   push eax
// 0059709e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005970a6  c70600000000         mov dword ptr [esi], 0
// 005970ac  e83f320700           call 0x60a2f0
// 005970b1  83c404               add esp, 4
// 005970b4  84c0                 test al, al
// 005970b6  7522                 jne 0x5970da
// 005970b8  6a50                 push 0x50
// 005970ba  e861981000           call 0x6a0920
// 005970bf  8d4c241c             lea ecx, [esp + 0x1c]
// 005970c3  8bf8                 mov edi, eax
// 005970c5  51                   push ecx
// 005970c6  57                   push edi
// 005970c7  e884f9ffff           call 0x596a50
// 005970cc  83c40c               add esp, 0xc
// 005970cf  897e08               mov dword ptr [esi + 8], edi
// 005970d2  c70658238300         mov dword ptr [esi], 0x832358
// 005970d8  eb06                 jmp 0x5970e0
// 005970da  c70600000000         mov dword ptr [esi], 0
// 005970e0  8d4c2420             lea ecx, [esp + 0x20]
// 005970e4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005970ec  e87ff3ffff           call 0x596470
// 005970f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005970f5  5f                   pop edi
// 005970f6  8bc6                 mov eax, esi
// 005970f8  64890d00000000       mov dword ptr fs:[0], ecx
// 005970ff  5e                   pop esi
// 00597100  83c40c               add esp, 0xc
// 00597103  c25400               ret 0x54

struct ArgumentTail {
    char data[76];
    ~ArgumentTail();
};

struct Argument {
    char data[8];
    ArgumentTail tail;
};

extern bool __cdecl func_0060a2f0(const Argument*);
extern void* __cdecl func_006a0920(unsigned int);
extern void __cdecl func_00596a50(void*, const Argument*);
extern int table_00832358[];

struct S {
    int* table;
    char padding[4];
    void* object;

    S(Argument argument);
};

S::S(Argument argument)
{
    table = 0;
    if (!func_0060a2f0(&argument)) {
        void* p = func_006a0920(80);
        func_00596a50(p, &argument);
        object = p;
        table = table_00832358;
    } else {
        table = 0;
    }
}
