// from server: 49% by colin
extern "C" int __stdcall sub_401000(unsigned int code);
extern "C" int __stdcall sub_401680(int code);

extern "C" int (__stdcall *off_802874)(const char*, const char*);
extern "C" int (__stdcall *off_8028B8)(void*, int, const char*, int);

struct S {
    char pad[0x1226];
    unsigned short field_1226;
    int field_1228;
    int field_122c;
    int f(const char* name);
};

int S::f(const char* name)
{
    if (name == 0)
        sub_401000(0x80004005);

    int found = -1;
    int i = 0;
    int off = 0;
    do {
        const char* p = *(const char**)(off + 0x80b358);
        if (p != 0) {
            if (off_802874(name, p) == 0) {
                found = i;
                break;
            }
        }
        off += 0xc;
        i++;
    } while (off < 0x60);

    if (found != -1) {
        int idx = found * 3;
        field_1228 = found;
        field_122c = *(int*)(idx * 4 + 0x80b35c);
        field_1226 = *(unsigned short*)(idx * 4 + 0x80b360);
    } else {
        field_1228 = -1;
        int len = 0;
        const char* p = name;
        while (*p++) len++;
        field_122c = len;
        if (len > 0x20)
            return 0;
        field_1226 = 0;
    }

    int n = field_122c;
    off_8028B8(this, 0x21, name, n);
    sub_401680(n);
    *(char*)((char*)this + n) = 0;
    return 1;
}
