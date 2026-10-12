// from server: 95% by king_originala
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

    class runtime_error {
        unsigned char storage[40];
    public:
        runtime_error(const string&);
        runtime_error(const runtime_error&);
        ~runtime_error();
    };
}

struct S {
    bool readBits(void*, int, bool);
};

S& __cdecl readInt(S& stream, int& value)
{
    if (!stream.readBits(&value, 32, true)) {
        std::string message("BitStream >> int failed");
        throw std::runtime_error(message);
    }
    return stream;
}
