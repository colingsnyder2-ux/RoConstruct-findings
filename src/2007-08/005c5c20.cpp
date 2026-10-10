// from server: 25% by colin
struct lua_exception {
    char pad[0x49];
    unsigned char count;
    char pad2[3];
    char* end;
    int resize(int n);
};

int lua_exception::resize(int n) {
    unsigned char c = count;
    if (n < c) {
        int d = c - n;
        n += d;
        do {
            char* p = end;
            *(int*)(p + 8) = 0;
            end = p + 0x10;
            d--;
        } while (d != 0);
    }
    char* e = end;
    char* src = e - (n << 4);
    if ((int)c > 0) {
        char* dst = e;
        int k = c;
        do {
            char* p = end;
            end = p + 0x10;
            *(int*)(p + 0) = *(int*)(src + 0);
            *(int*)(p + 4) = *(int*)(src + 4);
            *(int*)(p + 8) = *(int*)(src + 8);
            *(int*)(src + 0) = 0;
            src += 0x10;
            k--;
        } while (k != 0);
    }
    return (int)e;
}
