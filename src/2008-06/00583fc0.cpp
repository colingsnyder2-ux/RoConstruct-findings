// from server: 83% by king_originala
struct Base {
    float data[9];
    Base(const Base&);
};

struct Value {
    Base base;
    float x, y, z;
};

struct S {
    unsigned char padding[8];
    const Value& (__thiscall *getter)(void*);
    int adjustment;
    int virtualOffset;

    Value get(const void* object) const;
};

Value S::get(const void* object) const {
    char* p = object ? (char*)object - 0x14 : 0;
    char* table = *(char**)(p + 0x134);
    int offset = *(int*)(table + virtualOffset) + adjustment;
    return getter(p + 0x134 + offset);
}
