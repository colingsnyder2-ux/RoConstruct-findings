// from server: 93% by colin
struct bad_cast {
    void* vfptr;
    int field4;
    int field8;
    int fieldC;
    int field10;
    bad_cast(const bad_cast&);
};

struct bad_lexical_cast : bad_cast {
    bad_lexical_cast(const bad_cast& other);
};

bad_lexical_cast::bad_lexical_cast(const bad_cast& other) : bad_cast(other) {
    *(void**)this = (void*)0x79f584;
    this->fieldC = other.fieldC;
    this->field10 = other.field10;
}
