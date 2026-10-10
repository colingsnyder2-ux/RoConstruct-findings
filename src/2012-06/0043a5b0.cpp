// from server: 92% by atomic.potato
extern "C" void __cdecl func_00A951CE(int);
extern "C" void __cdecl func_00982114(void*);

struct CSelectionPropGrid
{
    void __cdecl f(void*);
};

void __cdecl CSelectionPropGrid::f(void* p)
{
    if (p)
    {
        func_00A951CE(*(int*)p);
        func_00982114(p);
    }
}
