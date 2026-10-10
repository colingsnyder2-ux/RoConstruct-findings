// from server: 48% by colin
struct DescribedBase;

struct EnumPropertyDescriptor
{
    void construct(const void* classDesc, const void* enumDesc, const char* name, const char* category, int flags, int security);
};

struct EnumPropDescriptor : EnumPropertyDescriptor
{
    void* getset;
    const void* enumDesc;
    void checkFlags();
    void getValue(DescribedBase* object, void* value) const;
    void setValue(DescribedBase* object, const void* value) const;
};

struct Vector3
{
    float x, y, z;
};

struct CoordinateFrame
{
    float data[9];
    Vector3 translation;
};

extern float g_someFloat;

extern "C" void __cdecl sub_5095D0(void* self, void* other);
extern "C" void* __cdecl sub_573F80(void* self);
extern "C" bool __cdecl sub_574900(void* self);
extern "C" void* __cdecl sub_5AC020(void* out, void* a, void* b, float f);
extern "C" void __cdecl sub_577DE0(void* self, void* out);

void EnumPropDescriptor::getValue(DescribedBase* object, void* value) const
{
    void* inst = sub_573F80(object);
    void* local;
    sub_5095D0(&local, inst);

    Vector3 pos;
    pos.x = *(float*)((char*)inst + 0x24);
    pos.y = *(float*)((char*)inst + 0x28);
    pos.z = *(float*)((char*)inst + 0x2c);

    Vector3* off = (Vector3*)value;
    pos.x += off->x;
    pos.y += off->y;
    pos.z += off->z;

    if (sub_574900(object))
    {
        CoordinateFrame cf;
        float f = g_someFloat;
        sub_5AC020(&cf, &local, &pos, f);
        *(CoordinateFrame*)value = cf;
    }

    sub_577DE0(object, value);
}
