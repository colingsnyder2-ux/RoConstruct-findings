// from server: 100% by king_originala
// roc 2008-06 0059b610  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b610
//
// 0059b610  8b542404             mov edx, dword ptr [esp + 4]
// 0059b614  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0059b617  8b01                 mov eax, dword ptr [ecx]
// 0059b619  8b4008               mov eax, dword ptr [eax + 8]
// 0059b61c  83ec0c               sub esp, 0xc
// 0059b61f  56                   push esi
// 0059b620  52                   push edx
// 0059b621  8d542408             lea edx, [esp + 8]
// 0059b625  52                   push edx
// 0059b626  ffd0                 call eax
// 0059b628  8bf0                 mov esi, eax
// 0059b62a  e83118fdff           call 0x56ce60
// 0059b62f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059b633  8901                 mov dword ptr [ecx], eax
// 0059b635  56                   push esi
// 0059b636  83c104               add ecx, 4
// 0059b639  e8921bfdff           call 0x56d1d0
// 0059b63e  5e                   pop esi
// 0059b63f  83c40c               add esp, 0xc
// 0059b642  c20800               ret 8

struct Vector3
{
    float x, y, z;
};

struct Accessor
{
    virtual void slot0();
    virtual void slot1();
    virtual Vector3* get(Vector3* value, void* object);
};

struct Holder
{
    void assign(const Vector3& value);
};

struct Result
{
    void* type;
    Holder value;
};

extern void* getType();

struct Descriptor
{
    char padding[24];
    Accessor* accessor;

    void read(void* object, Result* result);
};

void Descriptor::read(void* object, Result* result)
{
    Vector3 temporary;
    Vector3* value = accessor->get(&temporary, object);
    result->type = getType();
    result->value.assign(*value);
}
