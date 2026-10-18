// from server: 76% by colin
struct DataSource {
    const void* get();
};

struct Geometry {
    char pad0[0x9c];
    DataSource* dataSource;
    void* fieldA0;
    void* fieldA4;
    void compute(void* out);
};

void Geometry::compute(void* out) {
    DataSource* ds = *(DataSource**)((char*)this + 0xa0);
    ds->get();
    DataSource* ds2 = *(DataSource**)((char*)this + 0xa0);
    ds2->get();

    DataSource* src = *(DataSource**)((char*)this + 0x9c);
    void* vtable = *(void**)src;
    float* (__thiscall* fn)(void*, void*, void*) = *(float* (__thiscall**)(void*, void*, void*))((char*)vtable + 0x14);

    float local[3];
    float* r = fn(src, local, (char*)ds + 0x94);

    float* o = (float*)out;
    float* s = (float*)ds2;

    o[0] = r[0] + s[0xb8 / 4];
    o[1] = r[1] + s[0xbc / 4];
    o[2] = r[2] + s[0xc0 / 4];
    o[3] = s[0xb8 / 4] - r[0];
    o[4] = s[0xbc / 4] - r[1];
    o[5] = s[0xc0 / 4] - r[2];

    float depth = *(float*)0x82748c;
    o[0] = o[0] - depth;
    o[1] = o[1] - depth;
    o[2] = o[2] - depth;
    o[3] = o[3] + depth;
    o[4] = o[4] + depth;
    o[5] = o[5] + depth;
}
