// from server: 83% by king_originala
extern char property;

struct Decal {
    char padding[0x168];
    float value;

    void notify(const char*);
    void setValue(float);
};

void Decal::setValue(float v)
{
    if (v != value && v > 0.0f) {
        value = v;
        notify(&property);
    }
}
