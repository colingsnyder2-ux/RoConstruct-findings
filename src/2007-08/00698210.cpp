// from server: 73% by colin
extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void* __stdcall sub_77DCB8(void*);

struct CXTPPropertyGridItemConstraint
{
    void* field0;
};

void func_00698210(void* arg1, void* arg2)
{
    void* p1 = sub_77DD98((char*)*(void**)arg2 + 0x20);
    void* p2 = sub_77DCB8((char*)*(void**)arg1 + 0x20);
    (void)p1;
    (void)p2;
}
