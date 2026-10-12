// from server: 62% by king_originala
extern "C" long __stdcall InterlockedDecrement(volatile long *);
extern "C" long __stdcall InterlockedIncrement(volatile long *);

struct String {
    unsigned char storage[28];
    ~String();
};

struct Font {
    virtual ~Font();
    volatile long references;
    void dispose();
};

struct FontRef {
    Font *pointer;
    ~FontRef();
};

extern Font *font;
extern String __cdecl makeString(const char *);
extern FontRef __cdecl loadFont(const String &);

inline FontRef::~FontRef()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->dispose();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

void __cdecl initializeFont()
{
    if (!font) {
        try {
            FontRef temporary = loadFont(makeString("Fonts\\comics.fnt"));
            Font *replacement = temporary.pointer;

            if (replacement != font) {
                if (font) {
                    if (InterlockedDecrement(&font->references) == 0) {
                        font->dispose();
                        if (font)
                            delete font;
                    }
                    font = 0;
                }

                if (replacement) {
                    font = replacement;
                    InterlockedIncrement(&replacement->references);
                }
            }
        }
        catch (...) {
        }
    }
}
