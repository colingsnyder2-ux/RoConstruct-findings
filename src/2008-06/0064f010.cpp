// from server: 85% by king_originala
struct ImageKeyButton;

struct ImageValue {
    float values[4];
};

struct ImageState {
    void update(void* context, bool active);
};

struct ImageKeyButtonVTable {
    void* reserved0[21];
    bool (__thiscall *enabled)(ImageKeyButton*);
    void* reserved1[8];
    bool (__thiscall *evaluate)(ImageKeyButton*, const ImageValue&);
};

struct ImageKeyButton {
    ImageKeyButtonVTable* vtable;
    unsigned char reserved0[0x140];
    int mode;
    unsigned char reserved1[4];
    bool alternate;
    unsigned char reserved2[3];
    ImageState state;

    ImageValue getValue(int mode);
    void update(void* context);
};

void ImageKeyButton::update(void* context)
{
    if (vtable->enabled(this)) {
        state.update(context,
            vtable->evaluate(this, getValue(alternate ? 2 : mode)));
    }
}
