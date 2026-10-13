// from server: 100% by colin
// roc 2008-06 004125d0  unit: CChatPrompt  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004125d0
//
// 004125d0  6aff                 push -1
// 004125d2  64a100000000         mov eax, dword ptr fs:[0]
// 004125d8  6868917d00           push 0x7d9168
// 004125dd  50                   push eax
// 004125de  64892500000000       mov dword ptr fs:[0], esp
// 004125e5  83ec0c               sub esp, 0xc
// 004125e8  53                   push ebx
// 004125e9  55                   push ebp
// 004125ea  56                   push esi
// 004125eb  57                   push edi
// 004125ec  68e8cb9600           push 0x96cbe8
// 004125f1  6830194100           push 0x411930
// 004125f6  8bd9                 mov ebx, ecx
// 004125f8  e8334d1400           call 0x557330
// 004125fd  83c408               add esp, 8
// 00412600  e88beeffff           call 0x411490
// 00412605  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 0041260b  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 00412611  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00412617  8db390010000         lea esi, [ebx + 0x190]
// 0041261d  8bf8                 mov edi, eax
// 0041261f  8d4701               lea eax, [edi + 1]
// 00412622  c1f903               sar ecx, 3
// 00412625  3bc1                 cmp eax, ecx
// 00412627  7620                 jbe 0x412649
// 00412629  83ec08               sub esp, 8
// 0041262c  8bcc                 mov ecx, esp
// 0041262e  c70100000000         mov dword ptr [ecx], 0
// 00412634  89642418             mov dword ptr [esp + 0x18], esp
// 00412638  c7410400000000       mov dword ptr [ecx + 4], 0
// 0041263f  50                   push eax
// 00412640  8bce                 mov ecx, esi
// 00412642  e879feffff           call 0x4124c0
// 00412647  eb1d                 jmp 0x412666
// 00412649  8b5610               mov edx, dword ptr [esi + 0x10]
// 0041264c  2b560c               sub edx, dword ptr [esi + 0xc]
// 0041264f  c1fa03               sar edx, 3
// 00412652  3bfa                 cmp edi, edx
// 00412654  7202                 jb 0x412658
// 00412656  ffd5                 call ebp
// 00412658  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041265b  8b04f8               mov eax, dword ptr [eax + edi*8]
// 0041265e  85c0                 test eax, eax
// 00412660  0f8597000000         jne 0x4126fd
// 00412666  68e4cb9600           push 0x96cbe4
// 0041266b  6890184100           push 0x411890
// 00412670  e8bb4c1400           call 0x557330
// 00412675  83c408               add esp, 8
// 00412678  e8a3edffff           call 0x411420
// 0041267d  50                   push eax
// 0041267e  8d4c2418             lea ecx, [esp + 0x18]
// 00412682  51                   push ecx
// 00412683  8bcb                 mov ecx, ebx
// 00412685  e806041600           call 0x572a90
// 0041268a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041268e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00412696  85c9                 test ecx, ecx
// 00412698  7526                 jne 0x4126c0
// 0041269a  8d4c2414             lea ecx, [esp + 0x14]
// 0041269e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004126a6  e8b5df1e00           call 0x600660
// 004126ab  33c0                 xor eax, eax
// 004126ad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004126b1  64890d00000000       mov dword ptr fs:[0], ecx
// 004126b8  5f                   pop edi
// 004126b9  5e                   pop esi
// 004126ba  5d                   pop ebp
// 004126bb  5b                   pop ebx
// 004126bc  83c418               add esp, 0x18
// 004126bf  c3                   ret 
// 004126c0  8b5610               mov edx, dword ptr [esi + 0x10]
// 004126c3  2b560c               sub edx, dword ptr [esi + 0xc]
// 004126c6  8bd9                 mov ebx, ecx
// 004126c8  c1fa03               sar edx, 3
// 004126cb  3bfa                 cmp edi, edx
// 004126cd  7206                 jb 0x4126d5
// 004126cf  ffd5                 call ebp
// 004126d1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004126d5  8b460c               mov eax, dword ptr [esi + 0xc]
// 004126d8  8d04f8               lea eax, [eax + edi*8]
// 004126db  8908                 mov dword ptr [eax], ecx
// 004126dd  8d4c2418             lea ecx, [esp + 0x18]
// 004126e1  51                   push ecx
// 004126e2  8d4804               lea ecx, [eax + 4]
// 004126e5  e8c6fefeff           call 0x4025b0
// 004126ea  8d4c2414             lea ecx, [esp + 0x14]
// 004126ee  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004126f6  e865df1e00           call 0x600660
// 004126fb  8bc3                 mov eax, ebx
// 004126fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00412701  5f                   pop edi
// 00412702  5e                   pop esi
// 00412703  5d                   pop ebp
// 00412704  64890d00000000       mov dword ptr fs:[0], ecx
// 0041270b  5b                   pop ebx
// 0041270c  83c418               add esp, 0x18
// 0041270f  c3                   ret 

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
