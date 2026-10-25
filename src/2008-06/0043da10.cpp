// from server: 100% by king_originala
// roc 2008-06 0043da10  unit: Vector3ComponentItem  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043da10
//
// 0043da10  6aff                 push -1
// 0043da12  68b0077c00           push 0x7c07b0
// 0043da17  64a100000000         mov eax, dword ptr fs:[0]
// 0043da1d  50                   push eax
// 0043da1e  64892500000000       mov dword ptr fs:[0], esp
// 0043da25  83ec18               sub esp, 0x18
// 0043da28  53                   push ebx
// 0043da29  56                   push esi
// 0043da2a  8bf1                 mov esi, ecx
// 0043da2c  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0043da32  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043da38  33db                 xor ebx, ebx
// 0043da3a  57                   push edi
// 0043da3b  895c240c             mov dword ptr [esp + 0xc], ebx
// 0043da3f  895c2410             mov dword ptr [esp + 0x10], ebx
// 0043da43  50                   push eax
// 0043da44  8d4c2410             lea ecx, [esp + 0x10]
// 0043da48  895c2430             mov dword ptr [esp + 0x30], ebx
// 0043da4c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0043da50  e8ab941300           call 0x576f00
// 0043da55  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0043da59  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0043da61  3bfb                 cmp edi, ebx
// 0043da63  7405                 je 0x43da6a
// 0043da65  8d5714               lea edx, [edi + 0x14]
// 0043da68  eb02                 jmp 0x43da6c
// 0043da6a  33d2                 xor edx, edx
// 0043da6c  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 0043da72  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043da75  8b01                 mov eax, dword ptr [ecx]
// 0043da77  8b4008               mov eax, dword ptr [eax + 8]
// 0043da7a  52                   push edx
// 0043da7b  8d54241c             lea edx, [esp + 0x1c]
// 0043da7f  52                   push edx
// 0043da80  ffd0                 call eax
// 0043da82  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0043da88  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0043da8c  03c0                 add eax, eax
// 0043da8e  03c0                 add eax, eax
// 0043da90  d90408               fld dword ptr [eax + ecx]
// 0043da93  d95c0418             fstp dword ptr [esp + eax + 0x18]
// 0043da97  3bfb                 cmp edi, ebx
// 0043da99  7405                 je 0x43daa0
// 0043da9b  8d4714               lea eax, [edi + 0x14]
// 0043da9e  eb02                 jmp 0x43daa2
// 0043daa0  33c0                 xor eax, eax
// 0043daa2  8bb62c010000         mov esi, dword ptr [esi + 0x12c]
// 0043daa8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043daab  8b11                 mov edx, dword ptr [ecx]
// 0043daad  8d742418             lea esi, [esp + 0x18]
// 0043dab1  56                   push esi
// 0043dab2  50                   push eax
// 0043dab3  8b420c               mov eax, dword ptr [edx + 0xc]
// 0043dab6  ffd0                 call eax
// 0043dab8  8d4c240c             lea ecx, [esp + 0xc]
// 0043dabc  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0043dac4  e8f7981300           call 0x5773c0
// 0043dac9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0043dacd  5f                   pop edi
// 0043dace  5e                   pop esi
// 0043dacf  5b                   pop ebx
// 0043dad0  64890d00000000       mov dword ptr fs:[0], ecx
// 0043dad7  83c424               add esp, 0x24
// 0043dada  c20800               ret 8

struct Vector3
{
    float value[3];
};

struct Storage
{
    unsigned int first;
    unsigned int second;

    Storage();
    ~Storage();
};

inline Storage::Storage() : first(0), second(0) {}

struct Handle : Storage
{
    unsigned int third;

    Handle(void* value);
    void initialize(void* value);
};

inline Handle::Handle(void* value) : third(0)
{
    initialize(value);
}

struct Instance
{
    char padding[0x14];
    char object;
};

struct Accessor
{
    virtual void unused0() = 0;
    virtual void unused1() = 0;
    virtual Vector3 get(void* object) = 0;
    virtual void set(void* object, const Vector3& value) = 0;
};

struct Property
{
    char padding[0x18];
    Accessor* accessor;

    Vector3 get(void* object);
    void set(void* object, const Vector3& value);
};

inline Vector3 Property::get(void* object)
{
    return accessor->get(object);
}

inline void Property::set(void* object, const Vector3& value)
{
    accessor->set(object, value);
}

struct Owner
{
    char padding[0x198];
    void* value;
};

struct Vector3ComponentItem
{
    char padding[0x128];
    Owner* owner;
    Property* property;
    unsigned int component;

    void update(Instance* instance, const Vector3& value);
};

void Vector3ComponentItem::update(Instance* instance, const Vector3& value)
{
    Handle handle(owner->value);
    Vector3 result = property->get(instance ? &instance->object : 0);
    result.value[component] = value.value[component];
    property->set(instance ? &instance->object : 0, result);
}
