// from server: 76% by king_originala
struct Record {
    unsigned int first;
    volatile unsigned int second;
    unsigned short third;

    __forceinline Record(unsigned short value);
};

__forceinline Record::Record(unsigned short value)
    : first(0), second(second), third(value)
{
}

struct Member {
    unsigned int storage;
    void initialize(const Record&, const unsigned int&);
};

extern unsigned int table[];

struct S {
    unsigned int* vtable;
    unsigned int value;
    Member member;

    S(unsigned int);
};

S::S(unsigned int argument)
{
    value = argument;
    Record record((unsigned short)argument);
    vtable = table;
    member.initialize(record, argument);
}
