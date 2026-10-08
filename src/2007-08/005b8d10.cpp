// from server: 35% by colin
// roc 2007-08 005b8d10  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8d10
//
// 005b8d10  56                   push esi
// 005b8d11  8d44240c             lea eax, [esp + 0xc]
// 005b8d15  8bf1                 mov esi, ecx
// 005b8d17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b8d1b  50                   push eax
// 005b8d1c  51                   push ecx
// 005b8d1d  e8bef1ffff           call 0x5b7ee0
// 005b8d22  8bc8                 mov ecx, eax
// 005b8d24  e877350200           call 0x5dc2a0
// 005b8d29  84c0                 test al, al
// 005b8d2b  741a                 je 0x5b8d47
// 005b8d2d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b8d30  8b11                 mov edx, dword ptr [ecx]
// 005b8d32  8b5208               mov edx, dword ptr [edx + 8]
// 005b8d35  8d44240c             lea eax, [esp + 0xc]
// 005b8d39  50                   push eax
// 005b8d3a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b8d3e  50                   push eax
// 005b8d3f  ffd2                 call edx
// 005b8d41  b001                 mov al, 1
// 005b8d43  5e                   pop esi
// 005b8d44  c20800               ret 8
// 005b8d47  32c0                 xor al, al
// 005b8d49  5e                   pop esi
// 005b8d4a  c20800               ret 8

struct DescribedBase;

struct Variant {
    char pad[8];
};

struct EnumItem;

struct EnumDescriptor {
    struct Item;
};

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase*, Variant&) const;
    virtual void setValue(DescribedBase*, const Variant&) const;
};

struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* m_pGetSet;

    bool equalValues(const DescribedBase* a, const DescribedBase* b) const;
};

extern bool func_005b7ee0(const DescribedBase* a, const DescribedBase* b, Variant* out);
extern bool func_005dc2a0(const Variant* v);

bool SurfaceEnumPropDescriptor::equalValues(const DescribedBase* a, const DescribedBase* b) const {
    Variant va;
    if (!func_005dc2a0(&va)) {
        return false;
    }
    GetSet* gs = (GetSet*)m_pGetSet;
    gs->setValue((DescribedBase*)b, va);
    return true;
}
