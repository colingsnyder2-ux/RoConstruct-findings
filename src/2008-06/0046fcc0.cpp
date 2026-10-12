// from server: 53% by king_originala
struct String
{
    unsigned int proxy;
    char storage[16];
    unsigned int length;
    unsigned int capacity;
    ~String();
};

extern bool (__cdecl *callback)(const char *, const char *, int,
                                const String &, bool, int);
extern "C" void __cdecl exit(int);
extern void __cdecl releaseLog();
extern bool result;
extern const char *expression;
extern const char *filename;
extern int lineNumber;

bool __cdecl check()
{
    bool terminate = callback(expression, filename, lineNumber,
                              String(), false, 1);
    if (terminate)
        exit(-1);
    releaseLog();
    return result;
}
