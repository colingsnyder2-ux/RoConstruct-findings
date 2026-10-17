// from server: 82% by colin
struct DataSource
{
    const void* get();
};

struct VCRenderSettings
{
    char padding[0x2C8];
    DataSource* dataSource;
    void setValue(const float* value);
};

extern void __cdecl sub_614040(DataSource* source, const float* value);
extern void __stdcall sub_40DB00(VCRenderSettings* self, const void* prop);

void VCRenderSettings::setValue(const float* value)
{
    DataSource* ds = dataSource;
    ds->get();

    float current[6];
    current[0] = *(float*)((char*)ds + 0xC4);
    current[1] = *(float*)((char*)ds + 0xC8);
    current[2] = *(float*)((char*)ds + 0xCC);
    current[3] = *(float*)((char*)ds + 0xD0);
    current[4] = *(float*)((char*)ds + 0xD4);
    current[5] = *(float*)((char*)ds + 0xD8);

    if (value[0] == current[0] && value[1] == current[1] && value[2] == current[2])
        return;

    current[0] = value[0];
    current[1] = value[1];
    current[2] = value[2];

    sub_614040(dataSource, current);
    sub_40DB00(this, (const void*)0x97632c);
}
