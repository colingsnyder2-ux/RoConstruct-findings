// from server: 93% by king_originala
struct Source;

struct Result
{
    unsigned int first;
    unsigned int second;

    Result(Source* source);
    Result(const Result& other);
    ~Result();
};

struct Source
{
    void copy(Result* output);
};

inline Result::Result(Source* source)
{
    if (source)
        source->copy(this);
    else
    {
        first = 0;
        second = 0;
    }
}

inline Result::Result(const Result& other)
    : first(other.first), second(other.second)
{
}

inline Result::~Result()
{
}

struct S
{
    unsigned char padding[0x54];
    Source* source;

    void baseCall();
    void consume(Result value);
    void f();
};

void S::f()
{
    baseCall();
    consume(Result(source));
}
