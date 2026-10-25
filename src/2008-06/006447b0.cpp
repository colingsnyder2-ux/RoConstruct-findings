// from server: 100% by colin
// roc 2008-06 006447b0  unit: RBX::HUMAN::Climbing  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006447b0
//
// 006447b0  6aff                 push -1
// 006447b2  64a100000000         mov eax, dword ptr fs:[0]
// 006447b8  6868917d00           push 0x7d9168
// 006447bd  50                   push eax
// 006447be  64892500000000       mov dword ptr fs:[0], esp
// 006447c5  83ec0c               sub esp, 0xc
// 006447c8  53                   push ebx
// 006447c9  55                   push ebp
// 006447ca  56                   push esi
// 006447cb  57                   push edi
// 006447cc  68e8d59700           push 0x97d5e8
// 006447d1  68003d6400           push 0x643d00
// 006447d6  8bd9                 mov ebx, ecx
// 006447d8  e8532bf1ff           call 0x557330
// 006447dd  83c408               add esp, 8
// 006447e0  e80bedffff           call 0x6434f0
// 006447e5  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 006447eb  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 006447f1  8b2d90288000         mov ebp, dword ptr [0x802890]
// 006447f7  8db390010000         lea esi, [ebx + 0x190]
// 006447fd  8bf8                 mov edi, eax
// 006447ff  8d4701               lea eax, [edi + 1]
// 00644802  c1f903               sar ecx, 3
// 00644805  3bc1                 cmp eax, ecx
// 00644807  7620                 jbe 0x644829
// 00644809  83ec08               sub esp, 8
// 0064480c  8bcc                 mov ecx, esp
// 0064480e  c70100000000         mov dword ptr [ecx], 0
// 00644814  89642418             mov dword ptr [esp + 0x18], esp
// 00644818  c7410400000000       mov dword ptr [ecx + 4], 0
// 0064481f  50                   push eax
// 00644820  8bce                 mov ecx, esi
// 00644822  e899dcdcff           call 0x4124c0
// 00644827  eb1d                 jmp 0x644846
// 00644829  8b5610               mov edx, dword ptr [esi + 0x10]
// 0064482c  2b560c               sub edx, dword ptr [esi + 0xc]
// 0064482f  c1fa03               sar edx, 3
// 00644832  3bfa                 cmp edi, edx
// 00644834  7202                 jb 0x644838
// 00644836  ffd5                 call ebp
// 00644838  8b460c               mov eax, dword ptr [esi + 0xc]
// 0064483b  8b04f8               mov eax, dword ptr [eax + edi*8]
// 0064483e  85c0                 test eax, eax
// 00644840  0f8597000000         jne 0x6448dd
// 00644846  6808789700           push 0x977808
// 0064484b  68c0ff5b00           push 0x5bffc0
// 00644850  e8db2af1ff           call 0x557330
// 00644855  83c408               add esp, 8
// 00644858  e8d3b1f7ff           call 0x5bfa30
// 0064485d  50                   push eax
// 0064485e  8d4c2418             lea ecx, [esp + 0x18]
// 00644862  51                   push ecx
// 00644863  8bcb                 mov ecx, ebx
// 00644865  e826e2f2ff           call 0x572a90
// 0064486a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064486e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00644876  85c9                 test ecx, ecx
// 00644878  7526                 jne 0x6448a0
// 0064487a  8d4c2414             lea ecx, [esp + 0x14]
// 0064487e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00644886  e8d5bdfbff           call 0x600660
// 0064488b  33c0                 xor eax, eax
// 0064488d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00644891  64890d00000000       mov dword ptr fs:[0], ecx
// 00644898  5f                   pop edi
// 00644899  5e                   pop esi
// 0064489a  5d                   pop ebp
// 0064489b  5b                   pop ebx
// 0064489c  83c418               add esp, 0x18
// 0064489f  c3                   ret 
// 006448a0  8b5610               mov edx, dword ptr [esi + 0x10]
// 006448a3  2b560c               sub edx, dword ptr [esi + 0xc]
// 006448a6  8bd9                 mov ebx, ecx
// 006448a8  c1fa03               sar edx, 3
// 006448ab  3bfa                 cmp edi, edx
// 006448ad  7206                 jb 0x6448b5
// 006448af  ffd5                 call ebp
// 006448b1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006448b5  8b460c               mov eax, dword ptr [esi + 0xc]
// 006448b8  8d04f8               lea eax, [eax + edi*8]
// 006448bb  8908                 mov dword ptr [eax], ecx
// 006448bd  8d4c2418             lea ecx, [esp + 0x18]
// 006448c1  51                   push ecx
// 006448c2  8d4804               lea ecx, [eax + 4]
// 006448c5  e8e6dcdbff           call 0x4025b0
// 006448ca  8d4c2414             lea ecx, [esp + 0x14]
// 006448ce  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 006448d6  e885bdfbff           call 0x600660
// 006448db  8bc3                 mov eax, ebx
// 006448dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006448e1  5f                   pop edi
// 006448e2  5e                   pop esi
// 006448e3  5d                   pop ebp
// 006448e4  64890d00000000       mov dword ptr fs:[0], ecx
// 006448eb  5b                   pop ebx
// 006448ec  83c418               add esp, 0x18
// 006448ef  c3                   ret 

extern void (__cdecl* invalid_parameter)();
extern void __cdecl initialize_index();
extern void __cdecl initialize_type();
extern unsigned long index_once;
extern unsigned long type_once;
extern void __cdecl call_once(void (__cdecl*)(), unsigned long*);
extern void* __cdecl func_0042d030();
extern void* __cdecl func_0042ced0();

struct Control {
    void* value;
    Control();
    Control& operator=(const Control&);
};

__forceinline Control::Control() : value(0)
{
}

struct Pair {
    void* object;
    Control control;
    ~Pair();
};

struct EmptyPair {
    void* object;
    Control control;
    EmptyPair();
    EmptyPair(const EmptyPair&);
    ~EmptyPair();
};

__forceinline EmptyPair::EmptyPair()
    : object(0), control()
{
}

struct Vector {
    unsigned char padding[12];
    Pair* first;
    Pair* last;
    Pair* limit;
    void resize(unsigned int, EmptyPair);
    unsigned int size() const;
    Pair& at(unsigned int, void (__cdecl*)());
};

__forceinline unsigned int Vector::size() const
{
    return (unsigned int)(last - first);
}

__forceinline Pair& Vector::at(unsigned int index, void (__cdecl* handler)())
{
    if (index >= (unsigned int)(last - first))
        handler();
    return first[index];
}

struct S {
    unsigned char padding[0x190];
    Vector values;
    Pair create(void*);
    void* get();
};

void* S::get()
{
    call_once(initialize_index, &index_once);
    unsigned int index = (unsigned int)func_0042d030();
    void (__cdecl* handler)() = invalid_parameter;
    Vector& entries = values;

    if (index + 1 > values.size()) {
        entries.resize(index + 1, EmptyPair());
    } else {
        void* existing = entries.at(index, handler).object;
        if (existing)
            return existing;
    }

    call_once(initialize_type, &type_once);
    Pair result = create(func_0042ced0());

    if (!result.object)
        return 0;

    void* object = result.object;
    Pair& destination = entries.at(index, handler);
    destination.object = result.object;
    destination.control = result.control;
    return object;
}
