// from server: 85% by king_originala
namespace std
{
    template<class T> struct char_traits;

    template<class T, class Traits>
    struct basic_ios
    {
        char storage[72];
    };

    template<class T, class Traits>
    struct basic_ifstream : virtual basic_ios<T, Traits>
    {
        char storage[64];

        basic_ifstream(const T *, int, int);
        ~basic_ifstream();
    };
}

typedef std::basic_ifstream<char, std::char_traits<char> > Input;

struct Result
{
    ~Result();
};

extern "C" int __cdecl measure(const char *);
Result __cdecl read(Input *, int);

Result __cdecl function(const char *filename)
{
    Input input(filename, 0x21, 0x40);
    return read(&input, measure(filename));
}
