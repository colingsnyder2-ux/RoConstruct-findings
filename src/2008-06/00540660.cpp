// from server: 38% by colin
struct Bucket {
    int f(int);
    char pad[0x10];
    int field10;
};

extern "C" int __stdcall sub_5426f0(int, int, Bucket*);

int Bucket::f(int a) {
    sub_5426f0(this->field10, a, this);
    return a;
}
