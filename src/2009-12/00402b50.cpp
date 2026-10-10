// from server: 61% by atomic.potato
extern "C" int __stdcall lstrlenW(const wchar_t *);
extern "C" int __cdecl memcpy_s(void *, unsigned int, const void *, unsigned int);

struct S
{
};

int __cdecl f(const wchar_t *source, wchar_t *destination)
{
    int length = lstrlenW(source);
    int size = length + length + 2;
    int offset = (int)source;
    memcpy_s(destination, offset, (const void *)(offset + offset), size);
    return 1;
}
