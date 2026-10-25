// from server: 100% by king_originala
// roc 2008-06 00552e00  unit: RBX::RenderBase::AggregateChunk  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00552e00
//
// 00552e00  55                   push ebp
// 00552e01  8bec                 mov ebp, esp
// 00552e03  83ec10               sub esp, 0x10
// 00552e06  894df0               mov dword ptr [ebp - 0x10], ecx
// 00552e09  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00552e0c  50                   push eax
// 00552e0d  8d4df4               lea ecx, [ebp - 0xc]
// 00552e10  51                   push ecx
// 00552e11  8b5508               mov edx, dword ptr [ebp + 8]
// 00552e14  8b02                 mov eax, dword ptr [edx]
// 00552e16  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00552e19  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00552e1c  ffd2                 call edx
// 00552e1e  83c024               add eax, 0x24
// 00552e21  8bc8                 mov ecx, eax
// 00552e23  e8187ef0ff           call 0x45ac40
// 00552e28  8d4df4               lea ecx, [ebp - 0xc]
// 00552e2b  e810000000           call 0x552e40
// 00552e30  8be5                 mov esp, ebp
// 00552e32  5d                   pop ebp
// 00552e33  c20400               ret 4

struct Vector {
    float x, y, z;
    Vector operator-(const Vector&) const;
    float length() const;
    float distance(class Provider*) const;
};

struct Transform {
    char padding[0x24];
    Vector translation;
};

class Provider {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual const Transform& getTransform();
};

#pragma optimize("", off)
float Vector::distance(Provider* provider) const {
    Vector difference = provider->getTransform().translation - *this;
    return difference.length();
}
#pragma optimize("", on)
