// from server: 82% by tester
struct FlagStandService {
    void* field0;
    void* field4;
    void* field8;
    void construct(int a, int b, int c, int d, int e, int f, int g);
};

extern "C" bool __stdcall func_004879d0(void*);
extern "C" void* __cdecl func_0062fef6(unsigned int);

void FlagStandService::construct(int a, int b, int c, int d, int e, int f, int g)
{
    if (!func_004879d0(&a))
    {
        field8 = (void*)0x5fa560;
        field0 = (void*)0x5ea0a0;
        void* p = func_0062fef6(0x18);
        if (p)
        {
            ((int*)p)[0] = a;
            ((int*)p)[1] = b;
            ((int*)p)[2] = c;
            ((int*)p)[3] = d;
            ((int*)p)[4] = e;
            ((int*)p)[5] = f;
        }
        field4 = p;
    }
}
