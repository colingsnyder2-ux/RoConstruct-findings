// from server: 97% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                          std::allocator<char> > String;

extern int defaultValue;
extern int initializationState;

void __cdecl initializeDefault();
void __cdecl ensureInitialized(void (__cdecl*)(), int*);
int __cdecl findValue(const String&);

int __cdecl lookupValue(const char* text)
{
    if (!text) {
        ensureInitialized(initializeDefault, &initializationState);
        return defaultValue;
    }

    return findValue(String(text));
}
