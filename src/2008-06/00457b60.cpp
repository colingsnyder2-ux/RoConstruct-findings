// from server: 100% by colin
// roc 2008-06 00457b60  unit: CRobloxReportView  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457b60
//
// 00457b60  6aff                 push -1
// 00457b62  64a100000000         mov eax, dword ptr fs:[0]
// 00457b68  6868917d00           push 0x7d9168
// 00457b6d  50                   push eax
// 00457b6e  64892500000000       mov dword ptr fs:[0], esp
// 00457b75  83ec0c               sub esp, 0xc
// 00457b78  53                   push ebx
// 00457b79  55                   push ebp
// 00457b7a  56                   push esi
// 00457b7b  57                   push edi
// 00457b7c  689cdd9600           push 0x96dd9c
// 00457b81  6800644500           push 0x456400
// 00457b86  8bd9                 mov ebx, ecx
// 00457b88  e8a3f70f00           call 0x557330
// 00457b8d  83c408               add esp, 8
// 00457b90  e80be3ffff           call 0x455ea0
// 00457b95  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 00457b9b  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 00457ba1  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00457ba7  8db390010000         lea esi, [ebx + 0x190]
// 00457bad  8bf8                 mov edi, eax
// 00457baf  8d4701               lea eax, [edi + 1]
// 00457bb2  c1f903               sar ecx, 3
// 00457bb5  3bc1                 cmp eax, ecx
// 00457bb7  7620                 jbe 0x457bd9
// 00457bb9  83ec08               sub esp, 8
// 00457bbc  8bcc                 mov ecx, esp
// 00457bbe  c70100000000         mov dword ptr [ecx], 0
// 00457bc4  89642418             mov dword ptr [esp + 0x18], esp
// 00457bc8  c7410400000000       mov dword ptr [ecx + 4], 0
// 00457bcf  50                   push eax
// 00457bd0  8bce                 mov ecx, esi
// 00457bd2  e8e9a8fbff           call 0x4124c0
// 00457bd7  eb1d                 jmp 0x457bf6
// 00457bd9  8b5610               mov edx, dword ptr [esi + 0x10]
// 00457bdc  2b560c               sub edx, dword ptr [esi + 0xc]
// 00457bdf  c1fa03               sar edx, 3
// 00457be2  3bfa                 cmp edi, edx
// 00457be4  7202                 jb 0x457be8
// 00457be6  ffd5                 call ebp
// 00457be8  8b460c               mov eax, dword ptr [esi + 0xc]
// 00457beb  8b04f8               mov eax, dword ptr [eax + edi*8]
// 00457bee  85c0                 test eax, eax
// 00457bf0  0f8597000000         jne 0x457c8d
// 00457bf6  6898dd9600           push 0x96dd98
// 00457bfb  68f0634500           push 0x4563f0
// 00457c00  e82bf70f00           call 0x557330
// 00457c05  83c408               add esp, 8
// 00457c08  e8b3e1ffff           call 0x455dc0
// 00457c0d  50                   push eax
// 00457c0e  8d4c2418             lea ecx, [esp + 0x18]
// 00457c12  51                   push ecx
// 00457c13  8bcb                 mov ecx, ebx
// 00457c15  e876ae1100           call 0x572a90
// 00457c1a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00457c1e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00457c26  85c9                 test ecx, ecx
// 00457c28  7526                 jne 0x457c50
// 00457c2a  8d4c2414             lea ecx, [esp + 0x14]
// 00457c2e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00457c36  e8258a1a00           call 0x600660
// 00457c3b  33c0                 xor eax, eax
// 00457c3d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00457c41  64890d00000000       mov dword ptr fs:[0], ecx
// 00457c48  5f                   pop edi
// 00457c49  5e                   pop esi
// 00457c4a  5d                   pop ebp
// 00457c4b  5b                   pop ebx
// 00457c4c  83c418               add esp, 0x18
// 00457c4f  c3                   ret 
// 00457c50  8b5610               mov edx, dword ptr [esi + 0x10]
// 00457c53  2b560c               sub edx, dword ptr [esi + 0xc]
// 00457c56  8bd9                 mov ebx, ecx
// 00457c58  c1fa03               sar edx, 3
// 00457c5b  3bfa                 cmp edi, edx
// 00457c5d  7206                 jb 0x457c65
// 00457c5f  ffd5                 call ebp
// 00457c61  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00457c65  8b460c               mov eax, dword ptr [esi + 0xc]
// 00457c68  8d04f8               lea eax, [eax + edi*8]
// 00457c6b  8908                 mov dword ptr [eax], ecx
// 00457c6d  8d4c2418             lea ecx, [esp + 0x18]
// 00457c71  51                   push ecx
// 00457c72  8d4804               lea ecx, [eax + 4]
// 00457c75  e836a9faff           call 0x4025b0
// 00457c7a  8d4c2414             lea ecx, [esp + 0x14]
// 00457c7e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00457c86  e8d5891a00           call 0x600660
// 00457c8b  8bc3                 mov eax, ebx
// 00457c8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00457c91  5f                   pop edi
// 00457c92  5e                   pop esi
// 00457c93  5d                   pop ebp
// 00457c94  64890d00000000       mov dword ptr fs:[0], ecx
// 00457c9b  5b                   pop ebx
// 00457c9c  83c418               add esp, 0x18
// 00457c9f  c3                   ret 

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
