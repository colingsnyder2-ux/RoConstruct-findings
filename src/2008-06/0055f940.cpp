// from server: 70% by king_originala
typedef unsigned int size_t;

extern "C" size_t __cdecl strlen(const char *);
#pragma intrinsic(strlen)

struct Manager {
    void *(__thiscall **table)(Manager *);
};

extern Manager manager;

struct Text {
    unsigned char allocator;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~Text();
};

Text __cdecl buildText(bool);

struct Result {
    void *data;

    ~Result();
    void append(const char *, unsigned int);
};

Result __cdecl makeResult(bool alternate)
{
    Result result = {
        static_cast<char *>(manager.table[3](&manager)) + 16
    };

    if (alternate) {
        static Text text = buildText(true);
        const char *p = text.capacity < 16
            ? text.storage.buffer
            : text.storage.pointer;
        result.append(p, p ? strlen(p) : 0);
    } else {
        static Text text = buildText(false);
        const char *p = text.capacity < 16
            ? text.storage.buffer
            : text.storage.pointer;
        result.append(p, p ? strlen(p) : 0);
    }

    return result;
}
