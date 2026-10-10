// from server: 89% by colin
struct RBXName;

struct FactoryProduct {
    static void* findCreator(RBXName* name);
    void* create();
};

extern "C" void* __cdecl sub_630D36(void* a, void* b, void* c, void* d, void* e);
extern "C" void* __cdecl sub_42E410();

void* FactoryProduct::create() {
    FactoryProduct* p = this;
    while (p) {
        void* result = sub_630D36(p, 0, (void*)0x881f4c, (void*)0x884e04, 0);
        if (result) {
            return sub_42E410();
        }
        p = *(FactoryProduct**)((char*)p + 0xbc);
    }
    return 0;
}
