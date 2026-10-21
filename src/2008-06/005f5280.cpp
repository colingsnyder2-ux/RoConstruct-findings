// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Buffer {
    char padding[0x14];
    int begin;
    int unused;
    int current;
    int end;
    int state;
    void close(int, int);
    void reset() { current = begin; end = begin; }
};

struct Holder {
    Buffer* buffer;
    Buffer* operator->() const { return buffer; }
};

struct S {
    Holder* holder;
    void f();
};

void S::f()
{
    Holder& h = *holder;
    h->state = 0;
    try {
        h->current = h->end = h->begin;
        h->close(1, 1);
    } catch (...) {
    }
}
