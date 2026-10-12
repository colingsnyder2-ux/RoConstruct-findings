// from server: 97% by king_originala
struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstructor)(String*, const char*);
extern void (__thiscall *stringDestructor)(String*);

inline String::String(const char* text)
{
    stringConstructor(this, text);
}

inline String::~String()
{
    stringDestructor(this);
}

extern bool loadedExtensions;
extern bool initialized;
extern bool (__cdecl *assertionHandler)(
    const char*, const String&, const char*, int, bool*, bool);

extern void __cdecl beginAssertion();
extern void __cdecl endAssertion();
extern void (__stdcall *terminateProcess)(int);
extern const unsigned char* (__stdcall *getGLString)(unsigned int);

const String& glVersion()
{
    if (!loadedExtensions && !initialized) {
        beginAssertion();
        if (assertionHandler &&
            assertionHandler(
                "_loadedExtensions",
                String("Cannot call GLCaps::glVersion before GLCaps::init()."),
                ".\\glg3dcpp\\GLCaps.cpp",
                615,
                &loadedExtensions,
                true)) {
            terminateProcess(-1);
        }
        endAssertion();
    }

    static String version(
        reinterpret_cast<const char*>(getGLString(0x1f02)));
    return version;
}
