// from server: 100% by colin
// roc 2008-06 0040ff20  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ff20
//
// 0040ff20  55                   push ebp
// 0040ff21  8bec                 mov ebp, esp
// 0040ff23  6aff                 push -1
// 0040ff25  6830d57b00           push 0x7bd530
// 0040ff2a  64a100000000         mov eax, dword ptr fs:[0]
// 0040ff30  50                   push eax
// 0040ff31  64892500000000       mov dword ptr fs:[0], esp
// 0040ff38  83ec10               sub esp, 0x10
// 0040ff3b  8b4508               mov eax, dword ptr [ebp + 8]
// 0040ff3e  53                   push ebx
// 0040ff3f  56                   push esi
// 0040ff40  57                   push edi
// 0040ff41  33ff                 xor edi, edi
// 0040ff43  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040ff46  3bc7                 cmp eax, edi
// 0040ff48  7518                 jne 0x40ff62
// 0040ff4a  b803400080           mov eax, 0x80004003
// 0040ff4f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040ff52  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ff59  5f                   pop edi
// 0040ff5a  5e                   pop esi
// 0040ff5b  5b                   pop ebx
// 0040ff5c  8be5                 mov esp, ebp
// 0040ff5e  5d                   pop ebp
// 0040ff5f  c20400               ret 4
// 0040ff62  bb0e000780           mov ebx, 0x8007000e
// 0040ff67  6a1c                 push 0x1c
// 0040ff69  8938                 mov dword ptr [eax], edi
// 0040ff6b  895dec               mov dword ptr [ebp - 0x14], ebx
// 0040ff6e  897de8               mov dword ptr [ebp - 0x18], edi
// 0040ff71  897dfc               mov dword ptr [ebp - 4], edi
// 0040ff74  e8a7092900           call 0x6a0920
// 0040ff79  8bf0                 mov esi, eax
// 0040ff7b  83c404               add esp, 4
// 0040ff7e  3bf7                 cmp esi, edi
// 0040ff80  742d                 je 0x40ffaf
// 0040ff82  897e04               mov dword ptr [esi + 4], edi
// 0040ff85  897e10               mov dword ptr [esi + 0x10], edi
// 0040ff88  897e0c               mov dword ptr [esi + 0xc], edi
// 0040ff8b  897e08               mov dword ptr [esi + 8], edi
// 0040ff8e  897e14               mov dword ptr [esi + 0x14], edi
// 0040ff91  897e18               mov dword ptr [esi + 0x18], edi
// 0040ff94  c706f0d78000         mov dword ptr [esi], 0x80d7f0
// 0040ff9a  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040ffa0  8b01                 mov eax, dword ptr [ecx]
// 0040ffa2  8b5004               mov edx, dword ptr [eax + 4]
// 0040ffa5  ffd2                 call edx
// 0040ffa7  3bf7                 cmp esi, edi
// 0040ffa9  741c                 je 0x40ffc7
// 0040ffab  33db                 xor ebx, ebx
// 0040ffad  eb18                 jmp 0x40ffc7
// 0040ffaf  33f6                 xor esi, esi
// 0040ffb1  ebf4                 jmp 0x40ffa7

extern void* __cdecl operator new(unsigned int);
extern void* objectTable[];

struct Module;
struct ModuleTable {
    void (__thiscall* first)(Module*);
    void (__thiscall* lock)(Module*);
};
struct Module {
    ModuleTable* table;
};
extern Module* module;

struct Exception {
    long status;
    Exception(const Exception&);
    ~Exception();
};

struct Object {
    void** table;
    long references;
    void* begin;
    void* end;
    void* current;
    void* owner;
    unsigned int flags;

    Object() throw();
    static long __stdcall Create(Object** result);
};

__forceinline Object::Object() throw()
{
    references = 0;
    current = 0;
    end = 0;
    begin = 0;
    owner = 0;
    flags = 0;
    table = objectTable;
    module->table->lock(module);
}

long __stdcall Object::Create(Object** result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    long status = (long)0x8007000e;
    Object* object = 0;

try {
        object = new Object;
    }
    catch (Exception exception) {
    }
    if (object)
        status = 0;

    *result = object;
    return status;
}
