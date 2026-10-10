// from server: 57% by colin
struct S {
    char pad0[4];
    int field4;
    char pad8[0x2c];
    int field34;
    char pad38[4];
    int field3c;
    int field40;
    char field44;
    int method(int arg);
};

extern "C" void* __stdcall localeconv();
extern "C" int __cdecl sub_60eae0(const char*, const char*);
extern "C" int __cdecl sub_60eeb0(void*, const void*, int);
extern "C" int __cdecl sub_60ee90(char*, const char*, ...);
extern "C" int __cdecl sub_5c6020(int, int);
extern "C" int __cdecl sub_617400(int);

int S::method(int arg) {
    char saved = field44;
    void* lc = localeconv();
    char sep;
    if (lc) {
        sep = *(char*)(*(int*)lc);
    } else {
        sep = '.';
    }
    field44 = sep;
    int* str = (int*)field3c;
    int len = str[1];
    char* data = (char*)str[0];
    if (len) {
        do {
            len--;
            if (data[len] == saved) {
                data[len] = sep;
            }
        } while (len);
    }
    if (sub_60eae0(data, (const char*)arg) == 0) {
        int* str2 = (int*)field3c;
        int len2 = str2[1];
        char* data2 = (char*)str2[0];
        char cur = field44;
        if (len2) {
            do {
                len2--;
                if (data2[len2] == cur) {
                    data2[len2] = '.';
                }
            } while (len2);
        }
        char buf[0x50];
        sub_60eeb0(buf, (char*)field40 + 0x10, 0x50);
        int v = sub_60ee90((char*)field34, "%s near '%s'", buf, "malformed number");
        int r = sub_617400(0);
        sub_60ee90((char*)field34, "%s:%d: %s", (char*)field3c, r, v);
        sub_5c6020(field34, 3);
    }
    return 0;
}
