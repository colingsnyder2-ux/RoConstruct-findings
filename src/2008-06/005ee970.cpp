// from server: 100% by king_originala
// roc 2008-06 005ee970  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee970
//
// 005ee970  51                   push ecx
// 005ee971  56                   push esi
// 005ee972  6820b19700           push 0x97b120
// 005ee977  6890d65e00           push 0x5ed690
// 005ee97c  8bf1                 mov esi, ecx
// 005ee97e  e8ad89f6ff           call 0x557330
// 005ee983  83c408               add esp, 8
// 005ee986  e8a5ecffff           call 0x5ed630
// 005ee98b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ee98f  8d4c2404             lea ecx, [esp + 4]
// 005ee993  51                   push ecx
// 005ee994  52                   push edx
// 005ee995  8bc8                 mov ecx, eax
// 005ee997  e864e9ffff           call 0x5ed300
// 005ee99c  84c0                 test al, al
// 005ee99e  741b                 je 0x5ee9bb
// 005ee9a0  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005ee9a3  8b01                 mov eax, dword ptr [ecx]
// 005ee9a5  8b400c               mov eax, dword ptr [eax + 0xc]
// 005ee9a8  8d542404             lea edx, [esp + 4]
// 005ee9ac  52                   push edx
// 005ee9ad  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ee9b1  52                   push edx
// 005ee9b2  ffd0                 call eax
// 005ee9b4  b001                 mov al, 1
// 005ee9b6  5e                   pop esi
// 005ee9b7  59                   pop ecx
// 005ee9b8  c20800               ret 8
// 005ee9bb  32c0                 xor al, al
// 005ee9bd  5e                   pop esi
// 005ee9be  59                   pop ecx
// 005ee9bf  c20800               ret 8

struct EnumItem;

struct EnumDesc {
    static EnumDesc* singleton();
    bool convertToItem(int value, const EnumItem** out) const;
};

struct DescribedBase;

struct EnumPropertyDescriptor {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void get(const DescribedBase* instance, void* value) const;
    virtual void set(DescribedBase* instance, const void* value) const;
    virtual void getVariant(const DescribedBase* instance, void* value) const;
    virtual void setVariant(DescribedBase* instance, const void* value) const;
    virtual void copyValue(const DescribedBase* source, DescribedBase* destination) const;
    virtual const EnumItem* getEnumItem(const DescribedBase* instance) const;
    virtual bool equalValues(const DescribedBase* a, const DescribedBase* b) const;
    int pad[6];
};

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual int getValue(const DescribedBase* instance) const;
    virtual void setValue(DescribedBase* instance, const EnumItem* const& value) const;
};

struct SurfaceEnumPropDescriptor : EnumPropertyDescriptor {
    GetSet* getset;
    bool equalValues(const DescribedBase* a, const DescribedBase* b) const;
};

extern "C" void __cdecl sub_557330(void* a, void* b);
extern "C" EnumDesc* __cdecl sub_5ed630();

bool SurfaceEnumPropDescriptor::equalValues(const DescribedBase* a, const DescribedBase* b) const
{
    sub_557330((void*)0x5ed690, (void*)0x97b120);
    EnumDesc* desc = sub_5ed630();
    const EnumItem* item;
    if (desc->convertToItem((int)b, &item)) {
        getset->setValue((DescribedBase*)a, item);
        return true;
    }
    return false;
}
