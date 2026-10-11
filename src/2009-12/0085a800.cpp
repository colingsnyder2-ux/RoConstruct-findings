// from server: 72% by atomic.potato
extern "C" int func_0083d970();

struct S {
    void f();
    int pad[34];
};

void S::f()
{
    if (func_0083d970()) {
        int value = this->pad[33];
        if ((value & 0xff00) == 0x8200)
            this->pad[33] = value & 0xfffff07f;
    }
}
