// from server: 51% by king_originala
extern "C" int (__stdcall * const lstrlenA)(const char *);
extern int __cdecl LookupType(const char *, unsigned short *);

struct ByteBuffer {
    char *data;
    char storage[272];

    void Allocate(int count);
    ~ByteBuffer();
};

struct S {
    long NextToken(char *);
    void SkipSpace();
    long f();
};

long S::f()
{
    char token[4096];
    unsigned int type = 0;
    long result = NextToken(token);
    if (result < 0)
        return result;

    if (!LookupType(token, reinterpret_cast<unsigned short *>(&type)))
        return (long)0x80020009UL;

    SkipSpace();
    result = NextToken(token);
    if (result < 0)
        return result;

    try {
        switch ((unsigned short)type) {
        case 8:
            {
                ByteBuffer value;
                value.data = 0;
                value.Allocate(lstrlenA(token));
                return 0;
            }

        case 19:
            {
                ByteBuffer value;
                value.data = 0;
                value.Allocate(4);
                return 0;
            }

        case 0x4008:
            {
                ByteBuffer value;
                value.data = 0;
                value.Allocate(lstrlenA(token));
                return 0;
            }

        case 17:
            {
                int length = lstrlenA(token);
                if (length & 1)
                    return (long)0x80020009UL;

                int count = length / 2;
                type = count;
                ByteBuffer bytes;
                bytes.data = 0;

                try {
                    bytes.Allocate(count);
                    for (int i = 0; i < count; ++i) {
                        char value = 0;
                        for (int j = 0; j < 2; ++j) {
                            char c = token[i * 2 + j];
                            char digit;
                            if (c >= '0' && c <= '9')
                                digit = (char)(c - '0');
                            else if (c >= 'A' && c <= 'F')
                                digit = (char)(c - 'A' + 10);
                            else if (c >= 'a' && c <= 'f')
                                digit = (char)(c - 'a' + 10);
                            else
                                return (long)0x80020009UL;
                            value = (char)(value * 16 + digit);
                        }
                        bytes.data[i] = value;
                    }
                }
                catch (...) {
                    throw;
                }

                SkipSpace();
                return 0;
            }

        default:
            return (long)0x80020009UL;
        }
    }
    catch (...) {
        SkipSpace();
        return (long)0x80020009UL;
    }
}
