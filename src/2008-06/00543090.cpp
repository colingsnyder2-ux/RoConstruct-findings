// from server: 40% by tester
struct Chunk {
    char pad[0x18];
    int field18;
    int field1c;
    void init();
};

struct Helper {
    int __thiscall call545260();
    int* __thiscall call5423f0();
    int* __thiscall call5508e0();
    int* __thiscall call54cec0();
};

extern "C" char* __cdecl sub_542e00(int);

void Chunk::init() {
    Helper* h = (Helper*)this;
    field18 = h->call545260();
    *sub_542e00(field18) = 1;
    *h->call5423f0() = field18;
    *h->call5508e0() = field18;
    *h->call54cec0() = field18;
    field1c = 0;
}
