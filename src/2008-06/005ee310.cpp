// from server: 100% by king_originala
// roc 2008-06 005ee310  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee310
//
// 005ee310  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005ee313  8b01                 mov eax, dword ptr [ecx]
// 005ee315  8b542404             mov edx, dword ptr [esp + 4]
// 005ee319  8b4008               mov eax, dword ptr [eax + 8]
// 005ee31c  56                   push esi
// 005ee31d  57                   push edi
// 005ee31e  52                   push edx
// 005ee31f  ffd0                 call eax
// 005ee321  6820b19700           push 0x97b120
// 005ee326  6890d65e00           push 0x5ed690
// 005ee32b  8bf8                 mov edi, eax
// 005ee32d  e8fe8ff6ff           call 0x557330
// 005ee332  83c408               add esp, 8
// 005ee335  e8f6f2ffff           call 0x5ed630
// 005ee33a  8bf0                 mov esi, eax
// 005ee33c  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 005ee342  2b8edc000000         sub ecx, dword ptr [esi + 0xdc]
// 005ee348  c1f902               sar ecx, 2
// 005ee34b  3bf9                 cmp edi, ecx
// 005ee34d  7327                 jae 0x5ee376
// 005ee34f  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 005ee355  2b96dc000000         sub edx, dword ptr [esi + 0xdc]
// 005ee35b  c1fa02               sar edx, 2
// 005ee35e  3bfa                 cmp edi, edx
// 005ee360  7206                 jb 0x5ee368
// 005ee362  ff1590288000         call dword ptr [0x802890]
// 005ee368  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005ee36e  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005ee371  5f                   pop edi
// 005ee372  5e                   pop esi
// 005ee373  c20400               ret 4
// 005ee376  5f                   pop edi
// 005ee377  83c8ff               or eax, 0xffffffff
// 005ee37a  5e                   pop esi
// 005ee37b  c20400               ret 4

struct ValueSource {
    virtual void slot0();
    virtual void slot1();
    virtual unsigned int get(void*);
};

struct EnumTable {
    char padding[0xdc];
    int* begin;
    int* volatile end;
};

extern void __cdecl initializeOnce(void (__cdecl*)(), int*);
extern EnumTable* __cdecl getTable();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Descriptor {
    char padding[0x1c];
    ValueSource* source;
    int lookup(void*);
};

int Descriptor::lookup(void* object)
{
    unsigned int index = source->get(object);
    initializeOnce(
        reinterpret_cast<void (__cdecl*)()>(0x5ed690),
        reinterpret_cast<int*>(0x97b120));
    EnumTable* table = getTable();

    if (index < static_cast<unsigned int>(table->end - table->begin)) {
        if (index >= static_cast<unsigned int>(table->end - table->begin))
            _invalid_parameter_noinfo();
        return table->begin[index];
    }

    return -1;
}
