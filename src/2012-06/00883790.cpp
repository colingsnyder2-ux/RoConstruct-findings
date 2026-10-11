// from server: 74% by atomic.potato
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl free_fn(void*);
extern "C" int __cdecl type_info_equal(void*, void*);

struct VFunctionalTest_Product {
    void* m_p;
};

struct FactoryProduct {
    void* m_p;
};

extern void* g_type_00de83d8;

void* __fastcall sub_00883180(void* self, void* arg);

void __fastcall sub_0043cad0(void* self, int arg);

void* __cdecl sub_0098211a(unsigned int size);

void __cdecl func_00883790(int op, void** out, void** in)
{
    if (op == 0) {
        void* src = *out;
        void* mem = sub_0098211a(0x20);
        if (mem) {
            void* r = sub_00883180(mem, src);
            *out = r;
        } else {
            *out = 0;
        }
    } else if (op == 1) {
        *out = *in;
        *in = 0;
    } else if (op == 2) {
        void* p = *out;
        if (p) {
            sub_0043cad0(p, 1);
        }
        *out = 0;
    } else if (op == 3) {
        void* p = *out;
        if (type_info_equal(p, &g_type_00de83d8)) {
            *out = *in;
        }
    } else {
        *out = &g_type_00de83d8;
        ((char*)out)[4] = 0;
        ((char*)out)[5] = 0;
    }
}
