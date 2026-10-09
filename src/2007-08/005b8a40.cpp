// from server: 64% by colin
// roc 2007-08 005b8a40  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8a40
//
// 005b8a40  51                   push ecx
// 005b8a41  53                   push ebx
// 005b8a42  56                   push esi
// 005b8a43  57                   push edi
// 005b8a44  8bd9                 mov ebx, ecx
// 005b8a46  e895f4ffff           call 0x5b7ee0
// 005b8a4b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005b8a4f  8bf0                 mov esi, eax
// 005b8a51  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005b8a54  7343                 jae 0x5b8a99
// 005b8a56  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005b8a59  85c9                 test ecx, ecx
// 005b8a5b  740f                 je 0x5b8a6c
// 005b8a5d  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 005b8a63  2bc1                 sub eax, ecx
// 005b8a65  c1f802               sar eax, 2
// 005b8a68  3bf8                 cmp edi, eax
// 005b8a6a  7206                 jb 0x5b8a72
// 005b8a6c  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b8a72  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005b8a75  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005b8a78  894c240c             mov dword ptr [esp + 0xc], ecx
// 005b8a7c  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005b8a7f  8b11                 mov edx, dword ptr [ecx]
// 005b8a81  8b5208               mov edx, dword ptr [edx + 8]
// 005b8a84  8d44240c             lea eax, [esp + 0xc]
// 005b8a88  50                   push eax
// 005b8a89  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b8a8d  50                   push eax
// 005b8a8e  ffd2                 call edx
// 005b8a90  5f                   pop edi
// 005b8a91  5e                   pop esi
// 005b8a92  b001                 mov al, 1
// 005b8a94  5b                   pop ebx
// 005b8a95  59                   pop ecx
// 005b8a96  c20800               ret 8
// 005b8a99  5f                   pop edi
// 005b8a9a  5e                   pop esi
// 005b8a9b  32c0                 xor al, al
// 005b8a9d  5b                   pop ebx
// 005b8a9e  59                   pop ecx
// 005b8a9f  c20800               ret 8

struct DescribedBase;

struct EnumItem {
    int value;
};

struct EnumDescriptor {
    struct Item {
        int value;
    };
};

struct Variant {
    int storage;
};

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* instance, Variant& value) const;
    virtual void setValue(DescribedBase* instance, const Variant& value) const;
};

struct EnumPropertyDescriptor {
    char pad[0x1c];
    void* vtable;
};

struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* getset;
    bool setVariant(DescribedBase* instance, const Variant& value) const;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void* __stdcall sub_5b7ee0();

bool SurfaceEnumPropDescriptor::setVariant(DescribedBase* instance, const Variant& value) const {
    void* gs = sub_5b7ee0();
    unsigned int idx = (unsigned int)instance;
    if (idx >= *(unsigned int*)((char*)gs + 0x20)) {
        return false;
    }
    void* begin = *(void**)((char*)gs + 0x7c);
    if (begin == 0) {
        void* end = *(void**)((char*)gs + 0x80);
        int count = ((char*)end - (char*)begin) >> 2;
        if (idx >= (unsigned int)count) {
            _invalid_parameter_noinfo();
        }
    } else {
        _invalid_parameter_noinfo();
    }
    void* item = *(void**)((char*)begin + idx * 4);
    Variant local;
    local.storage = (int)item;
    GetSet* gs2 = *(GetSet**)((char*)this + 0x1c);
    gs2->setValue(instance, local);
    return true;
}
