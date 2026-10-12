// from server: 75% by king_originala
namespace std
{
    class string
    {
        char storage[28];

    public:
        string(const char *);
        string(const string &);
        ~string();
    };

    class exception
    {
        const char *message;
        int owned;

    public:
        exception();
        exception(const exception &);
        virtual ~exception();
        virtual const char *what() const;
    };

    class runtime_error : public exception
    {
        string message;

    public:
        runtime_error(const string &);
        runtime_error(const runtime_error &);
        virtual ~runtime_error();
        virtual const char *what() const;
    };

    class ios_base
    {
    protected:
        int standardStream;
        int state;
        char storage[28];

    public:
        virtual ~ios_base();
    };

    class ios : public ios_base
    {
        char storage[32];

    public:
        bool fail() const;
    };

    class ostream : virtual public ios
    {
    public:
        ostream &operator<<(double);
    };

    class ostringstream
    {
        char storage[128];

    public:
        ostringstream(int, int);
        ~ostringstream();
        string str() const;
        ostream &output();
    };
}

inline std::runtime_error::runtime_error(const std::string &text)
    : std::exception(), message(text)
{
}

inline std::runtime_error::~runtime_error()
{
}

inline const char *std::runtime_error::what() const
{
    return reinterpret_cast<const char *const *>(&message)[0];
}

inline bool std::ios::fail() const
{
    return (state & 6) != 0;
}

inline std::ostream &std::ostringstream::output()
{
    return *reinterpret_cast<std::ostream *>(this);
}

std::string stringify(double value)
{
    std::ostringstream stream(2, 1);
    if ((stream.output() << value).fail())
        throw std::runtime_error(std::string("stringify(double)"));
    return stream.str();
}
