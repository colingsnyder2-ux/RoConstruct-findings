// from server: 66% by colin
struct GetSetImpl {
    char pad0[8];
    int get;
    int set;
    void* construct(int* arg1, int* arg2);
};

extern "C" void* __stdcall string_ctor(void*, const void*);

void* GetSetImpl::construct(int* arg1, int* arg2) {
    int* p = arg1;
    int* q = arg2;
    int tmp = 0;
    if (q != 0) {
        tmp = (int)((char*)q - 4);
    }
    int (*fn)(int) = (int (*)(int))this->get;
    int ctx = this->set;
    int result = fn(ctx + tmp);
    void* dest = (void*)p;
    void* src = (void*)result;
    string_ctor(dest, src);
    *(int*)((char*)dest + 0x1c) = *(int*)((char*)src + 0x1c);
    return dest;
}
