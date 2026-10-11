// from server: 82% by colin
struct S {
};

int __cdecl f(char* p) {
    int len;
    char* data;
    if (*(unsigned int*)(p + 0x18) >= 0x10) {
        len = *(int*)(p + 0x14);
        data = p + 4;
    } else {
        len = *(int*)(p + 0x14);
        data = *(char**)(p + 4);
    }
    int result = 0;
    ((void (__cdecl*)(int*, char*, int))0x669f10)(&result, data, len);
    return result;
}
