// from server: 69% by king_originala
struct Buffer {
    char padding[0x14];
    int begin;
    int unused;
    int current;
    int end;
    int state;
    void close(int, int);
};

struct Holder {
    Buffer* buffer;
};

struct S {
    Holder* holder;
    void f();
};

void S::f()
{
    Holder* h = holder;
    h->buffer->state = 0;
    try {
        Buffer* b = h->buffer;
        int value = b->begin;
        b->current = value;
        b->end = value;
        h->buffer->close(1, 1);
    } catch (...) {
    }
}
