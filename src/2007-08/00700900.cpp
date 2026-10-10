// from server: 38% by colin
struct Sub {
    void* vtbl;
    void destroy(int);
};

struct Inner {
    void* vtbl;
    void dtor();
};

struct Outer {
    void* vtbl;
    char pad[0xdc];
    Sub* pE0;
    Sub* pE4;
    char pad2[0x20];
    Inner i0;
    Inner i1;
    Inner i2;
    Inner i3;
    char pad3[0x1c];
    void dtor();
};

void Inner::dtor() {
    this->vtbl = (void*)0x794a08;
    extern void __stdcall sub_41f680(void*);
    sub_41f680(this);
}

void Outer::dtor() {
    this->vtbl = (void*)0x7dd264;
    if (this->pE4) {
        this->pE4->destroy(1);
    }
    if (this->pE0) {
        this->pE0->destroy(1);
    }
    this->i3.vtbl = (void*)0x794a08;
    this->i3.dtor();
    this->i2.vtbl = (void*)0x794a08;
    this->i2.dtor();
    this->i1.vtbl = (void*)0x794a08;
    this->i1.dtor();
    this->i0.vtbl = (void*)0x794a08;
    this->i0.dtor();
    extern void __stdcall sub_7008c0(void*);
    sub_7008c0(&this->pad3[0x1c]);
    extern void __stdcall sub_63069a(void*);
    sub_63069a(this);
}
