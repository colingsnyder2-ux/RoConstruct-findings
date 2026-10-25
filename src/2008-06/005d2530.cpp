// from server: 100% by colin
// roc 2008-06 005d2530  unit: RBX::SpawnerService  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2530
//
// 005d2530  6aff                 push -1
// 005d2532  64a100000000         mov eax, dword ptr fs:[0]
// 005d2538  6868917d00           push 0x7d9168
// 005d253d  50                   push eax
// 005d253e  64892500000000       mov dword ptr fs:[0], esp
// 005d2545  83ec0c               sub esp, 0xc
// 005d2548  53                   push ebx
// 005d2549  55                   push ebp
// 005d254a  56                   push esi
// 005d254b  57                   push edi
// 005d254c  68a49d9700           push 0x979da4
// 005d2551  6870215d00           push 0x5d2170
// 005d2556  8bd9                 mov ebx, ecx
// 005d2558  e8d34df8ff           call 0x557330
// 005d255d  83c408               add esp, 8
// 005d2560  e80bf8ffff           call 0x5d1d70
// 005d2565  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 005d256b  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 005d2571  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005d2577  8db390010000         lea esi, [ebx + 0x190]
// 005d257d  8bf8                 mov edi, eax
// 005d257f  8d4701               lea eax, [edi + 1]
// 005d2582  c1f903               sar ecx, 3
// 005d2585  3bc1                 cmp eax, ecx
// 005d2587  7620                 jbe 0x5d25a9
// 005d2589  83ec08               sub esp, 8
// 005d258c  8bcc                 mov ecx, esp
// 005d258e  c70100000000         mov dword ptr [ecx], 0
// 005d2594  89642418             mov dword ptr [esp + 0x18], esp
// 005d2598  c7410400000000       mov dword ptr [ecx + 4], 0
// 005d259f  50                   push eax
// 005d25a0  8bce                 mov ecx, esi
// 005d25a2  e819ffe3ff           call 0x4124c0
// 005d25a7  eb1d                 jmp 0x5d25c6
// 005d25a9  8b5610               mov edx, dword ptr [esi + 0x10]
// 005d25ac  2b560c               sub edx, dword ptr [esi + 0xc]
// 005d25af  c1fa03               sar edx, 3
// 005d25b2  3bfa                 cmp edi, edx
// 005d25b4  7202                 jb 0x5d25b8
// 005d25b6  ffd5                 call ebp
// 005d25b8  8b460c               mov eax, dword ptr [esi + 0xc]
// 005d25bb  8b04f8               mov eax, dword ptr [eax + edi*8]
// 005d25be  85c0                 test eax, eax
// 005d25c0  0f8597000000         jne 0x5d265d
// 005d25c6  682c789700           push 0x97782c
// 005d25cb  6850005c00           push 0x5c0050
// 005d25d0  e85b4df8ff           call 0x557330
// 005d25d5  83c408               add esp, 8
// 005d25d8  e843d8feff           call 0x5bfe20
// 005d25dd  50                   push eax
// 005d25de  8d4c2418             lea ecx, [esp + 0x18]
// 005d25e2  51                   push ecx
// 005d25e3  8bcb                 mov ecx, ebx
// 005d25e5  e8a604faff           call 0x572a90
// 005d25ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d25ee  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005d25f6  85c9                 test ecx, ecx
// 005d25f8  7526                 jne 0x5d2620
// 005d25fa  8d4c2414             lea ecx, [esp + 0x14]
// 005d25fe  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005d2606  e855e00200           call 0x600660
// 005d260b  33c0                 xor eax, eax
// 005d260d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d2611  64890d00000000       mov dword ptr fs:[0], ecx
// 005d2618  5f                   pop edi
// 005d2619  5e                   pop esi
// 005d261a  5d                   pop ebp
// 005d261b  5b                   pop ebx
// 005d261c  83c418               add esp, 0x18
// 005d261f  c3                   ret 
// 005d2620  8b5610               mov edx, dword ptr [esi + 0x10]
// 005d2623  2b560c               sub edx, dword ptr [esi + 0xc]
// 005d2626  8bd9                 mov ebx, ecx
// 005d2628  c1fa03               sar edx, 3
// 005d262b  3bfa                 cmp edi, edx
// 005d262d  7206                 jb 0x5d2635
// 005d262f  ffd5                 call ebp
// 005d2631  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d2635  8b460c               mov eax, dword ptr [esi + 0xc]
// 005d2638  8d04f8               lea eax, [eax + edi*8]
// 005d263b  8908                 mov dword ptr [eax], ecx
// 005d263d  8d4c2418             lea ecx, [esp + 0x18]
// 005d2641  51                   push ecx
// 005d2642  8d4804               lea ecx, [eax + 4]
// 005d2645  e866ffe2ff           call 0x4025b0
// 005d264a  8d4c2414             lea ecx, [esp + 0x14]
// 005d264e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005d2656  e805e00200           call 0x600660
// 005d265b  8bc3                 mov eax, ebx
// 005d265d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d2661  5f                   pop edi
// 005d2662  5e                   pop esi
// 005d2663  5d                   pop ebp
// 005d2664  64890d00000000       mov dword ptr fs:[0], ecx
// 005d266b  5b                   pop ebx
// 005d266c  83c418               add esp, 0x18
// 005d266f  c3                   ret 

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
