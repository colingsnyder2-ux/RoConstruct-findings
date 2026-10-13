// from server: 67% by colin
// from server: 66% by king_originala
namespace std {
template<class T> struct char_traits;
template<class T> class allocator;

template<class T, class Traits, class Alloc>
class basic_string {
    unsigned char storage[28];
public:
    basic_string();
    basic_string(const basic_string&);
    ~basic_string();
};

typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Parser {
    std::string first;
    std::string second;

    Parser(const std::string&);
    ~Parser();
    void parse(std::string&);
};

__forceinline Parser::Parser(const std::string& source)
    : first(source), second()
{
}

__forceinline Parser::~Parser()
{
}

void process(std::string source)
{
    try {
        std::string result;
        Parser parser(source);
        parser.parse(result);
    } catch (...) {
    }
}
