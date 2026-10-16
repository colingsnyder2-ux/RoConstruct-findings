// from server: 77% by colin
struct DataSource {
    const void* get();
};

struct VCRenderSettings {
    char reserved0[0x2C8];
    DataSource* dataSource;

    void setValue(const float* value);
};

extern void __cdecl combine(const void*, const void*, void*);

extern "C" void __stdcall sub_40DB00(void*);

void VCRenderSettings::setValue(const float* value)
{
    DataSource* ds = dataSource;
    ds->get();

    float local[6];
    local[0] = *(float*)((char*)ds + 0xC4);
    local[1] = *(float*)((char*)ds + 0xC8);
    local[2] = *(float*)((char*)ds + 0xCC);
    local[3] = *(float*)((char*)ds + 0xD0);
    local[4] = *(float*)((char*)ds + 0xD4);
    local[5] = *(float*)((char*)ds + 0xD8);

    if (value[0] == local[0] && value[1] == local[1] && value[2] == local[2])
        return;

    local[0] = value[0];
    local[1] = value[1];
    local[2] = value[2];

    combine(local, local, (char*)dataSource + 0xC4);

    sub_40DB00(this);
}
