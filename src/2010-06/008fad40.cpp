// from server: 57% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    char pad[0x0c];
    int* begin;
    int* end;
};

struct Outer {
    int* field0;
    char pad[4];
    Inner inner;
    int f(int a, int b, int c, int d);
};

int Outer::f(int a, int b, int c, int d)
{
    int* ebx = inner.end;
    int* edi = inner.begin;
    int count = (int)(((char*)ebx - (char*)edi) / 0x120);
    if (count == 0) {
        edi = 0;
    } else {
        if (edi > ebx)
            _invalid_parameter_noinfo();
        if (a != 0 && (int*)a != field0)
            _invalid_parameter_noinfo();
        edi = (int*)((int)(((char*)c - (char*)edi) / 0x120));
    }
    int r = ((int (__thiscall*)(Outer*, int, int, int, int))0x8f7fd0)(this, a, b, c, d);
    int* ebx2 = inner.end;
    if (ebx2 > inner.end)
        _invalid_parameter_noinfo();
    int* esi2 = field0;
    int tmp[2];
    tmp[0] = (int)esi2;
    tmp[1] = (int)ebx2;
    ((void (__thiscall*)(void*, int))0x8f3ef0)(tmp, (int)edi);
    int* out = (int*)d;
    out[0] = tmp[0];
    out[1] = tmp[1];
    return r;
}
