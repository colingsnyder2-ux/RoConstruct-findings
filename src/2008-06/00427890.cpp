// from server: 92% by king_originala
struct String {
    char storage[28];
};

struct Buffer;
typedef void (__thiscall* BufferOperation)(Buffer*);

extern BufferOperation constructBuffer;
extern BufferOperation destroyBuffer;

struct Buffer {
    void* data;
    int active;

    Buffer();
    ~Buffer();
};

__forceinline Buffer::Buffer() {
    active = 0;
}

__forceinline Buffer::~Buffer() {
    destroyBuffer(this);
}

struct Provider {
    virtual void unused();
    virtual void prepare(String*);
};

struct ProviderOwner {
    int reserved;
    Provider provider;
};

extern ProviderOwner* providerOwner;

typedef const char* (__thiscall* BufferText)(const Buffer*);
typedef const char* (__thiscall* StringText)(const String*);
typedef unsigned int (__thiscall* StringSize)(const String*);
typedef String& (__thiscall* StringInsert)(String*, unsigned int, const char*);
typedef void (__cdecl* BufferFormat)(Buffer*, const char*, ...);

extern BufferText bufferText;
extern StringText stringText;
extern StringSize stringSize;
extern StringInsert stringInsert;
extern BufferFormat formatBuffer;

struct Temporary : Buffer {
    Temporary(String* text);
    ~Temporary();
};

__forceinline Temporary::Temporary(String* text) {
    providerOwner->provider.prepare(text);
    active = 1;
    constructBuffer(this);
}

__forceinline Temporary::~Temporary() {
}

struct ThreadLogManager {
    int reserved[2];
    int number;
    String name;

    String& process(String& text);
};

String& ThreadLogManager::process(String& text) {
    Temporary buffer(&text);
    formatBuffer(&buffer, "_%s_%d", stringText(&name), number);
    stringInsert(&text, stringSize(&text) - 4, bufferText(&buffer));
    return text;
}
