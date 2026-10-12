// from server: 97% by king_originala
struct Interface
{
    virtual long __stdcall slot0() = 0;
    virtual unsigned long __stdcall slot1() = 0;
    virtual unsigned long __stdcall release() = 0;
};

struct Holder
{
    Interface* pointer;

    ~Holder()
    {
        if (pointer)
            pointer->release();
    }
};

struct Entry
{
    Interface* pointer;
    unsigned int value;
};

extern "C" void __cdecl free(void*);

struct S
{
    unsigned int value0;
    Holder single;
    Entry* begin;
    Entry* end;
    Entry* capacity;
    unsigned int flags;

    ~S();
};

S::~S()
{
    if (flags & 2)
    {
        for (Entry* p = begin; p != end; ++p)
        {
            if (p->pointer)
                p->pointer->release();
        }
        free(begin);
    }
}
