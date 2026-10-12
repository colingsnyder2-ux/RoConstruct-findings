// from server: 58% by king_originala
namespace std
{
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class T, class Traits, class Allocator>
    struct basic_string
    {
        unsigned char storage[28];

        basic_string();
        basic_string(const basic_string&);
        ~basic_string();

        void process(basic_string*);
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

void function(String argument)
{
    try
    {
        String first;
        String copy(argument);
        String third;
        try
        {
            copy.process(&first);
        }
        catch (...)
        {
            throw;
        }
    }
    catch (...)
    {
        throw;
    }
}
