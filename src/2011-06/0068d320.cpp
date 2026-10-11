// from server: 44% by atomic.potato
extern "C" void* __cdecl sub_80a05e(unsigned int size);

struct S {
    void* field0;
    void* method(int, int);
};

void* S::method(int a, int b) {
    void* p = sub_80a05e(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0xa9f860;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
