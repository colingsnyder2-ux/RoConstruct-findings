// from server: 42% by colin
struct MD5HasherImpl {
    void addData(const char* data);
};

extern "C" int __stdcall PathAppendA(char* pszPath, const char* pszMore);
extern "C" void __stdcall ThrowLastError(unsigned int code);

void MD5HasherImpl::addData(const char* data)
{
    char* dest = *(char**)this;
    int len = *(int*)(dest - 0xc);
    int cap = *(int*)(dest - 8);
    int used = *(int*)(dest - 4);
    int n;
    if (data == 0) {
        n = 0;
    } else {
        const char* p = data;
        do {
            char c = *p;
            p++;
            if (c == 0) break;
        } while (1);
        n = (int)(p - (data + 1));
    }
    int need = n + len + 1;
    if ((1 - used) < 0 || (cap - need) < 0) {
        ((void (__thiscall*)(MD5HasherImpl*, int))0x413140)(this, need);
    }
    char* dst = *(char**)this;
    PathAppendA(dst, data);
    char* s = *(char**)this;
    int slen;
    if (s == 0) {
        slen = 0;
    } else {
        char* q = s;
        do {
            char c = *q;
            q++;
            if (c == 0) break;
        } while (1);
        slen = (int)(q - (s + 1));
    }
    if (slen < 0 || slen > *(int*)(s - 8)) {
        ThrowLastError(0x80070057);
    }
    *(int*)(s - 0xc) = slen;
    char* t = *(char**)this;
    t[slen] = 0;
}
