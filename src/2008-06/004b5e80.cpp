// from server: 81% by king_originala
struct Record {
    unsigned int first;
    volatile unsigned int second;
    unsigned short third;

    __forceinline Record();
};

__forceinline Record::Record()
    : first(0), second(second)
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
    unsigned short shortValue = (unsigned short)argument;
    value = argument;
    Record record;
    vtable = table;
    record.third = shortValue;
    member.initialize(record, argument);
}
