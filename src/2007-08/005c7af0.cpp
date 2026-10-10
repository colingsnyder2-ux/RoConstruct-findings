// from server: 48% by colin
extern "C" {
    int __cdecl sub_5bed40(void*, const void*);
    int __cdecl sub_5bebd0(void*);
    int __cdecl sub_5bec70(void*);
    int __cdecl sub_5bd9f0(void*, int);
}

extern "C" int (__stdcall *g_fread)(void*, int, int, void*);

struct lua_exception {
    int __cdecl read(void*, int);
};

int lua_exception::read(void* a, int c) {
    char buf[0x200];
    int total = 0;
    int remaining = c;
    int chunk;

    sub_5bed40(&buf, a);
    while (remaining != 0) {
        sub_5bebd0(&buf);
        chunk = 0x200;
        if (chunk > remaining) {
            chunk = remaining;
        }
        int n = g_fread(&buf, 1, chunk, (void*)a);
        total += n;
        remaining -= n;
        if (remaining == 0 || n == chunk) {
            continue;
        }
        break;
    }
    sub_5bec70(&buf);
    if (remaining != 0) {
        if (sub_5bd9f0((void*)a, -1) > 0) {
            return 1;
        }
        return 0;
    }
    return 1;
}
