// from server: 52% by colin
typedef long HRESULT;
__declspec(noreturn) void __stdcall AtlThrowImpl(HRESULT hr);

extern "C" int __stdcall _mbslwr_s(char* str, unsigned int size);

struct StdString {
    char* data;
    unsigned int size;
    unsigned int capacity;
};

struct StandardOut {
    StdString* str;
    void reserve(unsigned int n);
    void __cdecl print(int type, const char* message);
};

void StandardOut::reserve(unsigned int n)
{
    char* p = str->data;
    unsigned int cap = *(unsigned int*)(p - 4);
    unsigned int sz = *(unsigned int*)(p - 8);
    unsigned int old = *(unsigned int*)(p - 12);
    if ((int)((1 - old) | (sz - cap)) < 0)
        reserve(n);
}

void StandardOut::print(int type, const char* message)
{
    char* p = str->data;
    unsigned int sz = *(unsigned int*)(p - 8);
    unsigned int old = *(unsigned int*)(p - 12);
    if ((int)((1 - old) | (sz - (unsigned int)(p - 8))) < 0)
        reserve(sz);
    char* q = str->data;
    _mbslwr_s(q + sz + 1, 0);
    print(type, q + sz + 1);
    if ((int)sz >= 0 && (int)sz <= *(int*)(str->data - 8)) {
        *(unsigned int*)(str->data - 12) = sz;
        str->data[sz] = 0;
        return;
    }
    AtlThrowImpl(0x80070057);
}
