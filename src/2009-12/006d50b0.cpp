// from server: 67% by atomic.potato
typedef char *StringPtr;

extern "C" StringPtr __stdcall std_string_ctor(StringPtr, const char *);

struct FlatTool
{
    StringPtr f(StringPtr);
};

StringPtr FlatTool::f(StringPtr value)
{
    std_string_ctor(value, "FlatCursor");
    return value;
}
