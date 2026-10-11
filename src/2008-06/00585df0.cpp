// from server: 57% by atomic.potato
struct S {
    char pad[8];
    int (__stdcall *fn)(int);
    int offset;
    int method(int, int);
};

extern "C" void __stdcall string_copy_ctor(void*, const void*);

int S::method(int a, int b)
{
    int tmp = 0;
    int* p = (int*)a;
    if (p != 0)
        tmp = a - 0x14;
    int result = fn(offset + tmp);
    string_copy_ctor((void*)b, (void*)result);
    *(int*)(b + 0x1c) = *(int*)(result + 0x1c);
    return b;
}
