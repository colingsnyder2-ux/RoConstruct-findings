// from server: 62% by colin
// roc 2007-08 005b8af0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8af0
//
// 005b8af0  51                   push ecx
// 005b8af1  53                   push ebx
// 005b8af2  56                   push esi
// 005b8af3  57                   push edi
// 005b8af4  8bd9                 mov ebx, ecx
// 005b8af6  e885f3ffff           call 0x5b7e80
// 005b8afb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005b8aff  8bf0                 mov esi, eax
// 005b8b01  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005b8b04  7343                 jae 0x5b8b49
// 005b8b06  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005b8b09  85c9                 test ecx, ecx
// 005b8b0b  740f                 je 0x5b8b1c
// 005b8b0d  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 005b8b13  2bc1                 sub eax, ecx
// 005b8b15  c1f802               sar eax, 2
// 005b8b18  3bf8                 cmp edi, eax
// 005b8b1a  7206                 jb 0x5b8b22
// 005b8b1c  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b8b22  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005b8b25  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005b8b28  894c240c             mov dword ptr [esp + 0xc], ecx
// 005b8b2c  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005b8b2f  8b11                 mov edx, dword ptr [ecx]
// 005b8b31  8b5208               mov edx, dword ptr [edx + 8]
// 005b8b34  8d44240c             lea eax, [esp + 0xc]
// 005b8b38  50                   push eax
// 005b8b39  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b8b3d  50                   push eax
// 005b8b3e  ffd2                 call edx
// 005b8b40  5f                   pop edi
// 005b8b41  5e                   pop esi
// 005b8b42  b001                 mov al, 1
// 005b8b44  5b                   pop ebx
// 005b8b45  59                   pop ecx
// 005b8b46  c20800               ret 8
// 005b8b49  5f                   pop edi
// 005b8b4a  5e                   pop esi
// 005b8b4b  32c0                 xor al, al
// 005b8b4d  5b                   pop ebx
// 005b8b4e  59                   pop ecx
// 005b8b4f  c20800               ret 8

struct DescribedBase;
struct Variant;

struct EnumItem {
    int value;
};

struct EnumDesc {
    static EnumDesc& singleton();
    const EnumItem* convertToItem(int value) const;
};

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase*, Variant&) const;
    virtual void setValue(DescribedBase*, const Variant&) const;
};

struct EnumPropertyDescriptor {
    void* getEnumDesc() const;
};

struct SurfaceEnumPropDescriptor : EnumPropertyDescriptor {
    void* getset;
    bool setVariant(DescribedBase* instance, const Variant& value) const;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

bool SurfaceEnumPropDescriptor::setVariant(DescribedBase* instance, const Variant& value) const {
    EnumDesc* desc = (EnumDesc*)getEnumDesc();
    unsigned int idx = *(unsigned int*)&value;
    if (idx >= *(unsigned int*)((char*)desc + 0x20)) {
        return false;
    }
    int* begin = *(int**)((char*)desc + 0x7c);
    if (begin != 0) {
        int count = (int)(*(int**)((char*)desc + 0x80) - begin) >> 2;
        if (idx >= (unsigned int)count) {
            _invalid_parameter_noinfo();
        }
    } else {
        _invalid_parameter_noinfo();
    }
    int item = begin[idx];
    GetSet* gs = (GetSet*)getset;
    gs->setValue(instance, *(const Variant*)&item);
    return true;
}
