// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Ref {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Obj {
    char pad[0x198];
    Ref* ref;
};

struct Stream {
    char pad[0x84];
};

struct String {
    char pad[0x1c];
};

struct Other {
    char pad[0x128];
    Obj* obj;
};

extern "C" void __stdcall sub_803f04(void*);
extern "C" void __stdcall sub_8032c0(void*, int);
extern "C" void* __stdcall sub_803ee0(int, int, int);
extern "C" void __stdcall sub_802404(void*, void*);
extern "C" void __stdcall sub_803f14(void*);
extern "C" void __stdcall sub_80245c(void*, void*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void __stdcall sub_802408(void*);

void __cdecl sub_6a0e72(void*, int, int, int, int, int);
int __cdecl sub_6a0e6c(void*);
void __cdecl sub_6a0e66(void*, void*);
void __cdecl sub_6a0e5a(void*);
void* __cdecl sub_437d60(void*);
void* __cdecl sub_55fbc0(void*, void*, void*, void*);
void __cdecl sub_43e4c0(void*, void*);

struct TextureItem {
    void update();
};

void TextureItem::update()
{
    char buf[0x2b8];
    Stream s;
    sub_803f04(&s);
    sub_8032c0(&s, 0x84);
    void* p = sub_803ee0(0, 0, 1);
    sub_6a0e72(buf + 0xf8, 1, 0, 0, 0, (int)p);
    if (sub_6a0e6c(buf + 0xd8) == 1) {
        sub_6a0e66(buf + 0xdc, &s);
        void* q = sub_803ee0(0x21, 0x40, 1);
        sub_802404(buf + 0x5c, q);
        sub_803f14(&s);
        Other* o = (Other*)((char*)this);
        Obj* obj = o->obj;
        if (obj->ref)
            _InterlockedExchangeAdd(&obj->ref->strong, 0);
        sub_6a0e66(buf + 0xe0, &s);
        void* r = sub_803ee0(0, 0, 1);
        void* t = sub_437d60(r);
        void* u = sub_55fbc0(buf + 0x3c, buf + 0x58, t, 0);
        sub_80245c(buf + 0x14, u);
        sub_802468(buf + 0x34);
        sub_803f14(&s);
        sub_43e4c0(this, buf + 0x14);
        sub_802468(buf + 0x14);
        sub_802408(buf + 0x54);
    }
    sub_6a0e5a(buf + 0xd8);
    sub_803f14(&s);
}
