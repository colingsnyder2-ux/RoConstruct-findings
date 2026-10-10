// from server: 19% by colin
extern "C" {
    int __cdecl _errno();
    int __cdecl fprintf(void*, const char*, ...);
    unsigned int __cdecl fwrite(const void*, unsigned int, unsigned int, void*);
    char* __cdecl strerror(int);
}

extern "C" {
    int __stdcall GetLastError();
    void* __stdcall GetStdHandle(unsigned long);
    int __stdcall WriteFile(void*, const void*, unsigned long, unsigned long*, void*);
    int __stdcall FormatMessageA(unsigned long, const void*, unsigned long, unsigned long, char*, unsigned long, void*);
}

struct lua_exception {
    int f(int, int);
};

int lua_exception::f(int a, int b) {
    int i;
    int j;
    int k;
    int result;
    int err;
    int written;
    char buf[4];
    int count;
    int flag;
    int handle;
    int lastError;
    int fmtResult;
    char* msg;

    result = 0;
    flag = 1;
    i = 0;
    j = 0;
    k = 0;

    count = 0;
    while (count != 0) {
        count--;
        if (flag) {
            double d = 0.0;
            if (fprintf((void*)a, "%.14g", d) > 0) {
                flag = 1;
            } else {
                flag = 0;
            }
        }
        i++;
        if (count == 0) break;
    }

    handle = (int)GetStdHandle(0xFFFFFFF4);
    lastError = *(int*)handle;

    if (flag) {
        fwrite("HD;H@Wr", 1, 8, (void*)b);
        return 1;
    }

    fwrite("HD;H@r", 1, 8, (void*)b);
    err = _errno();
    msg = strerror(err);
    fprintf((void*)b, "HRESULT = %d: %s", err, msg);
    fwrite("L$8QSW", 1, 6, (void*)b);
    return 3;
}
