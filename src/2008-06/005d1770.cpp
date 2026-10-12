// from server: 92% by king_originala
struct String {
    unsigned int unused;
    union {
        char buffer[16];
        const char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
};

struct Symbol;

struct EnumDescriptor {
    bool parse(Symbol* symbol, int* value);
};

extern unsigned char registrationState;
extern void __cdecl initializeDescriptor();
extern void __cdecl registerDescriptor(void (__cdecl *initializer)(), unsigned char* state);
extern EnumDescriptor* __cdecl getDescriptor();
extern Symbol* __cdecl internSymbol(const char* text);

struct S {
    void setType(int value);
    void f(const String* text);
};

void S::f(const String* text)
{
    const char* characters = text->capacity >= 16
        ? text->pointer
        : text->buffer;

    registerDescriptor(initializeDescriptor, &registrationState);
    EnumDescriptor* descriptor = getDescriptor();

    if (!descriptor->parse(internSymbol(characters),
                           reinterpret_cast<int*>(&text))) {
        setType(0);
        return;
    }

    setType(reinterpret_cast<int>(text));
}
