#include <string>

extern "C" long __stdcall InterlockedDecrement(volatile long *);
extern "C" long __stdcall InterlockedIncrement(volatile long *);

struct Font {
    virtual ~Font();
    volatile long references;
    void dispose();
};

struct FontRef {
    Font *pointer;
    FontRef() : pointer(0) {}
    ~FontRef()
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
};

extern Font *font;
extern std::string __cdecl makeString(const char *);
extern FontRef __cdecl loadFont(const std::string &);

void __cdecl initializeFont()
{
    if (!font) {
        try {
            std::string name = makeString("Fonts\\comics.fnt");
            FontRef temporary = loadFont(name);

            if (temporary.pointer != font) {
                if (font) {
                    if (InterlockedDecrement(&font->references) == 0) {
                        font->dispose();
                        if (font)
                            delete font;
                    }
                    font = 0;
                }

                if (temporary.pointer) {
                    font = temporary.pointer;
                    InterlockedIncrement(&temporary.pointer->references);
                }
            }
        }
        catch (...) {
        }
    }
}
