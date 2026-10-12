// from server: 66% by king_originala
extern "C" unsigned int __cdecl strlen(const char *);

extern "C" {
extern unsigned char *(__cdecl *_mbsstr)(const unsigned char *, const unsigned char *);
extern int (__cdecl *memmove_s)(void *, unsigned int, const void *, unsigned int);
extern int (__cdecl *memcpy_s)(void *, unsigned int, const void *, unsigned int);
}

void __cdecl CheckError(int);
namespace ATL {
__declspec(noreturn) void __stdcall AtlThrowImpl(long);
}

struct S {
    char *data;
    void PrepareWrite(int);
    int Replace(const char *, const char *);
};

int S::Replace(const char *oldText, const char *newText)
{
    int sourceLength = oldText ? strlen(oldText) : 0;
    if (sourceLength == 0)
        return 0;

    int replacementLength = newText ? strlen(newText) : 0;
    char *start = data;
    char *end = start + reinterpret_cast<int *>(data)[-3];
    int count = 0;

    while (start < end) {
        char *target;
        while ((target = reinterpret_cast<char *>(_mbsstr(
                    reinterpret_cast<const unsigned char *>(start),
                    reinterpret_cast<const unsigned char *>(oldText)))) != 0) {
            start = target + sourceLength;
            ++count;
        }
        start += (start ? strlen(start) : 0) + 1;
    }

    if (count <= 0)
        return count;

    int oldLength = reinterpret_cast<int *>(data)[-3];
    int newLength = oldLength + (replacementLength - sourceLength) * count;
    int requiredLength = newLength > oldLength ? newLength : oldLength;

    if (((1 - reinterpret_cast<int *>(data)[-1]) |
         (reinterpret_cast<int *>(data)[-2] - requiredLength)) < 0)
        PrepareWrite(requiredLength);

    char *buffer = data;
    start = buffer;
    end = buffer + oldLength;

    while (start < end) {
        char *target;
        while ((target = reinterpret_cast<char *>(_mbsstr(
                    reinterpret_cast<const unsigned char *>(start),
                    reinterpret_cast<const unsigned char *>(oldText)))) != 0) {
            int balance = oldLength - static_cast<int>(target - buffer) - sourceLength;
            CheckError(memmove_s(target + replacementLength, balance,
                                 target + sourceLength, balance));
            CheckError(memcpy_s(target, replacementLength,
                                newText, replacementLength));
            start = target + replacementLength;
            oldLength += replacementLength - sourceLength;
            target[balance + replacementLength] = 0;
        }
        start += (start ? strlen(start) : 0) + 1;
    }

    if (newLength < 0 || newLength > reinterpret_cast<int *>(data)[-2])
        ATL::AtlThrowImpl(static_cast<long>(0x80070057UL));

    reinterpret_cast<int *>(data)[-3] = newLength;
    data[newLength] = 0;
    return count;
}
