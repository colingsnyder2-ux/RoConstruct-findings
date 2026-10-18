// from server: 58% by colin
// roc 2008-06 00556b00  unit: RBX::VRunService::?$BoundFuncDesc  size: 531 bytes

extern "C" {
    int __stdcall sub_6A0920(int);
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
}

struct String {
    char buf[16];
    String(const char*);
    ~String();
};

struct Sub_5E9EC0 {
    void ctor();
};

struct Sub_594C90 {
    void ctor();
};

struct Sub_5F1BD0 {
    void ctor();
};

struct Sub_446110 {
    void ctor(void*, void*);
};

struct Sub_512060 {
    void ctor();
};

struct Sub_511CF0 {
    void ctor();
};

struct Sub_556720 {
    void ctor();
};

struct Sub_55AF90 {
    void method(void*);
};

struct VRunService {
    void ctor_556720();
    void method_55af90(void*);
    void init();
};

void VRunService::init()
{
    this->ctor_556720();

    Sub_5E9EC0* p130 = (Sub_5E9EC0*)((char*)this + 0x130);
    p130->ctor();
    Sub_5E9EC0* p150 = (Sub_5E9EC0*)((char*)this + 0x150);
    p150->ctor();
    Sub_5E9EC0* p170 = (Sub_5E9EC0*)((char*)this + 0x170);
    p170->ctor();
    Sub_5E9EC0* p190 = (Sub_5E9EC0*)((char*)this + 0x190);
    p190->ctor();

    *(double*)((char*)this + 0x1b8) = 0.0;
    *(void**)((char*)this + 0x150) = (void*)0x82d424;
    *(float*)((char*)this + 0x1c0) = *(float*)0x82d634;
    *(void**)this = (void*)0x82d4c4;
    *(double*)((char*)this + 0x1c8) = 0.0;
    *(void**)((char*)this + 0x10) = (void*)0x82d4b4;
    *(double*)((char*)this + 0x1d0) = 0.0;
    *(void**)((char*)this + 0x14) = (void*)0x82d4ac;
    *(double*)((char*)this + 0x1d8) = 0.0;
    *(void**)((char*)this + 0x20) = (void*)0x82d4a4;
    *(double*)((char*)this + 0x1e0) = 0.0;
    *(void**)((char*)this + 0x24) = (void*)0x82d494;
    *(void**)((char*)this + 0x44) = (void*)0x82d484;
    *(void**)((char*)this + 0x64) = (void*)0x82d474;
    *(void**)((char*)this + 0x84) = (void*)0x82d464;
    *(void**)((char*)this + 0xa4) = (void*)0x82d454;
    *(void**)((char*)this + 0xc4) = (void*)0x82d444;
    *(void**)((char*)this + 0x130) = (void*)0x82d434;
    *(void**)((char*)this + 0x170) = (void*)0x82d414;
    *(void**)((char*)this + 0x190) = (void*)0x82d404;
    *(int*)((char*)this + 0x1b4) = 0;

    Sub_512060* p1e8 = (Sub_512060*)((char*)this + 0x1e8);
    p1e8->ctor();

    Sub_594C90* p240 = (Sub_594C90*)((char*)this + 0x240);
    p240->ctor();

    *(char*)((char*)this + 0x248) = 0;
    Sub_5F1BD0* p24c = (Sub_5F1BD0*)((char*)this + 0x24c);
    p24c->ctor();

    Sub_5F1BD0* p264 = (Sub_5F1BD0*)((char*)this + 0x264);
    p264->ctor();

    *(int*)((char*)this + 0x27c) = 0;

    Sub_594C90* p280 = (Sub_594C90*)((char*)this + 0x280);
    p280->ctor();

    char a, b;
    Sub_446110* p288 = (Sub_446110*)((char*)this + 0x288);
    p288->ctor(&a, &b);

    *(int*)((char*)this + 0x2a8) = 0;
    Sub_594C90* p2ac = (Sub_594C90*)((char*)this + 0x2ac);
    p2ac->ctor();

    void** p2b4 = (void**)((char*)this + 0x2b4);
    void* r = (void*)sub_6A0920(4);
    if (r != 0) {
        *(void**)r = p2b4;
    } else {
        r = 0;
    }
    *p2b4 = r;
    *(int*)((char*)this + 0x2b4 + 0x10) = 0;
    *(int*)((char*)this + 0x2b4 + 0x14) = 0;
    *(int*)((char*)this + 0x2b4 + 0x18) = 0;
    *(int*)((char*)this + 0x2b4 + 0x1c) = 0;

    String s((const char*)0x82d628);
    this->method_55af90(&s);
    s.~String();

    p1e8->ctor();
}
