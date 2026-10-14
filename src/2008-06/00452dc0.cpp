// from server: 100% by colin
// roc 2008-06 00452dc0  unit: RBX::VVisit::?$FactoryProduct::Creator  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00452dc0
//
// 00452dc0  6aff                 push -1
// 00452dc2  64a100000000         mov eax, dword ptr fs:[0]
// 00452dc8  6868917d00           push 0x7d9168
// 00452dcd  50                   push eax
// 00452dce  64892500000000       mov dword ptr fs:[0], esp
// 00452dd5  83ec0c               sub esp, 0xc
// 00452dd8  53                   push ebx
// 00452dd9  55                   push ebp
// 00452dda  56                   push esi
// 00452ddb  57                   push edi
// 00452ddc  6874dd9600           push 0x96dd74
// 00452de1  6870084500           push 0x450870
// 00452de6  8bd9                 mov ebx, ecx
// 00452de8  e843451000           call 0x557330
// 00452ded  83c408               add esp, 8
// 00452df0  e82bc6ffff           call 0x44f420
// 00452df5  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 00452dfb  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 00452e01  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00452e07  8db390010000         lea esi, [ebx + 0x190]
// 00452e0d  8bf8                 mov edi, eax
// 00452e0f  8d4701               lea eax, [edi + 1]
// 00452e12  c1f903               sar ecx, 3
// 00452e15  3bc1                 cmp eax, ecx
// 00452e17  7620                 jbe 0x452e39
// 00452e19  83ec08               sub esp, 8
// 00452e1c  8bcc                 mov ecx, esp
// 00452e1e  c70100000000         mov dword ptr [ecx], 0
// 00452e24  89642418             mov dword ptr [esp + 0x18], esp
// 00452e28  c7410400000000       mov dword ptr [ecx + 4], 0
// 00452e2f  50                   push eax
// 00452e30  8bce                 mov ecx, esi
// 00452e32  e889f6fbff           call 0x4124c0
// 00452e37  eb1d                 jmp 0x452e56
// 00452e39  8b5610               mov edx, dword ptr [esi + 0x10]
// 00452e3c  2b560c               sub edx, dword ptr [esi + 0xc]
// 00452e3f  c1fa03               sar edx, 3
// 00452e42  3bfa                 cmp edi, edx
// 00452e44  7202                 jb 0x452e48
// 00452e46  ffd5                 call ebp
// 00452e48  8b460c               mov eax, dword ptr [esi + 0xc]
// 00452e4b  8b04f8               mov eax, dword ptr [eax + edi*8]
// 00452e4e  85c0                 test eax, eax
// 00452e50  0f8597000000         jne 0x452eed
// 00452e56  68c4d19600           push 0x96d1c4
// 00452e5b  6830884300           push 0x438830
// 00452e60  e8cb441000           call 0x557330
// 00452e65  83c408               add esp, 8
// 00452e68  e8b350feff           call 0x437f20
// 00452e6d  50                   push eax
// 00452e6e  8d4c2418             lea ecx, [esp + 0x18]
// 00452e72  51                   push ecx
// 00452e73  8bcb                 mov ecx, ebx
// 00452e75  e816fc1100           call 0x572a90
// 00452e7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00452e7e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00452e86  85c9                 test ecx, ecx
// 00452e88  7526                 jne 0x452eb0
// 00452e8a  8d4c2414             lea ecx, [esp + 0x14]
// 00452e8e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00452e96  e8c5d71a00           call 0x600660
// 00452e9b  33c0                 xor eax, eax
// 00452e9d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00452ea1  64890d00000000       mov dword ptr fs:[0], ecx
// 00452ea8  5f                   pop edi
// 00452ea9  5e                   pop esi
// 00452eaa  5d                   pop ebp
// 00452eab  5b                   pop ebx
// 00452eac  83c418               add esp, 0x18
// 00452eaf  c3                   ret 
// 00452eb0  8b5610               mov edx, dword ptr [esi + 0x10]
// 00452eb3  2b560c               sub edx, dword ptr [esi + 0xc]
// 00452eb6  8bd9                 mov ebx, ecx
// 00452eb8  c1fa03               sar edx, 3
// 00452ebb  3bfa                 cmp edi, edx
// 00452ebd  7206                 jb 0x452ec5
// 00452ebf  ffd5                 call ebp
// 00452ec1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00452ec5  8b460c               mov eax, dword ptr [esi + 0xc]
// 00452ec8  8d04f8               lea eax, [eax + edi*8]
// 00452ecb  8908                 mov dword ptr [eax], ecx
// 00452ecd  8d4c2418             lea ecx, [esp + 0x18]
// 00452ed1  51                   push ecx
// 00452ed2  8d4804               lea ecx, [eax + 4]
// 00452ed5  e8d6f6faff           call 0x4025b0
// 00452eda  8d4c2414             lea ecx, [esp + 0x14]
// 00452ede  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00452ee6  e875d71a00           call 0x600660
// 00452eeb  8bc3                 mov eax, ebx
// 00452eed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00452ef1  5f                   pop edi
// 00452ef2  5e                   pop esi
// 00452ef3  5d                   pop ebp
// 00452ef4  64890d00000000       mov dword ptr fs:[0], ecx
// 00452efb  5b                   pop ebx
// 00452efc  83c418               add esp, 0x18
// 00452eff  c3                   ret 

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
