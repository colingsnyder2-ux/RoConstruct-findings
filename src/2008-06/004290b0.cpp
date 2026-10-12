// from server: 72% by king_originala
extern "C" int (__stdcall *lstrlenA)(const char *);
extern "C" void *__cdecl _alloca(unsigned int);
#pragma intrinsic(_alloca)

extern bool __cdecl canUseStack(int);
extern int __cdecl checkedMultiply(int *, int, int);
extern wchar_t *__stdcall convertText(void *, const char *, unsigned int, unsigned int);
extern long __stdcall dispatch(void *, const wchar_t *, unsigned int,
                               const wchar_t *, unsigned int, unsigned int,
                               unsigned int);

struct ConversionStorage
{
    void *head;
    ~ConversionStorage() throw();
    void *allocate(int);
};

long __stdcall convertAndDispatch(void *context, const char *text,
                                  unsigned int operation, const char *optionalText,
                                  unsigned int flags, unsigned int value)
{
    if (!text)
        return (long)0x80004003;

    ConversionStorage storage = { 0 };
    int (__stdcall *length)(const char *) = lstrlenA;

    __int64 bytes = (__int64)(length(text) + 1) * 2;
    if ((unsigned __int64)(bytes + 0x80000000i64) > 0xffffffffui64)
        return (long)0x8007000e;

    int count = (int)bytes;
    void *buffer;
    if (count <= 1024 && canUseStack(count))
        buffer = _alloca(count);
    else
        buffer = storage.allocate(count);

    wchar_t *converted = convertText(buffer, text, (unsigned int)count / 2, 3);
    if (!converted)
        return (long)0x8007000e;

    wchar_t *convertedOptional = 0;
    if (optionalText)
    {
        int optionalBytes = length(optionalText) + 1;
        if (checkedMultiply(&optionalBytes, optionalBytes, 2) < 0)
            return (long)0x8007000e;

        count = optionalBytes;
        if (count <= 1024 && canUseStack(count))
            buffer = _alloca(count);
        else
            buffer = storage.allocate(count);

        convertedOptional = convertText(buffer, optionalText,
                                        (unsigned int)count / 2, 3);
        if (!convertedOptional)
            return (long)0x8007000e;
    }

    return dispatch(context, converted, operation, convertedOptional,
                    flags, value, 0);
}
