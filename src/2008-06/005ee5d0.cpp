// from server: 100% by colin
// roc 2008-06 005ee5d0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee5d0
//
// 005ee5d0  51                   push ecx
// 005ee5d1  53                   push ebx
// 005ee5d2  56                   push esi
// 005ee5d3  57                   push edi
// 005ee5d4  681cb19700           push 0x97b11c
// 005ee5d9  6820d65e00           push 0x5ed620
// 005ee5de  8bd9                 mov ebx, ecx
// 005ee5e0  e84b8df6ff           call 0x557330
// 005ee5e5  83c408               add esp, 8
// 005ee5e8  e8d3efffff           call 0x5ed5c0
// 005ee5ed  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005ee5f1  8bf0                 mov esi, eax
// 005ee5f3  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 005ee5f6  7343                 jae 0x5ee63b
// 005ee5f8  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 005ee5fe  2b86c4000000         sub eax, dword ptr [esi + 0xc4]
// 005ee604  c1f802               sar eax, 2
// 005ee607  3bf8                 cmp edi, eax
// 005ee609  7206                 jb 0x5ee611
// 005ee60b  ff1590288000         call dword ptr [0x802890]
// 005ee611  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 005ee617  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 005ee61a  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005ee61d  8954240c             mov dword ptr [esp + 0xc], edx
// 005ee621  8b01                 mov eax, dword ptr [ecx]
// 005ee623  8b400c               mov eax, dword ptr [eax + 0xc]
// 005ee626  8d54240c             lea edx, [esp + 0xc]
// 005ee62a  52                   push edx
// 005ee62b  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ee62f  52                   push edx
// 005ee630  ffd0                 call eax
// 005ee632  5f                   pop edi
// 005ee633  5e                   pop esi
// 005ee634  b001                 mov al, 1
// 005ee636  5b                   pop ebx
// 005ee637  59                   pop ecx
// 005ee638  c20800               ret 8
// 005ee63b  5f                   pop edi
// 005ee63c  5e                   pop esi
// 005ee63d  32c0                 xor al, al
// 005ee63f  5b                   pop ebx
// 005ee640  59                   pop ecx
// 005ee641  c20800               ret 8

struct EnumTable {
    unsigned char padding0[40];
    unsigned int count;
    unsigned char padding1[152];
    int* begin;
    int* end;
};

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const int&);
};

extern unsigned char registrationState;
extern void __cdecl initialize();
extern void __cdecl registerInitializer(void (__cdecl*)(), void*);
extern EnumTable* __cdecl getEnumTable();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Descriptor {
    unsigned char padding[28];
    Setter* setter;

    bool setValue(void*, unsigned int);
};

bool Descriptor::setValue(void* object, unsigned int index)
{
    int value;
    registerInitializer(initialize, &registrationState);
    EnumTable* table = getEnumTable();

    if (index < table->count) {
        if (index >= static_cast<unsigned int>(table->end - table->begin))
            _invalid_parameter_noinfo();

        value = table->begin[index];
        setter->set(object, value);
        return true;
    }
    return false;
}
