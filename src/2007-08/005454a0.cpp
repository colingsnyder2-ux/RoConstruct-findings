// from server: 42% by Viper
// roc 2007-08 005454a0  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005454a0

struct String {
    void assign(const String& other);
};

struct Item {
    char pad[0x1c];
    int field_1c;
};

struct Holder {
    Item* ptr;
    void __cdecl construct(Item* src);
};

void Holder::construct(Item* src)
{
    Item* p = this->ptr;
    if (p) {
        ((String*)p)->assign(*(String*)src);
        p->field_1c = src->field_1c;
    }
}
