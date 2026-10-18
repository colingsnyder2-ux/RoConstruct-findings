// from server: 50% by colin
struct String {
    unsigned long allocator;
    union {
        char local[16];
        char *pointer;
    } storage;
    unsigned long length;
    unsigned long capacity;

    ~String();
    String *substr(String *result, unsigned long position) const;
};

struct Address {
    const char *text(int mode);
};

struct Error {
    unsigned char data[12];

    Error(const String &message);
    ~Error();
};

extern String *__cdecl format(String *result, const char *pattern, ...);
extern const char errorPattern[];
extern unsigned char errorType;
extern "C" __declspec(noreturn) void __stdcall raiseException(void *, void *);

struct S {
    int f(String player, Address *remote);
};

int S::f(String player, Address *remote)
{
    String name;
    String *result = player.substr(&name, 4);
    const char *text;
    if (result->capacity >= 16)
        text = result->storage.pointer;
    else
        text = result->storage.local;

    String message;
    Error error(*format(&message, errorPattern, text, remote->text(1)));
    raiseException(&error, &errorType);
}
