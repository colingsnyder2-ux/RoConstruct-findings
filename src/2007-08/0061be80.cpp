// from server: 49% by colin
struct Base {
    void construct();
};

struct VWidget {
    char pad[0x100];
    void initWidget(int a, int b);
};

struct NonFactoryProduct : Base {
    char pad0[0x100 - sizeof(Base)];
    VWidget widget;
    void ctor(int a, int b);
};

void NonFactoryProduct::ctor(int a, int b) {
    Base::construct();
    *(void**)this = (void*)0x7c3fec;
    *(void**)((char*)this + 4) = (void*)0x7c3fe0;
    *(void**)((char*)this + 0x10) = (void*)0x7c3fd8;
    *(void**)((char*)this + 0x14) = (void*)0x7c3fc8;
    *(void**)((char*)this + 0x2c) = (void*)0x7c3fb8;
    *(void**)((char*)this + 0x44) = (void*)0x7c3fa8;
    *(void**)((char*)this + 0x5c) = (void*)0x7c3f98;
    *(void**)((char*)this + 0x74) = (void*)0x7c3f88;
    *(void**)((char*)this + 0x8c) = (void*)0x7c3f78;
    *(void**)((char*)this + 0xe8) = (void*)0x7c3f70;
    widget.initWidget(a, b);
}
