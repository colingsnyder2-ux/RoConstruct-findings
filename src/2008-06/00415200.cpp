// from server: 96% by colin
// from server: 95% by king_originala
// roc 2008-06 00415200  unit: RBX::VChangeHistoryService::?$FactoryProduct::Creator  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415200
//
// 00415200  6aff                 push -1
// 00415202  64a100000000         mov eax, dword ptr fs:[0]
// 00415208  6868917d00           push 0x7d9168
// 0041520d  50                   push eax
// 0041520e  64892500000000       mov dword ptr fs:[0], esp
// 00415215  83ec0c               sub esp, 0xc
// 00415218  53                   push ebx
// 00415219  55                   push ebp
// 0041521a  56                   push esi
// 0041521b  57                   push edi
// 0041521c  6830cc9600           push 0x96cc30
// 00415221  68603a4100           push 0x413a60
// 00415226  8bd9                 mov ebx, ecx
// 00415228  e803211400           call 0x557330
// 0041522d  83c408               add esp, 8
// 00415230  e8dbe5ffff           call 0x413810
// 00415235  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 0041523b  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 00415241  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00415247  8db390010000         lea esi, [ebx + 0x190]
// 0041524d  8bf8                 mov edi, eax
// 0041524f  8d4701               lea eax, [edi + 1]
// 00415252  c1f903               sar ecx, 3
// 00415255  3bc1                 cmp eax, ecx
// 00415257  7620                 jbe 0x415279
// 00415259  83ec08               sub esp, 8
// 0041525c  8bcc                 mov ecx, esp
// 0041525e  c70100000000         mov dword ptr [ecx], 0
// 00415264  89642418             mov dword ptr [esp + 0x18], esp
// 00415268  c7410400000000       mov dword ptr [ecx + 4], 0
// 0041526f  50                   push eax
// 00415270  8bce                 mov ecx, esi
// 00415272  e849d2ffff           call 0x4124c0
// 00415277  eb1d                 jmp 0x415296
// 00415279  8b5610               mov edx, dword ptr [esi + 0x10]
// 0041527c  2b560c               sub edx, dword ptr [esi + 0xc]
// 0041527f  c1fa03               sar edx, 3
// 00415282  3bfa                 cmp edi, edx
// 00415284  7202                 jb 0x415288
// 00415286  ffd5                 call ebp
// 00415288  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041528b  8b04f8               mov eax, dword ptr [eax + edi*8]
// 0041528e  85c0                 test eax, eax
// 00415290  0f8597000000         jne 0x41532d
// 00415296  6814c39600           push 0x96c314
// 0041529b  68c06e4000           push 0x406ec0
// 004152a0  e88b201400           call 0x557330
// 004152a5  83c408               add esp, 8
// 004152a8  e81316ffff           call 0x4068c0
// 004152ad  50                   push eax
// 004152ae  8d4c2418             lea ecx, [esp + 0x18]
// 004152b2  51                   push ecx
// 004152b3  8bcb                 mov ecx, ebx
// 004152b5  e8d6d71500           call 0x572a90
// 004152ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004152be  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004152c6  85c9                 test ecx, ecx
// 004152c8  7526                 jne 0x4152f0
// 004152ca  8d4c2414             lea ecx, [esp + 0x14]
// 004152ce  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004152d6  e885b31e00           call 0x600660
// 004152db  33c0                 xor eax, eax
// 004152dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004152e1  64890d00000000       mov dword ptr fs:[0], ecx
// 004152e8  5f                   pop edi
// 004152e9  5e                   pop esi
// 004152ea  5d                   pop ebp
// 004152eb  5b                   pop ebx
// 004152ec  83c418               add esp, 0x18
// 004152ef  c3                   ret 
// 004152f0  8b5610               mov edx, dword ptr [esi + 0x10]
// 004152f3  2b560c               sub edx, dword ptr [esi + 0xc]
// 004152f6  8bd9                 mov ebx, ecx
// 004152f8  c1fa03               sar edx, 3
// 004152fb  3bfa                 cmp edi, edx
// 004152fd  7206                 jb 0x415305
// 004152ff  ffd5                 call ebp
// 00415301  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00415305  8b460c               mov eax, dword ptr [esi + 0xc]
// 00415308  8d04f8               lea eax, [eax + edi*8]
// 0041530b  8908                 mov dword ptr [eax], ecx
// 0041530d  8d4c2418             lea ecx, [esp + 0x18]
// 00415311  51                   push ecx
// 00415312  8d4804               lea ecx, [eax + 4]
// 00415315  e896d2feff           call 0x4025b0
// 0041531a  8d4c2414             lea ecx, [esp + 0x14]
// 0041531e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00415326  e835b31e00           call 0x600660
// 0041532b  8bc3                 mov eax, ebx
// 0041532d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00415331  5f                   pop edi
// 00415332  5e                   pop esi
// 00415333  5d                   pop ebp
// 00415334  64890d00000000       mov dword ptr fs:[0], ecx
// 0041533b  5b                   pop ebx
// 0041533c  83c418               add esp, 0x18
// 0041533f  c3                   ret 
// 00415340  83c104               add ecx, 4
// 00415343  e988f3ffff           jmp 0x4146d0

struct Control {
    void* value;
    Control() : value(0) {}
    ~Control();
    Control& operator=(const Control&);
};

struct Pointer {
    void* object;
    Control control;
    Pointer() : object(0) {}
    Pointer(const Pointer&);
    ~Pointer();
};

struct Storage {
    unsigned char padding[12];
    Pointer* first;
    Pointer* last;
    Pointer* limit;
    void resize(unsigned int, Pointer);
};

extern void __cdecl initialize(void (__cdecl*)(), void*);
extern void __cdecl initializeIndex();
extern void __cdecl initializeType();
extern unsigned int indexFlag;
extern unsigned int typeFlag;
extern void* __cdecl func_00413810();
extern void* __cdecl func_004068c0();
extern void (__cdecl* invalid_parameter_noinfo)();

struct S {
    unsigned char padding[0x190];
    Storage entries;
    Pointer create(void*);
    void* get();
};

void* S::get()
{
    initialize(initializeIndex, &indexFlag);
    unsigned int index = (unsigned int)func_00413810();
    void (__cdecl* invalid)() = invalid_parameter_noinfo;
    Storage* storage = &entries;

    if (index + 1 > (unsigned int)(entries.last - entries.first)) {
        storage->resize(index + 1, Pointer());
    } else {
        if (index >= (unsigned int)(storage->last - storage->first))
            invalid();
        void* result = storage->first[index].object;
        if (result)
            return result;
    }

    initialize(initializeType, &typeFlag);
    Pointer result = create(func_004068c0());
    if (!result.object)
        return 0;

    void* object = result.object;
    if (index >= (unsigned int)(storage->last - storage->first))
        invalid();

    Pointer* slot = &storage->first[index];
    slot->object = result.object;
    slot->control = result.control;
    return object;
}
