// from server: 100% by colin
// roc 2008-06 00619080  unit: RBX::Flag  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619080
//
// 00619080  6aff                 push -1
// 00619082  64a100000000         mov eax, dword ptr fs:[0]
// 00619088  6868917d00           push 0x7d9168
// 0061908d  50                   push eax
// 0061908e  64892500000000       mov dword ptr fs:[0], esp
// 00619095  83ec0c               sub esp, 0xc
// 00619098  53                   push ebx
// 00619099  55                   push ebp
// 0061909a  56                   push esi
// 0061909b  57                   push edi
// 0061909c  6818bf9700           push 0x97bf18
// 006190a1  6850866100           push 0x618650
// 006190a6  8bd9                 mov ebx, ecx
// 006190a8  e883e2f3ff           call 0x557330
// 006190ad  83c408               add esp, 8
// 006190b0  e86bf4ffff           call 0x618520
// 006190b5  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 006190bb  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 006190c1  8b2d90288000         mov ebp, dword ptr [0x802890]
// 006190c7  8db390010000         lea esi, [ebx + 0x190]
// 006190cd  8bf8                 mov edi, eax
// 006190cf  8d4701               lea eax, [edi + 1]
// 006190d2  c1f903               sar ecx, 3
// 006190d5  3bc1                 cmp eax, ecx
// 006190d7  7620                 jbe 0x6190f9
// 006190d9  83ec08               sub esp, 8
// 006190dc  8bcc                 mov ecx, esp
// 006190de  c70100000000         mov dword ptr [ecx], 0
// 006190e4  89642418             mov dword ptr [esp + 0x18], esp
// 006190e8  c7410400000000       mov dword ptr [ecx + 4], 0
// 006190ef  50                   push eax
// 006190f0  8bce                 mov ecx, esi
// 006190f2  e8c993dfff           call 0x4124c0
// 006190f7  eb1d                 jmp 0x619116
// 006190f9  8b5610               mov edx, dword ptr [esi + 0x10]
// 006190fc  2b560c               sub edx, dword ptr [esi + 0xc]
// 006190ff  c1fa03               sar edx, 3
// 00619102  3bfa                 cmp edi, edx
// 00619104  7202                 jb 0x619108
// 00619106  ffd5                 call ebp
// 00619108  8b460c               mov eax, dword ptr [esi + 0xc]
// 0061910b  8b04f8               mov eax, dword ptr [eax + edi*8]
// 0061910e  85c0                 test eax, eax
// 00619110  0f8597000000         jne 0x6191ad
// 00619116  6800789700           push 0x977800
// 0061911b  68a0ff5b00           push 0x5bffa0
// 00619120  e80be2f3ff           call 0x557330
// 00619125  83c408               add esp, 8
// 00619128  e82368faff           call 0x5bf950
// 0061912d  50                   push eax
// 0061912e  8d4c2418             lea ecx, [esp + 0x18]
// 00619132  51                   push ecx
// 00619133  8bcb                 mov ecx, ebx
// 00619135  e85699f5ff           call 0x572a90
// 0061913a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061913e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00619146  85c9                 test ecx, ecx
// 00619148  7526                 jne 0x619170
// 0061914a  8d4c2414             lea ecx, [esp + 0x14]
// 0061914e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00619156  e80575feff           call 0x600660
// 0061915b  33c0                 xor eax, eax
// 0061915d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00619161  64890d00000000       mov dword ptr fs:[0], ecx
// 00619168  5f                   pop edi
// 00619169  5e                   pop esi
// 0061916a  5d                   pop ebp
// 0061916b  5b                   pop ebx
// 0061916c  83c418               add esp, 0x18
// 0061916f  c3                   ret 
// 00619170  8b5610               mov edx, dword ptr [esi + 0x10]
// 00619173  2b560c               sub edx, dword ptr [esi + 0xc]
// 00619176  8bd9                 mov ebx, ecx
// 00619178  c1fa03               sar edx, 3
// 0061917b  3bfa                 cmp edi, edx
// 0061917d  7206                 jb 0x619185
// 0061917f  ffd5                 call ebp
// 00619181  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00619185  8b460c               mov eax, dword ptr [esi + 0xc]
// 00619188  8d04f8               lea eax, [eax + edi*8]
// 0061918b  8908                 mov dword ptr [eax], ecx
// 0061918d  8d4c2418             lea ecx, [esp + 0x18]
// 00619191  51                   push ecx
// 00619192  8d4804               lea ecx, [eax + 4]
// 00619195  e81694deff           call 0x4025b0
// 0061919a  8d4c2414             lea ecx, [esp + 0x14]
// 0061919e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 006191a6  e8b574feff           call 0x600660
// 006191ab  8bc3                 mov eax, ebx
// 006191ad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006191b1  5f                   pop edi
// 006191b2  5e                   pop esi
// 006191b3  5d                   pop ebp
// 006191b4  64890d00000000       mov dword ptr fs:[0], ecx
// 006191bb  5b                   pop ebx
// 006191bc  83c418               add esp, 0x18
// 006191bf  c3                   ret 

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
