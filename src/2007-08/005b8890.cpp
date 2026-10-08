// from server: 56% by colin
// roc 2007-08 005b8890  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8890
//
// 005b8890  56                   push esi
// 005b8891  8d44240c             lea eax, [esp + 0xc]
// 005b8895  8bf1                 mov esi, ecx
// 005b8897  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b889b  50                   push eax
// 005b889c  51                   push ecx
// 005b889d  e83ef6ffff           call 0x5b7ee0
// 005b88a2  8bc8                 mov ecx, eax
// 005b88a4  e827f8ffff           call 0x5b80d0
// 005b88a9  84c0                 test al, al
// 005b88ab  741a                 je 0x5b88c7
// 005b88ad  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b88b0  8b11                 mov edx, dword ptr [ecx]
// 005b88b2  8b5208               mov edx, dword ptr [edx + 8]
// 005b88b5  8d44240c             lea eax, [esp + 0xc]
// 005b88b9  50                   push eax
// 005b88ba  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b88be  50                   push eax
// 005b88bf  ffd2                 call edx
// 005b88c1  b001                 mov al, 1
// 005b88c3  5e                   pop esi
// 005b88c4  c20800               ret 8
// 005b88c7  32c0                 xor al, al
// 005b88c9  5e                   pop esi
// 005b88ca  c20800               ret 8

struct DescribedBase;

struct EnumItem;

struct EnumDescriptor {
    const EnumItem* convertToItem(int value) const;
};

struct Variant {
    int value;
};

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual int getValue(const DescribedBase* object) const;
    virtual void setValue(DescribedBase* object, int value) const;
};

struct EnumPropertyDescriptor {
    char pad[0x1c];
    GetSet* getset;
};

struct SurfaceEnumPropDescriptor : EnumPropertyDescriptor {
    bool equalValues(const DescribedBase* a, const DescribedBase* b) const;
};

extern "C" int __stdcall sub_5B7EE0(int, int*);
extern "C" int __stdcall sub_5B80D0(int);

bool SurfaceEnumPropDescriptor::equalValues(const DescribedBase* a, const DescribedBase* b) const {
    int va;
    int vb;
    sub_5B7EE0((int)a, &va);
    if (!sub_5B80D0((int)b)) {
        return false;
    }
    GetSet* gs = this->getset;
    gs->setValue((DescribedBase*)b, va);
    return true;
}
