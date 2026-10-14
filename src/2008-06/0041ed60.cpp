// from server: 100% by colin
// roc 2008-06 0041ed60  unit: RBX::VSpecialShape::?$FactoryProduct::Creator  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ed60
//
// 0041ed60  6aff                 push -1
// 0041ed62  64a100000000         mov eax, dword ptr fs:[0]
// 0041ed68  6868917d00           push 0x7d9168
// 0041ed6d  50                   push eax
// 0041ed6e  64892500000000       mov dword ptr fs:[0], esp
// 0041ed75  83ec0c               sub esp, 0xc
// 0041ed78  53                   push ebx
// 0041ed79  55                   push ebp
// 0041ed7a  56                   push esi
// 0041ed7b  57                   push edi
// 0041ed7c  68d0d09600           push 0x96d0d0
// 0041ed81  6820e24100           push 0x41e220
// 0041ed86  8bd9                 mov ebx, ecx
// 0041ed88  e8a3851300           call 0x557330
// 0041ed8d  83c408               add esp, 8
// 0041ed90  e8bbf2ffff           call 0x41e050
// 0041ed95  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 0041ed9b  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 0041eda1  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0041eda7  8db390010000         lea esi, [ebx + 0x190]
// 0041edad  8bf8                 mov edi, eax
// 0041edaf  8d4701               lea eax, [edi + 1]
// 0041edb2  c1f903               sar ecx, 3
// 0041edb5  3bc1                 cmp eax, ecx
// 0041edb7  7620                 jbe 0x41edd9
// 0041edb9  83ec08               sub esp, 8
// 0041edbc  8bcc                 mov ecx, esp
// 0041edbe  c70100000000         mov dword ptr [ecx], 0
// 0041edc4  89642418             mov dword ptr [esp + 0x18], esp
// 0041edc8  c7410400000000       mov dword ptr [ecx + 4], 0
// 0041edcf  50                   push eax
// 0041edd0  8bce                 mov ecx, esi
// 0041edd2  e8e936ffff           call 0x4124c0
// 0041edd7  eb1d                 jmp 0x41edf6
// 0041edd9  8b5610               mov edx, dword ptr [esi + 0x10]
// 0041eddc  2b560c               sub edx, dword ptr [esi + 0xc]
// 0041eddf  c1fa03               sar edx, 3
// 0041ede2  3bfa                 cmp edi, edx
// 0041ede4  7202                 jb 0x41ede8
// 0041ede6  ffd5                 call ebp
// 0041ede8  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041edeb  8b04f8               mov eax, dword ptr [eax + edi*8]
// 0041edee  85c0                 test eax, eax
// 0041edf0  0f8597000000         jne 0x41ee8d
// 0041edf6  68ccd09600           push 0x96d0cc
// 0041edfb  68f0e04100           push 0x41e0f0
// 0041ee00  e82b851300           call 0x557330
// 0041ee05  83c408               add esp, 8
// 0041ee08  e8d3f1ffff           call 0x41dfe0
// 0041ee0d  50                   push eax
// 0041ee0e  8d4c2418             lea ecx, [esp + 0x18]
// 0041ee12  51                   push ecx
// 0041ee13  8bcb                 mov ecx, ebx
// 0041ee15  e8763c1500           call 0x572a90
// 0041ee1a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041ee1e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0041ee26  85c9                 test ecx, ecx
// 0041ee28  7526                 jne 0x41ee50
// 0041ee2a  8d4c2414             lea ecx, [esp + 0x14]
// 0041ee2e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0041ee36  e825181e00           call 0x600660
// 0041ee3b  33c0                 xor eax, eax
// 0041ee3d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041ee41  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ee48  5f                   pop edi
// 0041ee49  5e                   pop esi
// 0041ee4a  5d                   pop ebp
// 0041ee4b  5b                   pop ebx
// 0041ee4c  83c418               add esp, 0x18
// 0041ee4f  c3                   ret 
// 0041ee50  8b5610               mov edx, dword ptr [esi + 0x10]
// 0041ee53  2b560c               sub edx, dword ptr [esi + 0xc]
// 0041ee56  8bd9                 mov ebx, ecx
// 0041ee58  c1fa03               sar edx, 3
// 0041ee5b  3bfa                 cmp edi, edx
// 0041ee5d  7206                 jb 0x41ee65
// 0041ee5f  ffd5                 call ebp
// 0041ee61  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041ee65  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041ee68  8d04f8               lea eax, [eax + edi*8]
// 0041ee6b  8908                 mov dword ptr [eax], ecx
// 0041ee6d  8d4c2418             lea ecx, [esp + 0x18]
// 0041ee71  51                   push ecx
// 0041ee72  8d4804               lea ecx, [eax + 4]
// 0041ee75  e83637feff           call 0x4025b0
// 0041ee7a  8d4c2414             lea ecx, [esp + 0x14]
// 0041ee7e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0041ee86  e8d5171e00           call 0x600660
// 0041ee8b  8bc3                 mov eax, ebx
// 0041ee8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041ee91  5f                   pop edi
// 0041ee92  5e                   pop esi
// 0041ee93  5d                   pop ebp
// 0041ee94  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ee9b  5b                   pop ebx
// 0041ee9c  83c418               add esp, 0x18
// 0041ee9f  c3                   ret 

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
