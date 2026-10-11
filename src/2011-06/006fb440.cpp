// from server: 29% by atomic.potato
struct VCRenderSettingsItem_EnumPropDescriptor {
    char pad[0xb4];
    struct Data {
        char pad2[0xac];
        float value;
    };
    Data* data;
    void update(float value);
};

void VCRenderSettingsItem_EnumPropDescriptor::update(float value) {
    if (value != data->value) {
        data->value = value;
        data->value = 0xcd2850;
    }
}
