// from server: 97% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern void (__thiscall *stringConstruct)(std::string*, const char*);
extern void (__thiscall *stringDestroy)(std::string*);

namespace std {
    template<class T, class Traits, class Allocator>
    __forceinline basic_string<T, Traits, Allocator>::basic_string(const T* text)
    {
        stringConstruct(this, text);
    }

    template<class T, class Traits, class Allocator>
    __forceinline basic_string<T, Traits, Allocator>::~basic_string()
    {
        stringDestroy(this);
    }
}

extern bool loadedExtensions;
extern bool initializationIgnored;
extern bool (__cdecl *assertionHandler)(
    const char*, const std::string&, const char*, int, bool*, bool);

extern void __cdecl beginAssertion();
extern void __cdecl endAssertion();
extern void (__stdcall *exit)(int);
extern const unsigned char* (__stdcall *glGetString)(unsigned int);

struct GLCaps {
    static const std::string& renderer();
};

const std::string& GLCaps::renderer()
{
    if (!initializationIgnored && !loadedExtensions) {
        beginAssertion();
        if (assertionHandler &&
            assertionHandler(
                "_loadedExtensions",
                std::string("Cannot call GLCaps::renderer before GLCaps::init()."),
                ".\\glg3dcpp\\GLCaps.cpp",
                637,
                &initializationIgnored,
                true)) {
            exit(-1);
        }
        endAssertion();
    }

    static const std::string value(
        reinterpret_cast<const char*>(glGetString(0x1F01)));
    return value;
}
