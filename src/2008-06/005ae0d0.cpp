// from server: 100% by king_originala
// roc 2008-06 005ae0d0  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ae0d0
//
// 005ae0d0  6aff                 push -1
// 005ae0d2  6821337d00           push 0x7d3321
// 005ae0d7  64a100000000         mov eax, dword ptr fs:[0]
// 005ae0dd  50                   push eax
// 005ae0de  64892500000000       mov dword ptr fs:[0], esp
// 005ae0e5  83ec48               sub esp, 0x48
// 005ae0e8  53                   push ebx
// 005ae0e9  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 005ae0ed  56                   push esi
// 005ae0ee  8bf1                 mov esi, ecx
// 005ae0f0  53                   push ebx
// 005ae0f1  8d4c2464             lea ecx, [esp + 0x64]
// 005ae0f5  8974240c             mov dword ptr [esp + 0xc], esi
// 005ae0f9  e8c2f7ffff           call 0x5ad8c0
// 005ae0fe  8b86c8010000         mov eax, dword ptr [esi + 0x1c8]
// 005ae104  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005ae10c  85c0                 test eax, eax
// 005ae10e  743b                 je 0x5ae14b
// 005ae110  e84b56eeff           call 0x493760
// 005ae115  833802               cmp dword ptr [eax], 2
// 005ae118  7531                 jne 0x5ae14b
// 005ae11a  68a8468300           push 0x8346a8
// 005ae11f  8d4c2410             lea ecx, [esp + 0x10]
// 005ae123  ff1558248000         call dword ptr [0x802458]
// 005ae129  8d4c240c             lea ecx, [esp + 0xc]
// 005ae12d  51                   push ecx
// 005ae12e  8d4c242c             lea ecx, [esp + 0x2c]
// 005ae132  c644245c01           mov byte ptr [esp + 0x5c], 1
// 005ae137  e814bce5ff           call 0x409d50
// 005ae13c  68c81b8d00           push 0x8d1bc8
// 005ae141  8d54242c             lea edx, [esp + 0x2c]
// 005ae145  52                   push edx
// 005ae146  e841340f00           call 0x6a158c
// 005ae14b  8b442464             mov eax, dword ptr [esp + 0x64]
// 005ae14f  55                   push ebp
// 005ae150  57                   push edi
// 005ae151  50                   push eax
// 005ae152  53                   push ebx
// 005ae153  e8a8420700           call 0x622400
// 005ae158  83c408               add esp, 8
// 005ae15b  8be8                 mov ebp, eax
// 005ae15d  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 005ae165  e846dae7ff           call 0x42bbb0
// 005ae16a  8bf0                 mov esi, eax
// 005ae16c  8bce                 mov ecx, esi
// 005ae16e  e8fd93ffff           call 0x5a7570
// 005ae173  8bf8                 mov edi, eax
// 005ae175  8b442468             mov eax, dword ptr [esp + 0x68]
// 005ae179  3bf8                 cmp edi, eax
// 005ae17b  7414                 je 0x5ae191
// 005ae17d  50                   push eax
// 005ae17e  8bce                 mov ecx, esi
// 005ae180  e82b95ffff           call 0x5a76b0
// 005ae185  85ff                 test edi, edi
// 005ae187  7408                 je 0x5ae191
// 005ae189  57                   push edi
// 005ae18a  8bce                 mov ecx, esi
// 005ae18c  e85f8effff           call 0x5a6ff0
// 005ae191  8bc5                 mov eax, ebp
// 005ae193  83e800               sub eax, 0
// 005ae196  5f                   pop edi
// 005ae197  5d                   pop ebp
// 005ae198  745f                 je 0x5ae1f9
// 005ae19a  83e801               sub eax, 1
// 005ae19d  7421                 je 0x5ae1c0
// 005ae19f  53                   push ebx
// 005ae1a0  e86be4ffff           call 0x5ac610
// 005ae1a5  83c404               add esp, 4
// 005ae1a8  5e                   pop esi
// 005ae1a9  b802000000           mov eax, 2
// 005ae1ae  5b                   pop ebx
// 005ae1af  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005ae1b3  64890d00000000       mov dword ptr fs:[0], ecx
// 005ae1ba  83c454               add esp, 0x54
// 005ae1bd  c20800               ret 8
// 005ae1c0  85db                 test ebx, ebx
// 005ae1c2  7405                 je 0x5ae1c9
// 005ae1c4  8d43f4               lea eax, [ebx - 0xc]
// 005ae1c7  eb02                 jmp 0x5ae1cb
// 005ae1c9  33c0                 xor eax, eax
// 005ae1cb  80780800             cmp byte ptr [eax + 8], 0
// 005ae1cf  7510                 jne 0x5ae1e1
// 005ae1d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ae1d5  8b89a8010000         mov ecx, dword ptr [ecx + 0x1a8]
// 005ae1db  53                   push ebx
// 005ae1dc  e8ef350700           call 0x6217d0
// 005ae1e1  5e                   pop esi
// 005ae1e2  b801000000           mov eax, 1
// 005ae1e7  5b                   pop ebx
// 005ae1e8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005ae1ec  64890d00000000       mov dword ptr fs:[0], ecx
// 005ae1f3  83c454               add esp, 0x54
// 005ae1f6  c20800               ret 8
// 005ae1f9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005ae1fd  5e                   pop esi
// 005ae1fe  33c0                 xor eax, eax
// 005ae200  5b                   pop ebx
// 005ae201  64890d00000000       mov dword ptr fs:[0], ecx
// 005ae208  83c454               add esp, 0x54
// 005ae20b  c20800               ret 8

namespace std
{
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string
    {
        unsigned char allocator_storage[4];
        union
        {
            T buffer[16];
            T *pointer;
        } storage;
        unsigned int length;
        unsigned int capacity;

    public:
        basic_string(const T *);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern void (__thiscall *string_constructor)(std::string *, const char *);

namespace std
{
    template<>
    __forceinline basic_string<char, char_traits<char>, allocator<char> >::basic_string(const char *text)
    {
        string_constructor(this, text);
    }
}

struct ScriptState;

struct ThreadStorage
{
    ScriptState *sub_5a7570();
    void sub_5a76b0(ScriptState *);
    void sub_5a6ff0(ScriptState *);
};

extern "C" ThreadStorage *__cdecl sub_42bbb0();
extern "C" int *__cdecl sub_493760();
extern "C" int __cdecl sub_622400(ScriptState *, int);
extern "C" void __cdecl sub_5ac610(ScriptState *);

struct StateGuard
{
    ScriptState *previous;
    StateGuard(ScriptState *);
    ~StateGuard();
};

__forceinline StateGuard::~StateGuard()
{
    ThreadStorage *storage = sub_42bbb0();
    ScriptState *current = storage->sub_5a7570();
    if (current != previous)
    {
        storage->sub_5a76b0(previous);
        if (current)
            storage->sub_5a6ff0(current);
    }
}

struct ScriptError
{
    unsigned char data[40];
    ScriptError(const std::string &);
    ScriptError(const ScriptError &);
    ~ScriptError();
};

struct Scheduler
{
    void sub_6217d0(ScriptState *);
};

struct StateHeader
{
    unsigned char padding[8];
    unsigned char suspended;
};

struct S
{
    unsigned char padding0[0x1a8];
    Scheduler *scheduler;
    unsigned char padding1[0x1c];
    void *volatile timeout;

    int sub_5ae0d0(ScriptState *, int);
};

int S::sub_5ae0d0(ScriptState *state, int arguments)
{
    int result;
    {
        StateGuard guard(state);
        if (timeout && *sub_493760() == 2)
        {
            std::string message("Game script timout");
            throw ScriptError(message);
        }
        result = sub_622400(state, arguments);
    }

    switch (result)
    {
    case 0:
        return 0;
    case 1:
        {
            StateHeader *header = state
                ? reinterpret_cast<StateHeader *>(
                    reinterpret_cast<char *>(state) - 12)
                : 0;
            if (!header->suspended)
                scheduler->sub_6217d0(state);
            return 1;
        }
    default:
        sub_5ac610(state);
        return 2;
    }
}
