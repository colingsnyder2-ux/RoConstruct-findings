// from server: 89% by king_originala
typedef unsigned int size_t;

namespace ATL {
    __declspec(noreturn) void __stdcall AtlThrowImpl(long hr);
}

extern "C" size_t __cdecl strlen(const char *);
#pragma intrinsic(strlen)

extern "C" int (__cdecl *memcpy_s)(void *, size_t, const void *, size_t);

struct S {
    char *data;
    void grow(int length);
    void append(const char *source, int count);
};

void S::append(const char *source, int count)
{
    int length = ((int *)data)[-3];
    unsigned int offset = (unsigned int)(source - data);

    if (count < 0)
        ATL::AtlThrowImpl((long)0x80070057);

    int sourceLength = (int)source;
    if (source)
        sourceLength = (int)strlen(source);
    if (count > sourceLength)
        count = sourceLength;

    if (0x7fffffff - count < length)
        ATL::AtlThrowImpl((long)0x80070057);

    int capacity = ((int *)data)[-2];
    int shared = 1 - ((int *)data)[-1];
    int newLength = length + count;
    if ((shared | (capacity - newLength)) < 0)
        grow(newLength);

    char *buffer = data;
    if (offset <= (unsigned int)length)
        offset += (unsigned int)buffer;
    else
        offset = (unsigned int)source;

    memcpy_s(buffer + length, count, (const void *)offset, count);

    if (newLength < 0 || newLength > ((int *)data)[-2])
        ATL::AtlThrowImpl((long)0x80070057);

    ((int *)data)[-3] = newLength;
    data[newLength] = 0;
}
