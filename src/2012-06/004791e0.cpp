// from server: 91% by atomic.potato
extern "C" void __stdcall call_004b247d0(void*);

struct CRobloxControlMaterialSelector
{
    void f(void* first, void* last);
};

void CRobloxControlMaterialSelector::f(void* first, void* last)
{
    char* p = (char*)first;
    char* end = (char*)last;
    while (p != end)
    {
        call_004b247d0(p + 8);
        p += 12;
    }
}
