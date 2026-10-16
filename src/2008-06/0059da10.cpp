// from server: 41% by colin
struct DataSource {
    const void* get();
};

struct RenderSettings {
    char reserved0[0xC4];
    float f0;
    float f1;
    float f2;
    float f3;
    float f4;
    float f5;
};

struct VCRenderSettings {
    char reserved0[0x2C8];
    DataSource* dataSource;
};

extern "C" void __cdecl combine(const void*, const void*, void*);

struct VMember {
    void apply(const void*);
};

void VMember::apply(const void* value)
{
    DataSource* ds = ((VCRenderSettings*)this)->dataSource;
    ds->get();
    RenderSettings* rs = (RenderSettings*)ds;
    float a = rs->f0;
    float b = rs->f1;
    float c = rs->f2;
    float d = rs->f3;
    float e = rs->f4;
    float f = rs->f5;
    const float* v = (const float*)value;
    if (v[0] != a && v[1] == b && v[2] == c)
        return;
    float tmp[3];
    tmp[0] = v[0];
    tmp[1] = v[1];
    tmp[2] = v[2];
    combine(tmp, &a, ds);
    ((VMember*)this)->apply(0);
}
