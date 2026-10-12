// from server: 75% by king_originala
extern "C" int (__stdcall *lstrlenA)(const char*);

struct Exception
{
    int result;
    char reserved[20];
};

struct S
{
    int f(const char* source, char** result);
};

int S::f(const char* source, char** result)
{
    S* volatile self = this;

    if (!source || !result)
        return (int)0x80070057;

    int status = 0;
    int length = lstrlenA(source) + 1;
    char* buffer = 0;

    try
    {
        buffer = new char[length];
    }
    catch (Exception error)
    {
        status = error.result;
    }
    catch (...)
    {
        status = (int)0x8007000E;
    }

    if (status < 0)
        return status;

    for (int i = 0; i < length; ++i)
        buffer[i] = source[i];

    *result = buffer;
    (void)self;
    return status;
}
