// from server: 75% by colin
struct Decal {
    char pad[0x16c];
    float field_0x16c;
    void setTransparency(float value);
};

extern "C" void __stdcall someFunc();

void Decal::setTransparency(float value) {
    if (value != field_0x16c) {
        if (value >= 0.0f) {
            field_0x16c = value;
            someFunc();
            return;
        }
    }
}
