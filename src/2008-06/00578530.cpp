// from server: 100% by colin
// roc 2008-06 00578530  unit: RBX::VTool::?$FactoryProduct::Creator  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578530
//
// 00578530  6aff                 push -1
// 00578532  64a100000000         mov eax, dword ptr fs:[0]
// 00578538  6868917d00           push 0x7d9168
// 0057853d  50                   push eax
// 0057853e  64892500000000       mov dword ptr fs:[0], esp
// 00578545  83ec0c               sub esp, 0xc
// 00578548  53                   push ebx
// 00578549  55                   push ebp
// 0057854a  56                   push esi
// 0057854b  57                   push edi
// 0057854c  6810529700           push 0x975210
// 00578551  6800685700           push 0x576800
// 00578556  8bd9                 mov ebx, ecx
// 00578558  e8d3edfdff           call 0x557330
// 0057855d  83c408               add esp, 8
// 00578560  e8cbd0ffff           call 0x575630
// 00578565  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 0057856b  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 00578571  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00578577  8db390010000         lea esi, [ebx + 0x190]
// 0057857d  8bf8                 mov edi, eax
// 0057857f  8d4701               lea eax, [edi + 1]
// 00578582  c1f903               sar ecx, 3
// 00578585  3bc1                 cmp eax, ecx
// 00578587  7620                 jbe 0x5785a9
// 00578589  83ec08               sub esp, 8
// 0057858c  8bcc                 mov ecx, esp
// 0057858e  c70100000000         mov dword ptr [ecx], 0
// 00578594  89642418             mov dword ptr [esp + 0x18], esp
// 00578598  c7410400000000       mov dword ptr [ecx + 4], 0
// 0057859f  50                   push eax
// 005785a0  8bce                 mov ecx, esi
// 005785a2  e8199fe9ff           call 0x4124c0
// 005785a7  eb1d                 jmp 0x5785c6
// 005785a9  8b5610               mov edx, dword ptr [esi + 0x10]
// 005785ac  2b560c               sub edx, dword ptr [esi + 0xc]
// 005785af  c1fa03               sar edx, 3
// 005785b2  3bfa                 cmp edi, edx
// 005785b4  7202                 jb 0x5785b8
// 005785b6  ffd5                 call ebp
// 005785b8  8b460c               mov eax, dword ptr [esi + 0xc]
// 005785bb  8b04f8               mov eax, dword ptr [eax + edi*8]
// 005785be  85c0                 test eax, eax
// 005785c0  0f8597000000         jne 0x57865d
// 005785c6  6808529700           push 0x975208
// 005785cb  6810665700           push 0x576610
// 005785d0  e85bedfdff           call 0x557330
// 005785d5  83c408               add esp, 8
// 005785d8  e873cfffff           call 0x575550
// 005785dd  50                   push eax
// 005785de  8d4c2418             lea ecx, [esp + 0x18]
// 005785e2  51                   push ecx
// 005785e3  8bcb                 mov ecx, ebx
// 005785e5  e8a6a4ffff           call 0x572a90
// 005785ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005785ee  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005785f6  85c9                 test ecx, ecx
// 005785f8  7526                 jne 0x578620
// 005785fa  8d4c2414             lea ecx, [esp + 0x14]
// 005785fe  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00578606  e855800800           call 0x600660
// 0057860b  33c0                 xor eax, eax
// 0057860d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00578611  64890d00000000       mov dword ptr fs:[0], ecx
// 00578618  5f                   pop edi
// 00578619  5e                   pop esi
// 0057861a  5d                   pop ebp
// 0057861b  5b                   pop ebx
// 0057861c  83c418               add esp, 0x18
// 0057861f  c3                   ret 
// 00578620  8b5610               mov edx, dword ptr [esi + 0x10]
// 00578623  2b560c               sub edx, dword ptr [esi + 0xc]
// 00578626  8bd9                 mov ebx, ecx
// 00578628  c1fa03               sar edx, 3
// 0057862b  3bfa                 cmp edi, edx
// 0057862d  7206                 jb 0x578635
// 0057862f  ffd5                 call ebp
// 00578631  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00578635  8b460c               mov eax, dword ptr [esi + 0xc]
// 00578638  8d04f8               lea eax, [eax + edi*8]
// 0057863b  8908                 mov dword ptr [eax], ecx
// 0057863d  8d4c2418             lea ecx, [esp + 0x18]
// 00578641  51                   push ecx
// 00578642  8d4804               lea ecx, [eax + 4]
// 00578645  e8669fe8ff           call 0x4025b0
// 0057864a  8d4c2414             lea ecx, [esp + 0x14]
// 0057864e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00578656  e805800800           call 0x600660
// 0057865b  8bc3                 mov eax, ebx
// 0057865d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00578661  5f                   pop edi
// 00578662  5e                   pop esi
// 00578663  5d                   pop ebp
// 00578664  64890d00000000       mov dword ptr fs:[0], ecx
// 0057866b  5b                   pop ebx
// 0057866c  83c418               add esp, 0x18
// 0057866f  c3                   ret 

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
