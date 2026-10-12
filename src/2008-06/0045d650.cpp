// from server: 91% by king_originala
struct String;

extern String* (__thiscall* copyString)(String*, const String&);
extern String* (__thiscall* makeString)(String*, const char*);
extern void (__thiscall* destroyString)(String*);

struct String {
    unsigned char data[28];

    String(const String& other) { copyString(this, other); }
    String(const char* text) { makeString(this, text); }
    ~String() { destroyString(this); }
};

extern const String& __cdecl rendererName();
extern bool __cdecl contains(const String&, const String&);
extern const char rendererPattern[];

struct Texture;

struct TextureVTable {
    void (__thiscall* entries[39])(Texture*);
};

struct Texture {
    TextureVTable* vtable;
};

extern Texture* currentTexture;

struct Table {
    unsigned char padding[0xA4];
    Texture* texture;
    unsigned char gap[4];
    unsigned int enabled;

    void prepare();
    void configure(unsigned int, unsigned int);
    void apply(unsigned int, unsigned int, unsigned int);
};

void Table::apply(unsigned int mode, unsigned int a, unsigned int b)
{
    if (!texture || !enabled)
        return;

    String renderer(rendererName());

    if (contains(renderer, String(rendererPattern))) {
        prepare();
        try {
            configure(a, b);
            Texture* selected = texture;
            if (currentTexture != selected) {
                selected->vtable->entries[38](selected);
                currentTexture = selected;
            }
        } catch (...) {
            prepare();
            throw;
        }
        prepare();
    } else {
        configure(a, b);
        Texture* selected = texture;
        if (currentTexture != selected) {
            selected->vtable->entries[38](selected);
            currentTexture = selected;
        }
    }
}
