// from server: 100% by king_originala
// roc 2008-06 005ee860  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee860
//
// 005ee860  51                   push ecx
// 005ee861  56                   push esi
// 005ee862  681cb19700           push 0x97b11c
// 005ee867  6820d65e00           push 0x5ed620
// 005ee86c  8bf1                 mov esi, ecx
// 005ee86e  e8bd8af6ff           call 0x557330
// 005ee873  83c408               add esp, 8
// 005ee876  e845edffff           call 0x5ed5c0
// 005ee87b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ee87f  8d4c2404             lea ecx, [esp + 4]
// 005ee883  51                   push ecx
// 005ee884  52                   push edx
// 005ee885  8bc8                 mov ecx, eax
// 005ee887  e874eaffff           call 0x5ed300
// 005ee88c  84c0                 test al, al
// 005ee88e  741b                 je 0x5ee8ab
// 005ee890  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005ee893  8b01                 mov eax, dword ptr [ecx]
// 005ee895  8b400c               mov eax, dword ptr [eax + 0xc]
// 005ee898  8d542404             lea edx, [esp + 4]
// 005ee89c  52                   push edx
// 005ee89d  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ee8a1  52                   push edx
// 005ee8a2  ffd0                 call eax
// 005ee8a4  b001                 mov al, 1
// 005ee8a6  5e                   pop esi
// 005ee8a7  59                   pop ecx
// 005ee8a8  c20800               ret 8
// 005ee8ab  32c0                 xor al, al
// 005ee8ad  5e                   pop esi
// 005ee8ae  59                   pop ecx
// 005ee8af  c20800               ret 8

extern void __cdecl registerInitializer(void (__cdecl*)(), void*);

struct EnumTable {
    bool lookup(const void*, int*);
};

extern EnumTable* __cdecl getEnumTable();

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const int*);
};

struct Descriptor {
    unsigned char storage[28];
    Accessor* access;

    bool setValue(void*, const void*);
};

bool Descriptor::setValue(void* object, const void* value)
{
    int result;
    registerInitializer(
        reinterpret_cast<void (__cdecl*)()>(0x005ed620),
        reinterpret_cast<void*>(0x0097b11c));
    EnumTable* table = getEnumTable();
    if (table->lookup(value, &result)) {
        access->set(object, &result);
        return true;
    }
    return false;
}
