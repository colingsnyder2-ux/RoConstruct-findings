// from server: 33% by atomic.potato
struct Inner {
    int a;
    int b;
    char pad[4];
};

struct Outer {
    Inner inner;
};

extern "C" void __stdcall sub_98DE94(void*);

void copy_range(Outer* dst, Outer* first, Outer* last, Outer* cur)
{
    while (first != last) {
        if (cur) {
            cur->inner.a = first->inner.a;
            cur->inner.b = first->inner.b;
            sub_98DE94(&cur->inner.pad[0]);
        }
        cur = (Outer*)((char*)cur + 12);
        first = (Outer*)((char*)first + 12);
    }
}
