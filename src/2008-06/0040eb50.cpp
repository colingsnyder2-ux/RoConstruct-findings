// from server: 94% by colin
struct Interface;

struct Unknown {
    long __stdcall queryInterface(const void *iid, void **out);
};

struct Object {
    long (__stdcall *vtable)(Object *, const void *, void **);
};

extern const unsigned char iid1[16];
extern const unsigned char iid2[16];

long __stdcall queryInterface(void *self, const void *iid, void **out)
{
    if (out == 0)
        return 0x80004003;

    *out = 0;

    const unsigned int *id = static_cast<const unsigned int *>(iid);
    const unsigned int *g1 = reinterpret_cast<const unsigned int *>(iid1);
    const unsigned int *g2 = reinterpret_cast<const unsigned int *>(iid2);

    bool match = false;
    if (id[0] == 0xb196b286 && id[1] == g1[0] && id[2] == g1[1] && id[3] == g1[2])
        match = true;
    else if (id[0] == 0 && id[1] == 0 && id[2] == 0xc0 && id[3] == 0x46000000)
        match = true;

    if (!match)
        return 0x80004002;

    *out = self;
    Object *obj = static_cast<Object *>(self);
    obj->vtable(obj, iid, out);
    return 0;
}
