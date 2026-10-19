// from server: 33% by TrollStein
struct Color3 {
    float r;
    float g;
    float b;
};

struct Holder {
    void construct(Color3* color);
};

struct Func {
    char pad[4];
    Holder* holder;
    void __cdecl assign(Color3* color);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void Func::assign(Color3* color) {
    Holder* h = (Holder*)operator_new(0x10);
    if (h != 0) {
        h->construct(color);
    }
    holder = h;
}
