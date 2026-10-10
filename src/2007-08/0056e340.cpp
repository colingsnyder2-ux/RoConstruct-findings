// from server: 41% by colin
struct ContentId {
    void* id;
    void reconstructUrl();
};

extern "C" int __stdcall sub_77e708(void*, void*);
extern "C" void* __stdcall sub_411770(void*);
extern "C" int __stdcall sub_58d190(void*, void*);
extern "C" void __stdcall sub_537600(void*, void*);
extern "C" void* __stdcall sub_56da70();
extern "C" void __stdcall sub_56d530(void*);
extern "C" void __stdcall sub_5017c0(void*, void*, void*, void*);
extern "C" void __stdcall sub_412dc0(void*, void*);
extern "C" void __stdcall sub_630b9e(void*, void*);

void ContentId::reconstructUrl()
{
    void* p = (char*)this + 4;
    void* q;
    if (p != 0) {
        void* r = *(void**)p;
        if (r != 0) {
            q = (*(void*(**)(void*))r)(r);
        } else {
            q = (void*)0x8827c8;
        }
        if (sub_77e708(q, (void*)0x8999b4)) {
            q = (char*)*(void**)p + 4;
            if (q != 0) {
                return;
            }
        }
    }
    void* s = *(void**)this;
    s = *(void**)((char*)s + 8);
    if (sub_77e708(s, (void*)0x8827f8)) {
        float f = 0.0f;
        void* t = sub_411770(&f);
        if (sub_58d190(t, p)) {
            sub_537600(p, &f);
            *(void**)this = sub_56da70();
            sub_56d530(p);
            return;
        }
    }
    void* u = sub_56da70();
    u = *(void**)((char*)u + 0xc);
    void* v;
    if (*(unsigned int*)((char*)u + 0x1c) < 0x10) {
        v = (char*)u + 8;
    } else {
        v = *(void**)((char*)u + 8);
    }
    void* w = *(void**)this;
    w = *(void**)((char*)w + 0xc);
    w = (char*)w + 4;
    void* x;
    if (*(unsigned int*)((char*)w + 0x18) < 0x10) {
        x = (char*)w + 4;
    } else {
        x = *(void**)((char*)w + 4);
    }
    void* y;
    sub_5017c0(&y, (void*)0x7aa03c, x, v);
    void* z;
    sub_412dc0(&z, y);
    sub_630b9e(&z, (void*)0x8410c0);
}
