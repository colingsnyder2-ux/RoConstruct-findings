// from server: 40% by colin
struct type_info;

extern "C" {
    int __cdecl __CxxThrowException(void*, void*);
}

namespace std {
    class bad_cast {
    public:
        bad_cast(const char*);
    };
}

struct S {
    void* vfptr;
};

extern void* G_8827c8;
extern void* G_8827f8;
extern void* G_786e04;
extern void* G_786dfc;

extern "C" int __stdcall sub_77e708(void*, void*);
extern "C" int __stdcall sub_77e710(void*, void*);
extern "C" void __cdecl sub_411850(void*);

void func_004355c0(S* p)
{
    if (p != 0) {
        void* q = p->vfptr;
        if (q != 0) {
            void** vt = *(void***)q;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(q);
        } else {
            void* r = &G_8827c8;
            if (sub_77e708(&G_8827f8, r)) {
                void* s = (char*)p->vfptr + 4;
                if (s != 0) {
                    return;
                }
            }
        }
    }
    sub_77e710(&G_786e04, 0);
    G_786dfc = 0;
    sub_411850(&G_786dfc);
}
