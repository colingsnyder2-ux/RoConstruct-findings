// from server: 67% by tester
struct TypedPropertyDescriptor {
    char pad[0x130];
    void* field130;
    int method(void* arg);
};

extern "C" void* __stdcall sub_557950(void*);
extern "C" void* __fastcall sub_443820(void*);

int TypedPropertyDescriptor::method(void* arg) {
    void* p = field130;
    void* result = 0;
    if (p) {
        int* a = *(int**)((char*)arg + 0xc);
        int* b = (int*)(a[1]);
        result = sub_557950((char*)b + 4);
    }
    if (result) {
        void* r2 = sub_443820(result);
        if (r2) {
            void* edx = (char*)(*(void**)((char*)arg + 4)) + 4;
            return (int)sub_557950(edx);
        }
    }
    return 0;
}
