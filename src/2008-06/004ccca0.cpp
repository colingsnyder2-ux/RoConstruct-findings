// from server: 100% by colin
// roc 2008-06 004ccca0  unit: RBX::VInstance::?$NonFactoryProduct  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ccca0
//
// 004ccca0  6aff                 push -1
// 004ccca2  64a100000000         mov eax, dword ptr fs:[0]
// 004ccca8  6868917d00           push 0x7d9168
// 004cccad  50                   push eax
// 004cccae  64892500000000       mov dword ptr fs:[0], esp
// 004cccb5  83ec0c               sub esp, 0xc
// 004cccb8  53                   push ebx
// 004cccb9  55                   push ebp
// 004cccba  56                   push esi
// 004cccbb  57                   push edi
// 004cccbc  68d41a9700           push 0x971ad4
// 004cccc1  6850a34c00           push 0x4ca350
// 004cccc6  8bd9                 mov ebx, ecx
// 004cccc8  e863a60800           call 0x557330
// 004ccccd  83c408               add esp, 8
// 004cccd0  e80bcfffff           call 0x4c9be0
// 004cccd5  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 004cccdb  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 004ccce1  8b2d90288000         mov ebp, dword ptr [0x802890]
// 004ccce7  8db390010000         lea esi, [ebx + 0x190]
// 004ccced  8bf8                 mov edi, eax
// 004cccef  8d4701               lea eax, [edi + 1]
// 004cccf2  c1f903               sar ecx, 3
// 004cccf5  3bc1                 cmp eax, ecx
// 004cccf7  7620                 jbe 0x4ccd19
// 004cccf9  83ec08               sub esp, 8
// 004cccfc  8bcc                 mov ecx, esp
// 004cccfe  c70100000000         mov dword ptr [ecx], 0
// 004ccd04  89642418             mov dword ptr [esp + 0x18], esp
// 004ccd08  c7410400000000       mov dword ptr [ecx + 4], 0
// 004ccd0f  50                   push eax
// 004ccd10  8bce                 mov ecx, esi
// 004ccd12  e8a957f4ff           call 0x4124c0
// 004ccd17  eb1d                 jmp 0x4ccd36
// 004ccd19  8b5610               mov edx, dword ptr [esi + 0x10]
// 004ccd1c  2b560c               sub edx, dword ptr [esi + 0xc]
// 004ccd1f  c1fa03               sar edx, 3
// 004ccd22  3bfa                 cmp edi, edx
// 004ccd24  7202                 jb 0x4ccd28
// 004ccd26  ffd5                 call ebp
// 004ccd28  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ccd2b  8b04f8               mov eax, dword ptr [eax + edi*8]
// 004ccd2e  85c0                 test eax, eax
// 004ccd30  0f8597000000         jne 0x4ccdcd
// 004ccd36  68d01a9700           push 0x971ad0
// 004ccd3b  6840a34c00           push 0x4ca340
// 004ccd40  e8eba50800           call 0x557330
// 004ccd45  83c408               add esp, 8
// 004ccd48  e823ceffff           call 0x4c9b70
// 004ccd4d  50                   push eax
// 004ccd4e  8d4c2418             lea ecx, [esp + 0x18]
// 004ccd52  51                   push ecx
// 004ccd53  8bcb                 mov ecx, ebx
// 004ccd55  e8365d0a00           call 0x572a90
// 004ccd5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ccd5e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004ccd66  85c9                 test ecx, ecx
// 004ccd68  7526                 jne 0x4ccd90
// 004ccd6a  8d4c2414             lea ecx, [esp + 0x14]
// 004ccd6e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004ccd76  e8e5381300           call 0x600660
// 004ccd7b  33c0                 xor eax, eax
// 004ccd7d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ccd81  64890d00000000       mov dword ptr fs:[0], ecx
// 004ccd88  5f                   pop edi
// 004ccd89  5e                   pop esi
// 004ccd8a  5d                   pop ebp
// 004ccd8b  5b                   pop ebx
// 004ccd8c  83c418               add esp, 0x18
// 004ccd8f  c3                   ret 
// 004ccd90  8b5610               mov edx, dword ptr [esi + 0x10]
// 004ccd93  2b560c               sub edx, dword ptr [esi + 0xc]
// 004ccd96  8bd9                 mov ebx, ecx
// 004ccd98  c1fa03               sar edx, 3
// 004ccd9b  3bfa                 cmp edi, edx
// 004ccd9d  7206                 jb 0x4ccda5
// 004ccd9f  ffd5                 call ebp
// 004ccda1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ccda5  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ccda8  8d04f8               lea eax, [eax + edi*8]
// 004ccdab  8908                 mov dword ptr [eax], ecx
// 004ccdad  8d4c2418             lea ecx, [esp + 0x18]
// 004ccdb1  51                   push ecx
// 004ccdb2  8d4804               lea ecx, [eax + 4]
// 004ccdb5  e8f657f3ff           call 0x4025b0
// 004ccdba  8d4c2414             lea ecx, [esp + 0x14]
// 004ccdbe  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004ccdc6  e895381300           call 0x600660
// 004ccdcb  8bc3                 mov eax, ebx
// 004ccdcd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ccdd1  5f                   pop edi
// 004ccdd2  5e                   pop esi
// 004ccdd3  5d                   pop ebp
// 004ccdd4  64890d00000000       mov dword ptr fs:[0], ecx
// 004ccddb  5b                   pop ebx
// 004ccddc  83c418               add esp, 0x18
// 004ccddf  c3                   ret 

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
