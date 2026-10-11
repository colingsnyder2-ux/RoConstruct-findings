// from server: 44% by atomic.potato
extern "C" void* __cdecl sub_7F3860(unsigned int size);

struct VPlayerCamera {
    void* field0;
    void* Create(int a, int b);
};

void* VPlayerCamera::Create(int a, int b) {
    void* p = sub_7F3860(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x9aeb1c;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
