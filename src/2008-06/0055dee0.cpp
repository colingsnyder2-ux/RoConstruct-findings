// from server: 90% by king_originala
extern "C" {
    extern char* (__stdcall *PathAddBackslashA)(char*);
    extern unsigned int (__cdecl *strnlen)(const char*, unsigned int);
}

namespace ATL {
    __declspec(noreturn) void __stdcall AtlThrowImpl(long);
}

struct S {
    char* data;
    void grow(int);
    void f();
};

void S::f()
{
    int* header = reinterpret_cast<int*>(data);
    int length = header[-3] + 1;

    if (((1 - header[-1]) | (header[-2] - length)) < 0)
        grow(length);

    PathAddBackslashA(data);

    int capacity = reinterpret_cast<int*>(data)[-2];
    int result = data ? static_cast<int>(strnlen(data, capacity)) : 0;

    if (result < 0 || result > reinterpret_cast<int*>(data)[-2])
        ATL::AtlThrowImpl(static_cast<long>(0x80070057UL));

    reinterpret_cast<int*>(data)[-3] = result;
    data[result] = 0;
}
