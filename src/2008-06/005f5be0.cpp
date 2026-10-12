// from server: 72% by king_originala
struct StreamOwner {
    void* stream;
    unsigned char padding[16];
    int field14;
    int field18;
    int field1c;
    int field20;
    int field24;

    int finish(bool reset, bool compress);
};

struct S {
    StreamOwner** owner;
    void f();
};

void S::f()
{
    StreamOwner** p = owner;
    (*p)->field24 = 0;

    StreamOwner* s = *p;
    int value = s->field14;
    s->field1c = value;
    s->field20 = value;

    try {
        (*p)->finish(false, true);
    }
    catch (...) {
    }
}
