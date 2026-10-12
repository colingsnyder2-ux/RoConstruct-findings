// from server: 81% by king_originala
struct StreamBase {
    char storage[80];
    ~StreamBase();
};

struct Stream : virtual StreamBase {
    char storage[48];
    Stream(int);
    ~Stream();
};

extern void* assertionHook;

struct S {
    char prefix[32];
    union {
        char text[16];
        char* heap;
    } name;
    unsigned length;
    unsigned capacity;

    void report(int, Stream*, int, const char*, const char*);
    void f(const char*);
};

void S::f(const char* message)
{
    const char* text = 0;
    if (length != 0) {
        if (capacity >= 16)
            text = name.heap;
        else
            text = name.text;
    }

    Stream stream(1);
    try {
        if (assertionHook == 0)
            report(0, &stream, 0, text, message);
    }
    catch (...) {
        report(0, &stream, 0, text, message);
    }
}
