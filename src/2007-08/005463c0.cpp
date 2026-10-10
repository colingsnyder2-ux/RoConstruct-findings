// from server: 95% by atomic.potato
struct type_info
{
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl sub_0062fef6(unsigned int);
extern "C" void __cdecl sub_0062fc62(void*);

extern type_info* type_info_89bd48;

void* func_005463c0(void* self, int mode, void* arg)
{
    if (mode == 2)
    {
        if (*type_info_89bd48 == *(type_info*)arg)
            return arg;
        return 0;
    }
    if (mode == 0)
    {
        void* p = sub_0062fef6(8);
        if (p)
        {
            *(int*)p = *(int*)self;
            *(int*)((char*)p + 4) = *(int*)((char*)self + 4);
        }
        return p;
    }
    sub_0062fc62(self);
    return 0;
}
