// from server: 92% by tester
struct type_info
{
    bool operator==(const type_info&) const;
};

extern "C" void __cdecl sub_571AA0(void*, int, int);

struct S
{
};

void* __cdecl f(void* a, int b)
{
    if (b == 2)
    {
        type_info* t = (type_info*)0x89fb58;
        void* p = a;
        bool r = (*t == *(type_info*)p);
        return r ? p : 0;
    }
    char local = 0;
    sub_571AA0(a, b, *(int*)&local);
    return 0;
}
