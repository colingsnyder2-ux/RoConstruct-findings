// from server: 72% by atomic.potato
struct CXTColorPageCustom
{
    int f(void*, void*, void*, int*);
};

int CXTColorPageCustom::f(void* a, void* b, void* c, int* result)
{
    int value = ((int (__thiscall *)(CXTColorPageCustom*, void*))(*(int**)this)[15])(this, b);
    *result = value;
    return 0;
}
