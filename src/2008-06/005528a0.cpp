// from server: 25% by colin
struct S {
    int f(int);
};

extern "C" void __stdcall sub_552f10(int);

int S::f(int a) {
    *(int*)this = 0;
    *(int*)((char*)this + 4) = a;
    sub_552f10(a);
    return (int)this;
}
