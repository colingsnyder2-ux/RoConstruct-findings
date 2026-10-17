// from server: 21% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    char pad[0x198];
    void* obj;
    char pad2[0x1f0 - 0x19c];
    void** vtbl;
};

struct S {
    char pad[0x11c];
    void* b1;
    void* e1;
    void* c1;
    void* b2;
    void* e2;
    void* c2;
    Inner* inner;
    void* other;
    int __cdecl f(void** arg);
};

extern "C" void* __cdecl sub_6a0920(int);
extern "C" void sub_43a320(void*, void*);
extern "C" void sub_420110(void*, void*);
extern "C" void sub_43c940(void*, void*, void*, void*, void*, void*);
extern "C" void sub_576f00(void*, void*);
extern "C" void* __cdecl sub_58c5c0(void*, void*);
extern "C" void sub_5a2fe0(void*);
extern "C" void sub_5773c0(void*);

int S::f(void** arg)
{
    void* local60 = 0;
    void* local54 = 0;
    void* local50 = 0;
    void* local4c = 0;

    void* p = sub_6a0920(4);
    if (p) {
        *(void**)p = &local60;
    } else {
        p = 0;
    }
    local60 = p;

    Inner* inner = this->inner;
    void* v230 = *(void**)((char*)inner + 0x230);
    void* v218 = *(void**)((char*)inner + 0x218);

    void* e1 = this->e1;
    void* b1 = this->b1;
    void* e2 = this->e2;
    void* b2 = this->b2;

    void* cur = b2;
    void* endv = e2;
    void* cur1 = b1;
    void* end1 = e1;

    while (cur1 != end1) {
        void* key = *(void**)cur1;
        void* out;
        sub_43a320((char*)inner + 0x218, &out);
        void* it = cur;
        while (it != endv) {
            void* k = *(void**)it;
            if (k == key) break;
            it = (char*)it + 8;
        }
        if (it != endv) {
            sub_420110(&local60, it);
        }
        cur1 = (char*)cur1 + 4;
    }

    void* a = local54;
    void* b = local50;
    void* c = local60;
    void* d = local4c;

    void* op[6];
    op[0] = (void*)0x43a1d0;
    op[1] = 0;
    op[2] = this;
    op[3] = (void*)0x71f210;
    op[4] = b;
    op[5] = *arg;

    sub_43c940(&op, c, a, b, d, 0);

    Inner* in2 = this->inner;
    if (*(void**)((char*)in2 + 0x198)) {
        void* obj = *(void**)((char*)in2 + 0x198);
        void* tmp = 0;
        sub_576f00(&tmp, obj);
        void* o2 = *(void**)((char*)this->other + 4);
        void* r = sub_58c5c0((char*)o2 + 4, 0);
        void* obj2 = *(void**)((char*)this->inner + 0x198);
        sub_58c5c0(r, obj2);
        void* obj3 = *(void**)((char*)this->inner + 0x198);
        void** vt = *(void***)((char*)obj3 + 0x1f0);
        ((void(__thiscall*)(void*, int))vt[0])((char*)obj3 + 0x1f0, 1);
        sub_5773c0(&tmp);
    }

    sub_5a2fe0(&local60);
    return 0;
}
