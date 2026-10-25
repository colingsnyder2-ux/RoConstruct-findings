// from server: 100% by colin
// roc 2008-06 005ee550  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee550
//
// 005ee550  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005ee553  8b01                 mov eax, dword ptr [ecx]
// 005ee555  8b542404             mov edx, dword ptr [esp + 4]
// 005ee559  8b4008               mov eax, dword ptr [eax + 8]
// 005ee55c  56                   push esi
// 005ee55d  57                   push edi
// 005ee55e  52                   push edx
// 005ee55f  ffd0                 call eax
// 005ee561  681cb19700           push 0x97b11c
// 005ee566  6820d65e00           push 0x5ed620
// 005ee56b  8bf0                 mov esi, eax
// 005ee56d  e8be8df6ff           call 0x557330
// 005ee572  83c408               add esp, 8
// 005ee575  e846f0ffff           call 0x5ed5c0
// 005ee57a  8bf8                 mov edi, eax
// 005ee57c  85f6                 test esi, esi
// 005ee57e  7d07                 jge 0x5ee587
// 005ee580  5f                   pop edi
// 005ee581  33c0                 xor eax, eax
// 005ee583  5e                   pop esi
// 005ee584  c20400               ret 4
// 005ee587  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 005ee58d  2b8fac000000         sub ecx, dword ptr [edi + 0xac]
// 005ee593  c1f902               sar ecx, 2
// 005ee596  3bf1                 cmp esi, ecx
// 005ee598  73e6                 jae 0x5ee580
// 005ee59a  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 005ee5a0  2b97ac000000         sub edx, dword ptr [edi + 0xac]
// 005ee5a6  c1fa02               sar edx, 2
// 005ee5a9  3bf2                 cmp esi, edx
// 005ee5ab  7206                 jb 0x5ee5b3
// 005ee5ad  ff1590288000         call dword ptr [0x802890]
// 005ee5b3  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 005ee5b9  8b04b0               mov eax, dword ptr [eax + esi*4]
// 005ee5bc  5f                   pop edi
// 005ee5bd  5e                   pop esi
// 005ee5be  c20400               ret 4

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual int get(void* object);
};

struct EnumDescriptor {
    unsigned char padding[172];
    void** first;
    void** volatile last;
};

extern "C" void __cdecl initialize(void (__cdecl* callback)(), void* storage);
extern "C" void __cdecl callback();
extern "C" EnumDescriptor* __cdecl descriptor();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern unsigned char storage;

struct Property {
    unsigned char padding[28];
    Accessor* accessor;

    void* get(void* object);
};

void* Property::get(void* object)
{
    int value = accessor->get(object);
    initialize(callback, &storage);
    EnumDescriptor* desc = descriptor();

    if (value < 0)
        return 0;

    if (static_cast<unsigned int>(value) >=
        static_cast<unsigned int>(desc->last - desc->first))
        return 0;

    if (static_cast<unsigned int>(value) >=
        static_cast<unsigned int>(desc->last - desc->first))
        _invalid_parameter_noinfo();

    return desc->first[value];
}
