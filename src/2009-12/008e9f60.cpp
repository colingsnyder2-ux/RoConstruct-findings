// from server: 35% by atomic.potato
extern "C" {
    int __stdcall SetRectEmpty(void*);
}

struct Inner1 {
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    Inner1();
};

struct Inner2 {
    char pad[0x158];
    void* p158;
};

struct Inner3 {
    char pad[0x150];
    int v150;
};

struct CXTPRibbonGroup {
    void* vtable;
    char pad1[0x1c];
    int f20;
    int f24;
    char pad2[0x4];
    int f2c;
    int f30;
    int f34;
    char pad3[0xc];
    Inner1 f44;
    char pad4[0x10];
    int f58;
    int f5c;
    int f60;
    int f64;
    Inner2* f68;
    Inner3* f6c;
    int f70;
    int f74;
    int f78;
    int f7c;
    int f80;
    CXTPRibbonGroup();
};

extern void* g_98de74;
extern void* g_98ca9c;
extern void* g_b65200;

void* __cdecl func_7f3860(int);
void __cdecl func_890160(void*);
void __cdecl func_8e9280(void*, void*);
void __cdecl func_926442(void*);
void __cdecl func_7f7880(void*);

CXTPRibbonGroup::CXTPRibbonGroup()
{
    func_926442(this);
    this->vtable = (void*)0xa0cfdc;
    this->f20 = 0;
    ((void (__stdcall*)(void*))g_98de74)(&this->f34);
    func_7f7880(&this->f44);
    this->f2c = -1;
    this->f30 = 0;
    this->f58 = 0;
    this->f5c = 0;
    ((void (__stdcall*)(void*))g_98ca9c)(&this->f34);
    this->f60 = -1;
    this->f64 = -1;
    this->f70 = 0;
    this->f78 = 1;
    this->f20 = 0;
    Inner2* p2 = (Inner2*)func_7f3860(0x174);
    if (p2 != 0) {
        func_890160(p2);
        *(void**)p2 = (void*)0xa0ce8c;
        *(void**)((char*)p2 + 0x20) = (void*)0xa0ce2c;
    } else {
        p2 = 0;
    }
    this->f68 = p2;
    p2->p158 = this;
    Inner3* p3 = (Inner3*)func_7f3860(0x188);
    if (p3 != 0) {
        func_8e9280(p3, this);
    } else {
        p3 = 0;
    }
    this->f6c = p3;
    p3->v150 = 4;
    this->f74 = 0;
    this->f80 = 0;
    this->f7c = 2;
    this->f24 = 0;
}
