// from server: 70% by colin
struct EventHandler {
    int func_0042a970(int, int, int);
};

extern "C" int __cdecl func_0042a8d0(int, const char*);

int EventHandler::func_0042a970(int a, int b, int c)
{
    int* out = (int*)a;
    int* in = (int*)b;
    *out = 0;
    if (func_0042a8d0(b, (const char*)0x7c4e3c)) {
        *out = c;
        int* obj = (int*)c;
        int* vtbl = (int*)*obj;
        int (*fn)(int) = (int (*)(int))vtbl[1];
        fn(c);
        return 0;
    }
    if (func_0042a8d0(b, (const char*)0x7c4e7c)) {
        *out = c;
        int* obj = (int*)c;
        int* vtbl = (int*)*obj;
        int (*fn)(int) = (int (*)(int))vtbl[1];
        fn(c);
        return 0;
    }
    return (int)0x80004002;
}
