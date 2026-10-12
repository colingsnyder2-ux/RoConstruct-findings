// from server: 66% by king_originala
struct Result
{
    unsigned int a, b, c, d, e;
    Result(unsigned int owner, unsigned int position);
};

__forceinline Result::Result(unsigned int owner, unsigned int position)
    : a(owner), b(position), c(owner), d(position)
{
}

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct S
{
    unsigned int active;
    unsigned char padding[28];
    unsigned int previousOwner;
    unsigned int previousPosition;
    unsigned int currentOwner;
    unsigned int currentPosition;
    unsigned char currentFlag;
    unsigned char padding2[3];
    unsigned int firstOwner;
    unsigned int firstPosition;
    unsigned int endOwner;
    unsigned int endPosition;
    unsigned char finished;

    Result dispatch(unsigned int, unsigned int, unsigned int, unsigned int);
    Result nextResult();
    void advance();
};

__forceinline Result S::nextResult()
{
    if (active)
        return dispatch(firstOwner, firstPosition, endOwner, endPosition);
    return Result(endOwner, endPosition);
}

void S::advance()
{
    Result result = nextResult();

    if (result.a != static_cast<unsigned int>(-4) &&
        (!result.a || result.a != endOwner))
        _invalid_parameter_noinfo();

    if (result.b == endPosition) {
        if (result.c != static_cast<unsigned int>(-4) &&
            (!result.c || result.c != endOwner))
            _invalid_parameter_noinfo();

        if (result.d == endPosition) {
            unsigned int owner = currentOwner;
            unsigned int position = currentPosition;
            if (owner != static_cast<unsigned int>(-4) &&
                (!owner || owner != endOwner))
                _invalid_parameter_noinfo();
            if (position == endPosition)
                finished = 1;
        }
    }

    previousOwner = firstOwner;
    previousPosition = firstPosition;
    currentOwner = result.a;
    currentPosition = result.b;
    currentFlag = 0;
    firstOwner = result.c;
    firstPosition = result.d;
}
