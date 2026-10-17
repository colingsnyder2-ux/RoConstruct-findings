// from server: 47% by colin
struct Container {
    int* begin;
    int* end;
};

struct Inner {
    char pad0[4];
    Container c;
};

struct S {
    char pad0[4];
    Inner* inner;
    void method(int* arg);
};

extern "C" void __stdcall sub_598fa0(int* dst, int* src);
extern "C" void __stdcall sub_4d7890(Container* c, int index, int count);

void S::method(int* arg)
{
    Inner* in = this->inner;
    Container* c = &in->c;
    int count = c->end - c->begin;
    int idx = -1;
    int target = *arg;
    for (int i = 0; i < count; ++i) {
        if (c->begin[i] == target) {
            idx = i;
            break;
        }
    }
    int* last = c->begin + count - 1;
    sub_598fa0(c->begin + idx, last);
    sub_4d7890(c, count - 1, 1);
}
