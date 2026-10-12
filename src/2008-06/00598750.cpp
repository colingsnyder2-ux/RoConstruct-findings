// from server: 77% by king_originala
struct S {
    char padding[0x170];
    float value;
    void changed(const void*);
    void setValue(float);
};

void S::setValue(float v)
{
    if (v != value && v > 0.0f) {
        value = v;
        changed(reinterpret_cast<const void*>(0x975f4c));
    }
}
