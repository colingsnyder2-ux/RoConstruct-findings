// from server: 97% by king_originala
struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

extern void (__thiscall *constructString)(String *, const char *);
extern void (__thiscall *destroyString)(String *);

inline String::String(const char *text)
{
    constructString(this, text);
}

inline String::~String()
{
    destroyString(this);
}

extern "C" void __cdecl lockLog();
extern "C" void __cdecl unlockLog();

extern const unsigned char *(__stdcall *glGetString)(unsigned int);
extern void (__stdcall *exit)(int);

extern bool loadedExtensions;
extern bool initialized;
extern bool (__cdecl *assertionHandler)(
    const char *, const String &, const char *, int, bool *, bool);

const String &vendor()
{
    if (!loadedExtensions && !initialized) {
        lockLog();
        if (assertionHandler &&
            assertionHandler(
                "Cannot call GLCaps::vendor before GLCaps::init().",
                String("_loadedExtensions"),
                ".\\glg3dcpp\\GLCaps.cpp",
                629,
                &loadedExtensions,
                true)) {
            exit(-1);
        }
        unlockLog();
    }

    const char *value =
        reinterpret_cast<const char *>(glGetString(0x1F00));
    static String result(value ? value : "");
    return result;
}
