// from server: 59% by king_originala
struct Exception;
typedef void (__thiscall *ExceptionConstructor)(Exception*, const char* const&);
extern ExceptionConstructor exceptionConstructor;

struct Exception {
    char* message;
    int ownsMessage;

    Exception(const char* const&);
    Exception(const Exception&);
    virtual ~Exception();
    virtual const char* what() const;
};

__forceinline Exception::Exception(const char* const& text)
{
    exceptionConstructor(this, text);
}

void func_005039e0()
{
    throw Exception("shouldn't be here");
}
