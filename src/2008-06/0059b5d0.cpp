// from server: 68% by atomic.potato
struct VColor3 {
    char pad0[0x18];
    void* field18;
    int method(int, int);
};

extern "C" void* __cdecl sub_56cf40();
extern "C" void __cdecl sub_56d260(void*, void*);

int VColor3::method(int a, int b)
{
    void* p = field18;
    void* vt = *(void**)p;
    int (*fn)(void*, int*, int) = *(int (**)(void*, int*, int))((char*)vt + 8);
    int tmp;
    int r = fn(p, &tmp, a);
    void* obj = sub_56cf40();
    *(void**)b = obj;
    sub_56d260((char*)b + 4, &tmp);
    return r;
}
