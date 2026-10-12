// from server: 82% by king_originala
struct Value {
    float data[4];
};

struct State {
    void update(void *, bool);
};

struct ImageButton;

struct ButtonTable {
    void *reserved0[21];
    bool (__thiscall *enabled)(ImageButton *);
    void *reserved1[8];
    bool (__thiscall *accept)(ImageButton *, const Value &);
};

struct ImageButton {
    ButtonTable *table;
    unsigned char padding0[0x140];
    unsigned long value;
    unsigned long padding1;
    State state;

    Value makeValue(unsigned long);
    void update(void *);
};

void ImageButton::update(void *context)
{
    if (table->enabled(this))
        state.update(context, table->accept(this, makeValue(value)));
}
