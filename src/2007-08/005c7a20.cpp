// from server: 53% by colin
extern "C" {
    int __cdecl fgets(char* buf, int size, void* stream);
}

extern "C" {
    void* __cdecl sub_5bed40(void* a, void* b);
    char* __cdecl sub_5bebd0(void* a);
    void __cdecl sub_5bec70(void* a);
    int __cdecl sub_5bd9f0(void* a, int b);
}

struct lua_exception {
    int f(void* a);
};

int lua_exception::f(void* a) {
    char buf[0x200];
    void* stream;
    char* line;
    int result;
    int len;
    char* p;
    char* q;

    sub_5bed40(&stream, a);
    line = sub_5bebd0(&stream);
    while (fgets(line, 0x200, *(void**)0x77e828)) {
        p = line;
        q = p + 1;
        while (*p) {
            p++;
        }
        len = (int)(p - q);
        if (len != 0 && line[len - 1] == '\n') {
            line[len - 1] = 0;
            sub_5bec70(&stream);
            return 1;
        }
        *(int*)&stream += len;
        line = sub_5bebd0(&stream);
    }
    sub_5bec70(&stream);
    result = sub_5bd9f0(a, -1);
    return result > 0;
}
