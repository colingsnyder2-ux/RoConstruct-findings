// from server: 100% by colin
// roc 2008-06 00490f10  unit: RBX::VHumanoid::?$FactoryProduct::Creator  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490f10
//
// 00490f10  6aff                 push -1
// 00490f12  64a100000000         mov eax, dword ptr fs:[0]
// 00490f18  6868917d00           push 0x7d9168
// 00490f1d  50                   push eax
// 00490f1e  64892500000000       mov dword ptr fs:[0], esp
// 00490f25  83ec0c               sub esp, 0xc
// 00490f28  53                   push ebx
// 00490f29  55                   push ebp
// 00490f2a  56                   push esi
// 00490f2b  57                   push edi
// 00490f2c  68ecfb9600           push 0x96fbec
// 00490f31  6850ad4800           push 0x48ad50
// 00490f36  8bd9                 mov ebx, ecx
// 00490f38  e8f3630c00           call 0x557330
// 00490f3d  83c408               add esp, 8
// 00490f40  e8bb94ffff           call 0x48a400
// 00490f45  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 00490f4b  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 00490f51  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00490f57  8db390010000         lea esi, [ebx + 0x190]
// 00490f5d  8bf8                 mov edi, eax
// 00490f5f  8d4701               lea eax, [edi + 1]
// 00490f62  c1f903               sar ecx, 3
// 00490f65  3bc1                 cmp eax, ecx
// 00490f67  7620                 jbe 0x490f89
// 00490f69  83ec08               sub esp, 8
// 00490f6c  8bcc                 mov ecx, esp
// 00490f6e  c70100000000         mov dword ptr [ecx], 0
// 00490f74  89642418             mov dword ptr [esp + 0x18], esp
// 00490f78  c7410400000000       mov dword ptr [ecx + 4], 0
// 00490f7f  50                   push eax
// 00490f80  8bce                 mov ecx, esi
// 00490f82  e83915f8ff           call 0x4124c0
// 00490f87  eb1d                 jmp 0x490fa6
// 00490f89  8b5610               mov edx, dword ptr [esi + 0x10]
// 00490f8c  2b560c               sub edx, dword ptr [esi + 0xc]
// 00490f8f  c1fa03               sar edx, 3
// 00490f92  3bfa                 cmp edi, edx
// 00490f94  7202                 jb 0x490f98
// 00490f96  ffd5                 call ebp
// 00490f98  8b460c               mov eax, dword ptr [esi + 0xc]
// 00490f9b  8b04f8               mov eax, dword ptr [eax + edi*8]
// 00490f9e  85c0                 test eax, eax
// 00490fa0  0f8597000000         jne 0x49103d
// 00490fa6  68e4fb9600           push 0x96fbe4
// 00490fab  6850ab4800           push 0x48ab50
// 00490fb0  e87b630c00           call 0x557330
// 00490fb5  83c408               add esp, 8
// 00490fb8  e89392ffff           call 0x48a250
// 00490fbd  50                   push eax
// 00490fbe  8d4c2418             lea ecx, [esp + 0x18]
// 00490fc2  51                   push ecx
// 00490fc3  8bcb                 mov ecx, ebx
// 00490fc5  e8c61a0e00           call 0x572a90
// 00490fca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00490fce  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00490fd6  85c9                 test ecx, ecx
// 00490fd8  7526                 jne 0x491000
// 00490fda  8d4c2414             lea ecx, [esp + 0x14]
// 00490fde  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00490fe6  e875f61600           call 0x600660
// 00490feb  33c0                 xor eax, eax
// 00490fed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00490ff1  64890d00000000       mov dword ptr fs:[0], ecx
// 00490ff8  5f                   pop edi
// 00490ff9  5e                   pop esi
// 00490ffa  5d                   pop ebp
// 00490ffb  5b                   pop ebx
// 00490ffc  83c418               add esp, 0x18
// 00490fff  c3                   ret 
// 00491000  8b5610               mov edx, dword ptr [esi + 0x10]
// 00491003  2b560c               sub edx, dword ptr [esi + 0xc]
// 00491006  8bd9                 mov ebx, ecx
// 00491008  c1fa03               sar edx, 3
// 0049100b  3bfa                 cmp edi, edx
// 0049100d  7206                 jb 0x491015
// 0049100f  ffd5                 call ebp
// 00491011  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00491015  8b460c               mov eax, dword ptr [esi + 0xc]
// 00491018  8d04f8               lea eax, [eax + edi*8]
// 0049101b  8908                 mov dword ptr [eax], ecx
// 0049101d  8d4c2418             lea ecx, [esp + 0x18]
// 00491021  51                   push ecx
// 00491022  8d4804               lea ecx, [eax + 4]
// 00491025  e88615f7ff           call 0x4025b0
// 0049102a  8d4c2414             lea ecx, [esp + 0x14]
// 0049102e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00491036  e825f61600           call 0x600660
// 0049103b  8bc3                 mov eax, ebx
// 0049103d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00491041  5f                   pop edi
// 00491042  5e                   pop esi
// 00491043  5d                   pop ebp
// 00491044  64890d00000000       mov dword ptr fs:[0], ecx
// 0049104b  5b                   pop ebx
// 0049104c  83c418               add esp, 0x18
// 0049104f  c3                   ret 

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
