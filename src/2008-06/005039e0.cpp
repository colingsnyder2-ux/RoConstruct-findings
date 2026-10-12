// from server: 84% by king_originala
struct Exception;
typedef void (__thiscall *ExceptionConstructor)(Exception *, const char * const &);
extern ExceptionConstructor exceptionConstructor;
extern char exceptionThrowInfo;

extern "C" __declspec(noreturn) void __stdcall
throwException(void *, void *);

struct Exception {
    void *table;
    char *message;
    int ownsMessage;

    Exception();
    ~Exception();
};

__forceinline Exception::Exception()
{
}

void func_005039e0()
{
    const char *text = "shouldn't be here";
    Exception value;
    exceptionConstructor(&value, text);
    throwException(&value, &exceptionThrowInfo);
}
