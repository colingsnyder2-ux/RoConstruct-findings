// from server: 95% by king_originala
struct Text {
    char storage[20];
    unsigned int length;
};

struct Buffer {
    void* data;
    Buffer();
    ~Buffer();
};

extern void (__thiscall* bufferConstruct)(Buffer*);
extern void (__thiscall* bufferDestroy)(Buffer*);
extern const char* (__thiscall* bufferText)(const Buffer*);
extern const char* (__thiscall* textData)(const Text*);
extern void (__cdecl* formatBuffer)(Buffer*, const char*, ...);

extern const char formatWithMessage[];
extern const char formatWithoutMessage[];
extern void __cdecl writeLog(int, const char*);

inline Buffer::Buffer()
{
    bufferConstruct(this);
}

inline Buffer::~Buffer()
{
    bufferDestroy(this);
}

bool __cdecl reportAssertion(const char* expression, const Text* message,
                            const char* filename, int line)
{
    Buffer buffer;

    if (message->length > 0)
        formatBuffer(&buffer, formatWithMessage, expression,
                     textData(message), filename, line);
    else
        formatBuffer(&buffer, formatWithoutMessage, expression, filename, line);

    writeLog(2, bufferText(&buffer));
    return false;
}
