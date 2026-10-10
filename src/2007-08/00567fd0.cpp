// from server: 43% by colin
struct ICameraOwner {
    char pad[0x2c0];
    void* field_0x27c;
    void* field_0x22c;
    void* field_0x230;
    void* field_0x234;
    void* field_0x238;
    void* field_0xec;
    void* field_0xe8;
    void* field_0x228;
    void* field_0x158;
    void* field_0x8c;
    void* field_0x74;
    void* field_0x5c;
    void* field_0x44;
    void* field_0x2c;
    void* field_0x14;
    void* field_0x10;
    void* field_0x4;
    void* field_0x0;
    void destroy();
};

extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __cdecl sub_567D60(void*, void*, void*, void*);
extern "C" void __cdecl sub_5308E0(void*);

void ICameraOwner::destroy()
{
    void* p;
    void* q;
    void* r;
    void* s;
    void* t;
    void* u;
    void* v;
    void* w;
    void* x;
    void* y;
    void* z;
    void* a;
    void* b;
    void* c;
    void* d;
    void* e;

    p = this->field_0xec;
    this->field_0x0 = (void*)0x7a98fc;
    this->field_0x4 = (void*)0x7a98f0;
    this->field_0x10 = (void*)0x7a98e8;
    this->field_0x14 = (void*)0x7a98d8;
    this->field_0x2c = (void*)0x7a98c8;
    this->field_0x44 = (void*)0x7a98b8;
    this->field_0x5c = (void*)0x7a98a8;
    this->field_0x74 = (void*)0x7a9898;
    this->field_0x8c = (void*)0x7a9888;
    this->field_0xe8 = (void*)0x7a987c;
    this->field_0x158 = (void*)0x7a9864;
    this->field_0x228 = (void*)0x7a984c;

    q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 0xec) = (void*)0x7a9840;

    r = this->field_0xec;
    s = *(void**)((char*)r + 8);
    *(void**)((char*)s + (int)this + 0xec) = (void*)0x7a9838;

    t = this->field_0xec;
    u = *(void**)((char*)t + 0xc);
    *(void**)((char*)u + (int)this + 0xec) = (void*)0x7a981c;

    v = this->field_0xec;
    w = *(void**)((char*)v + 4);
    *(void**)((char*)w + (int)this + 0xe8) = (void*)((char*)w - 0x198);

    x = this->field_0xec;
    y = *(void**)((char*)x + 8);
    *(void**)((char*)y + (int)this + 0xe8) = (void*)((char*)y - 0x1a0);

    z = this->field_0xec;
    a = *(void**)((char*)z + 0xc);
    *(void**)((char*)a + (int)this + 0xe8) = (void*)((char*)a - 0x1a8);

    b = this->field_0x27c;
    if (b != 0) {
        void** vtbl = *(void***)b;
        void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0];
        fn(b, 1);
    }

    this->field_0x228 = (void*)0x7a9804;

    c = this->field_0x230;
    if (c != 0) {
        d = this->field_0x234;
        e = this->field_0x238;
        sub_567D60(c, e, &this->field_0x22c, this);
        sub_62FC62(this->field_0x230);
    }

    this->field_0x230 = 0;
    this->field_0x234 = 0;
    this->field_0x238 = 0;

    sub_5308E0(this);
}
