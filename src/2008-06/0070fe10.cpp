// from server: 43% by atomic.potato
extern "C" int __stdcall func_0070ebd0(void*, int);

struct CStatusCmdUI
{
    int value8;
    int valueC;
    int value10;
    void* value14;
    int value18;
    int f();
};

int CStatusCmdUI::f()
{
    value18 = 1;
    if (value14 != 0)
    {
        int result = func_0070ebd0(value14, value8);
        if (result != 0)
            return result;
    }
    return 0;
}
