// from server: 80% by colin
extern "C" int __stdcall func_77dd98(const char*);
extern "C" int __stdcall func_77dcb8(const char*);

int func_00412e60(const char* a, const char* b)
{
    int r = func_77dd98(b);
    int s = func_77dcb8(a);
    return s != 0;
}
