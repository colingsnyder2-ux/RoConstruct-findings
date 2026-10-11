// from server: 55% by atomic.potato
struct EnumDesc
{
    void* GetValue(void*);
    int f(void*);
};

extern "C" void* __fastcall Call467120(void*, void*);
extern "C" void __fastcall Call76a190(void*, void*);

int EnumDesc::f(void* value)
{
    void* p = Call467120(value, (char*)value + 4);
    void* local = *(void**)p;
    Call76a190(this, &local);
    return 0;
}
