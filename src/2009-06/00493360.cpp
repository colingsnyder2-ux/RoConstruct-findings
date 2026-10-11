// from server: 54% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    char pad0[4];
    char pad4[8];
    int fieldC;
    int field10;
};

struct Outer {
    Inner* field0;
    char pad4[8];
    Inner* fieldC;
    Inner* field10;
    int method(int, int, int, int);
};

int Outer::method(int a1, int a2, int a3, int a4)
{
    Inner* begin = fieldC;
    Inner* end = field10;
    int count = (int)((char*)end - (char*)begin) / 80;
    int idx;
    if (count == 0) {
        idx = 0;
    } else {
        if ((unsigned int)begin > (unsigned int)end)
            _invalid_parameter_noinfo();
        if (a1 != 0 && a1 != (int)field0)
            _invalid_parameter_noinfo();
        idx = (a2 - (int)begin) / 80;
    }
    ((void (__thiscall*)(Outer*, int, int, int, int))0x492b80)(this, a1, a2, a3, a4);
    Inner* b2 = fieldC;
    if ((unsigned int)b2 > (unsigned int)field10)
        _invalid_parameter_noinfo();
    Inner* p = field0;
    Inner* result = p;
    int off = (int)b2;
    if (p == 0) {
        _invalid_parameter_noinfo();
        int tmp = idx * 80;
        int target = tmp + off;
        if ((unsigned int)target > *(unsigned int*)(0 + 0x10))
            _invalid_parameter_noinfo();
        result = 0;
        if ((unsigned int)target < *(unsigned int*)(0 + 0xc))
            _invalid_parameter_noinfo();
    } else {
        while (p != 0) {
            int tmp = idx * 80;
            int target = tmp + off;
            if ((unsigned int)target <= *(unsigned int*)((char*)p + 0x10)) {
                if ((unsigned int)target < *(unsigned int*)((char*)p + 0xc))
                    _invalid_parameter_noinfo();
                result = p;
                break;
            }
            p = *(Inner**)p;
        }
    }
    int* out = (int*)a4;
    out[1] = (int)result;
    out[0] = (int)result;
    return (int)out;
}
