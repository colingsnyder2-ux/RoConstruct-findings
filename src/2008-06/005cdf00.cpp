// from server: 100% by king_originala
// roc 2008-06 005cdf00  unit: RBX::Camera  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cdf00
//
// 005cdf00  51                   push ecx
// 005cdf01  53                   push ebx
// 005cdf02  55                   push ebp
// 005cdf03  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005cdf07  8d99a4010000         lea ebx, [ecx + 0x1a4]
// 005cdf0d  894c2408             mov dword ptr [esp + 8], ecx
// 005cdf11  53                   push ebx
// 005cdf12  8bcd                 mov ecx, ebp
// 005cdf14  e8c786eaff           call 0x4765e0
// 005cdf19  84c0                 test al, al
// 005cdf1b  7445                 je 0x5cdf62
// 005cdf1d  56                   push esi
// 005cdf1e  57                   push edi
// 005cdf1f  b909000000           mov ecx, 9
// 005cdf24  8bf5                 mov esi, ebp
// 005cdf26  8bfb                 mov edi, ebx
// 005cdf28  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005cdf2a  d94524               fld dword ptr [ebp + 0x24]
// 005cdf2d  d95b24               fstp dword ptr [ebx + 0x24]
// 005cdf30  d94528               fld dword ptr [ebp + 0x28]
// 005cdf33  d95b28               fstp dword ptr [ebx + 0x28]
// 005cdf36  d9452c               fld dword ptr [ebp + 0x2c]
// 005cdf39  d95b2c               fstp dword ptr [ebx + 0x2c]
// 005cdf3c  8b742410             mov esi, dword ptr [esp + 0x10]
// 005cdf40  68749a9700           push 0x979a74
// 005cdf45  8bce                 mov ecx, esi
// 005cdf47  e8b4fbe3ff           call 0x40db00
// 005cdf4c  8bce                 mov ecx, esi
// 005cdf4e  e8fddfffff           call 0x5cbf50
// 005cdf53  5f                   pop edi
// 005cdf54  5e                   pop esi
// 005cdf55  85c0                 test eax, eax
// 005cdf57  7409                 je 0x5cdf62
// 005cdf59  8b10                 mov edx, dword ptr [eax]
// 005cdf5b  8bc8                 mov ecx, eax
// 005cdf5d  8b420c               mov eax, dword ptr [edx + 0xc]
// 005cdf60  ffd0                 call eax
// 005cdf62  5d                   pop ebp
// 005cdf63  5b                   pop ebx
// 005cdf64  59                   pop ecx
// 005cdf65  c20400               ret 4

struct Matrix3 {
    float elements[9];
};

struct Frame {
    Matrix3 rotation;
    float x, y, z;

    bool operator!=(const Frame& other) const;
    __forceinline Frame& operator=(const Frame& other);
};

__forceinline Frame& Frame::operator=(const Frame& other)
{
    rotation = other.rotation;
    x = other.x;
    y = other.y;
    z = other.z;
    return *this;
}

struct Property {
    char unused;
};

extern Property frameProperty;

struct ICameraOwner {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void changed();
};

struct Camera {
    char padding[0x1a4];
    Frame frame;

    void notify(const Property& property);
    ICameraOwner* getCameraOwner();
    void setFrame(const Frame& value);
};

void Camera::setFrame(const Frame& value)
{
    if (value != frame) {
        frame = value;
        notify(frameProperty);
        ICameraOwner* owner = getCameraOwner();
        if (owner)
            owner->changed();
    }
}
