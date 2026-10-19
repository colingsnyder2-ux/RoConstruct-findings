// from server: 77% by TrollStein
struct BoundFuncDesc {
    void __cdecl invoke(void* arg);
};

extern "C" void __cdecl sub_49F9A0(void*, int, int);

void BoundFuncDesc::invoke(void* arg) {
    int* p = (int*)arg;
    int* obj = (int*)p[0];
    int local = 0;
    int* vtable = (int*)obj[6];
    int count = *(int*)((char*)vtable + 0x24) + 1;
    sub_49F9A0(&local, count, 1);
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))((int*)*(int*)obj)[10];
    fn(obj, p[1], local);
}
