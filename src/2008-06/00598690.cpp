// from server: 83% by king_originala
extern char property;

struct Decal {
    char padding[0x164];
    float value;

    void setValue(float v);
    void notify(const void* descriptor);
};

void Decal::setValue(float v)
{
    if (v != value && v >= 0.0f) {
        value = v;
        notify(&property);
    }
}
