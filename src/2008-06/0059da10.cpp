// from server: 86% by colin
struct DataSource {
    const void* get();
};

struct Inner {
    char pad[0xC4];
    float values[6];
    const void* get();
    void setValue(const float*);
};

struct Outer {
    char pad[0x2C8];
    Inner* inner;
    void setValue(const float*);
};

extern void __cdecl setMemberValue(Outer*, const void*);

void Outer::setValue(const float* v)
{
    Inner* in = inner;
    in->get();
    float local[6];
    local[0] = in->values[0];
    local[1] = in->values[1];
    local[2] = in->values[2];
    local[3] = in->values[3];
    local[4] = in->values[4];
    local[5] = in->values[5];
    if (v[0] == local[0] && v[1] == local[1] && v[2] == local[2])
        return;
    local[0] = v[0];
    local[1] = v[1];
    local[2] = v[2];
    inner->setValue(local);
    setMemberValue(this, (const void*)0x97632c);
}
