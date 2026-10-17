// from server: 56% by colin
struct Inner {
    int* begin;
    int count;
};

struct Outer {
    char pad[8];
    Inner inner;
};

struct S {
    char pad[4];
    Outer* outer;
    void f(int* value);
};

void __stdcall erase_helper(int* pos, int* last);

void __stdcall remove_at(Inner* self, int index);

void S::f(int* value)
{
    Outer* o = outer;
    Inner* in = &o->inner;
    int count = in->count;
    int idx = -1;
    if (count > 0) {
        int target = *value;
        int* p = in->begin;
        int i = 0;
        do {
            if (*p == target) {
                idx = i;
                break;
            }
            ++i;
            ++p;
        } while (i < count);
    }
    int* begin = in->begin;
    int n = in->count;
    int* last = begin + n - 1;
    erase_helper(begin + idx, last);
    remove_at(in, in->count - 1);
}
