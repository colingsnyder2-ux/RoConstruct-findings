// from server: 76% by colin
extern "C" int __stdcall _mbsicmp(const unsigned char*, const unsigned char*);
extern "C" int __stdcall _mbsnbcpy_s(char*, unsigned int, const char*, unsigned int);

extern "C" void __stdcall sub_00401000(unsigned int);
extern "C" void __stdcall sub_004016e0(const char*, unsigned int, unsigned int, const char*, unsigned int);

struct S {
    char pad[0x1226];
    unsigned short field_1226;
    int field_1228;
    int field_122c;
    int method(const char*);
};

int S::method(const char* arg)
{
    if (arg == 0) {
        sub_00401000(0x80004005);
    }

    int found = -1;
    int i = 0;
    int off = 0;
    while (off < 0x60) {
        const char* p = *(const char**)(off + 0x786f80);
        if (p != 0) {
            if (_mbsicmp((const unsigned char*)p, (const unsigned char*)arg) == 0) {
                found = i;
                break;
            }
        }
        off += 0xc;
        i++;
    }

    if (found != -1) {
        int idx = found * 3;
        this->field_1228 = found;
        this->field_122c = *(int*)(idx * 4 + 0x786f84);
        this->field_1226 = *(unsigned short*)(idx * 4 + 0x786f88);
    } else {
        this->field_1228 = -1;
        const char* p = arg;
        const char* q = p + 1;
        char c = *p;
        p++;
        while (c != 0) {
            c = *p;
            p++;
        }
        int len = (int)(p - q);
        this->field_122c = len;
        if (len > 0x20) {
            return 0;
        }
        this->field_1226 = 0;
    }

    sub_004016e0((const char*)this, 0x21, (unsigned int)arg, (const char*)this, this->field_122c);
    this->field_122c = this->field_122c;
    ((char*)this)[this->field_122c] = 0;
    return 1;
}
