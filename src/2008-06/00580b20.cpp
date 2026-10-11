// from server: 55% by atomic.potato
extern "C" void __cdecl sub_57d250(void *);
extern "C" void *__cdecl sub_490d70();
extern "C" void __cdecl sub_55afd0(void *);

struct ClearStarterpack
{
    char padding[12];
    void *field_0c;
    void f();
};

void ClearStarterpack::f()
{
    void *value = field_0c;
    sub_57d250(this);
    value = field_0c;
    if (value)
    {
        void *result = sub_490d70();
        if (result)
            sub_55afd0(result);
    }
}
