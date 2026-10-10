// from server: 90% by colin
struct VCApp_CProxy_IAppEvents
{
    void Invoke(void* p, int n);
};

void VCApp_CProxy_IAppEvents::Invoke(void* p, int n)
{
    if (p != 0)
    {
        int* base = (int*)((char*)p - 8);
        int* vtbl = (int*)*base;
        ((void (__stdcall*)(int*, void*, int))vtbl[0])(base, (void*)0x784be4, n);
    }
    else
    {
        int* vtbl = (int*)0;
        ((void (__stdcall*)(int*, void*, int))vtbl[0])(0, (void*)0x784be4, n);
    }
}
