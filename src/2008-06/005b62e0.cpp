// from server: 80% by king_originala
struct Result;

struct Argument
{
    float x, y, z, padding;

    Argument(float a, float b, float c);
    Argument(const Argument &other);
};

inline Argument::Argument(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

inline Argument::Argument(const Argument &other)
    : x(other.x), y(other.y), z(other.z), padding(other.padding)
{
}

extern "C" void __cdecl construct(Result *, Argument);

Result * __cdecl makeResult(Result *result, float x, float y, float z)
{
    Argument value(x, y, z);
    construct(result, value);
    return result;
}
