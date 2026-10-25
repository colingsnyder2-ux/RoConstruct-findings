// from server: 100% by king_originala
// roc 2008-06 005b2670  unit: RBX::Accoutrement  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b2670
//
// 005b2670  51                   push ecx
// 005b2671  53                   push ebx
// 005b2672  55                   push ebp
// 005b2673  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005b2677  8d9958010000         lea ebx, [ecx + 0x158]
// 005b267d  894c2408             mov dword ptr [esp + 8], ecx
// 005b2681  53                   push ebx
// 005b2682  8bcd                 mov ecx, ebp
// 005b2684  e8573fecff           call 0x4765e0
// 005b2689  84c0                 test al, al
// 005b268b  7463                 je 0x5b26f0
// 005b268d  56                   push esi
// 005b268e  57                   push edi
// 005b268f  b909000000           mov ecx, 9
// 005b2694  8bf5                 mov esi, ebp
// 005b2696  8bfb                 mov edi, ebx
// 005b2698  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005b269a  d94524               fld dword ptr [ebp + 0x24]
// 005b269d  d95b24               fstp dword ptr [ebx + 0x24]
// 005b26a0  d94528               fld dword ptr [ebp + 0x28]
// 005b26a3  d95b28               fstp dword ptr [ebx + 0x28]
// 005b26a6  d9452c               fld dword ptr [ebp + 0x2c]
// 005b26a9  d95b2c               fstp dword ptr [ebx + 0x2c]
// 005b26ac  8b742410             mov esi, dword ptr [esp + 0x10]
// 005b26b0  56                   push esi
// 005b26b1  e89af7edff           call 0x491e50
// 005b26b6  83c404               add esp, 4
// 005b26b9  85c0                 test eax, eax
// 005b26bb  7415                 je 0x5b26d2
// 005b26bd  c644241800           mov byte ptr [esp + 0x18], 0
// 005b26c2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005b26c6  51                   push ecx
// 005b26c7  8d8844030000         lea ecx, [eax + 0x344]
// 005b26cd  e86e42fcff           call 0x576940
// 005b26d2  68206d9700           push 0x976d20
// 005b26d7  8bce                 mov ecx, esi
// 005b26d9  e822b4e5ff           call 0x40db00
// 005b26de  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005b26e4  5f                   pop edi
// 005b26e5  5e                   pop esi
// 005b26e6  85c9                 test ecx, ecx
// 005b26e8  7406                 je 0x5b26f0
// 005b26ea  53                   push ebx
// 005b26eb  e8d01d0300           call 0x5e44c0
// 005b26f0  5d                   pop ebp
// 005b26f1  5b                   pop ebx
// 005b26f2  59                   pop ecx
// 005b26f3  c20400               ret 4

namespace RBX {
    class Instance {
    public:
        virtual ~Instance();
        char pad[0x100];
        Instance* next;
    };

    class ServiceProvider : public Instance {
    public:
        ServiceProvider* finish();
    };
}

RBX::ServiceProvider* __cdecl func_00491e50(RBX::Instance*);

struct Matrix {
    float elements[9];
};

struct Transform {
    Matrix rotation;
    float x, y, z;

    bool different(const Transform&) const;
    __forceinline Transform& operator=(const Transform&);
};

__forceinline Transform& Transform::operator=(const Transform& value)
{
    rotation = value.rotation;
    x = value.x;
    y = value.y;
    z = value.z;
    return *this;
}

struct Flag {
    bool value;
};

struct Signal {
    void fire(Flag);
};

struct Attachment {
    void set(const Transform&);
};

struct S : RBX::Instance {
    char padding0[0x2c];
    Attachment* attachment;
    char padding1[0x20];
    Transform transform;

    void changed(const void*);
    void setTransform(const Transform&);
};

void S::setTransform(const Transform& value)
{
    Transform& destination = transform;
    if (value.different(destination)) {
        destination = value;

        RBX::ServiceProvider* provider = func_00491e50(this);
        if (provider) {
            Flag flag;
            flag.value = false;
            reinterpret_cast<Signal*>(
                reinterpret_cast<char*>(provider) + 0x344)->fire(flag);
        }

        changed(reinterpret_cast<const void*>(0x976d20));

        if (attachment)
            attachment->set(destination);
    }
}
