// from server: 100% by king_originala
// roc 2008-06 0059db90  unit: VCRenderSettings::?$EnumPropDescriptor  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059db90
//
// 0059db90  83ec48               sub esp, 0x48
// 0059db93  56                   push esi
// 0059db94  8bf1                 mov esi, ecx
// 0059db96  8b96c4020000         mov edx, dword ptr [esi + 0x2c4]
// 0059db9c  d94204               fld dword ptr [edx + 4]
// 0059db9f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0059dba3  d819                 fcomp dword ptr [ecx]
// 0059dba5  83c204               add edx, 4
// 0059dba8  dfe0                 fnstsw ax
// 0059dbaa  f6c444               test ah, 0x44
// 0059dbad  7a1e                 jp 0x59dbcd
// 0059dbaf  d94204               fld dword ptr [edx + 4]
// 0059dbb2  d85904               fcomp dword ptr [ecx + 4]
// 0059dbb5  dfe0                 fnstsw ax
// 0059dbb7  f6c444               test ah, 0x44
// 0059dbba  7a11                 jp 0x59dbcd
// 0059dbbc  d94208               fld dword ptr [edx + 8]
// 0059dbbf  d85908               fcomp dword ptr [ecx + 8]
// 0059dbc2  dfe0                 fnstsw ax
// 0059dbc4  f6c444               test ah, 0x44
// 0059dbc7  0f8b9a000000         jnp 0x59dc67
// 0059dbcd  83bedc01000001       cmp dword ptr [esi + 0x1dc], 1
// 0059dbd4  7504                 jne 0x59dbda
// 0059dbd6  8bc1                 mov eax, ecx
// 0059dbd8  eb0a                 jmp 0x59dbe4
// 0059dbda  8d442410             lea eax, [esp + 0x10]
// 0059dbde  50                   push eax
// 0059dbdf  e84caaf7ff           call 0x518630
// 0059dbe4  83be9c01000000       cmp dword ptr [esi + 0x19c], 0
// 0059dbeb  d900                 fld dword ptr [eax]
// 0059dbed  d95c2404             fstp dword ptr [esp + 4]
// 0059dbf1  d94004               fld dword ptr [eax + 4]
// 0059dbf4  d95c2408             fstp dword ptr [esp + 8]
// 0059dbf8  d94008               fld dword ptr [eax + 8]
// 0059dbfb  d95c240c             fstp dword ptr [esp + 0xc]
// 0059dbff  742e                 je 0x59dc2f
// 0059dc01  57                   push edi
// 0059dc02  8d4c2420             lea ecx, [esp + 0x20]
// 0059dc06  8dbe28020000         lea edi, [esi + 0x228]
// 0059dc0c  51                   push ecx
// 0059dc0d  8bcf                 mov ecx, edi
// 0059dc0f  e8cca60400           call 0x5e82e0
// 0059dc14  8d542408             lea edx, [esp + 8]
// 0059dc18  52                   push edx
// 0059dc19  8bcf                 mov ecx, edi
// 0059dc1b  e850a80400           call 0x5e8470
// 0059dc20  8d442420             lea eax, [esp + 0x20]
// 0059dc24  50                   push eax
// 0059dc25  8bcf                 mov ecx, edi
// 0059dc27  e8d4a80400           call 0x5e8500
// 0059dc2c  5f                   pop edi
// 0059dc2d  eb10                 jmp 0x59dc3f
// 0059dc2f  8d4c2404             lea ecx, [esp + 4]
// 0059dc33  51                   push ecx
// 0059dc34  8d8e28020000         lea ecx, [esi + 0x228]
// 0059dc3a  e831a80400           call 0x5e8470
// 0059dc3f  6848619700           push 0x976148
// 0059dc44  8bce                 mov ecx, esi
// 0059dc46  e8b5fee6ff           call 0x40db00
// 0059dc4b  6850629700           push 0x976250
// 0059dc50  8bce                 mov ecx, esi
// 0059dc52  e8a9fee6ff           call 0x40db00
// 0059dc57  c6869803000001       mov byte ptr [esi + 0x398], 1
// 0059dc5e  8b16                 mov edx, dword ptr [esi]
// 0059dc60  8b4250               mov eax, dword ptr [edx + 0x50]
// 0059dc63  8bce                 mov ecx, esi
// 0059dc65  ffd0                 call eax
// 0059dc67  5e                   pop esi
// 0059dc68  83c448               add esp, 0x48
// 0059dc6b  c20400               ret 4

#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3& value);
    bool operator==(const Vector3& value) const;
    Vector3 xxx() const;
};

__forceinline Vector3::Vector3(const Vector3& value)
    : x(value.x), y(value.y), z(value.z)
{
}

__forceinline bool Vector3::operator==(const Vector3& value) const
{
    return x == value.x && y == value.y && z == value.z;
}

struct Frame {
    float data[12];
};

struct Property {
    char storage[0x9C];
    Frame get() const;
    void set(const Vector3& value);
    void set(const Frame& value);
};

struct ValueStorage {
    int header;
    Vector3 value;
};

extern char descriptor1;
extern char descriptor2;

struct S;
typedef void (__thiscall *VirtualFunction)(S*);

struct S {
    VirtualFunction* volatile vtable;
    char padding0[0x198];
    int preserveFrame;
    char padding1[0x3C];
    int mode;
    char padding2[0x48];
    Property property;
    ValueStorage* current;
    char padding3[0xD0];
    volatile bool dirty;

    void notify(const void* descriptor);
    void setValue(const Vector3& value);
};

void S::setValue(const Vector3& value)
{
    if (!(value == current->value)) {
        Vector3 adjusted = mode == 1 ? value : value.xxx();

        if (preserveFrame) {
            Frame saved = property.get();
            property.set(adjusted);
            property.set(saved);
        } else {
            property.set(adjusted);
        }

        notify(&descriptor1);
        notify(&descriptor2);
        dirty = true;
        vtable[20](this);
    }
}
