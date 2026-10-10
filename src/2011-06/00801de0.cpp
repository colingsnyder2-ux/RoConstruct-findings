// from server: 62% by atomic.potato
typedef unsigned long DWORD;

extern "C" DWORD __declspec(dllimport) __stdcall GetFileAttributesA(const char*);

struct S
{
    DWORD __stdcall f(const char* path);
};

DWORD __stdcall S::f(const char* path)
{
    return GetFileAttributesA(path);
}
