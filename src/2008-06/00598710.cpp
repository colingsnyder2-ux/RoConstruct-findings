// from server: 77% by king_originala
struct Decal {
    char padding[0x16c];
    float value;
    void setValue(float v);
    void notify(const void* property);
};

void Decal::setValue(float v)
{
    if (v != value && v > 0.0f) {
        value = v;
        notify((const void*)0x975f68);
    }
}
