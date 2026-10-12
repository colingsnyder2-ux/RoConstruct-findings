// from server: 75% by king_originala
extern unsigned char table[];

struct Packet {
    unsigned int first;
    volatile unsigned int second;
    unsigned short value;
};

struct Link {
    void* data;
    void initialize(Packet*, unsigned int*);
};

struct S {
    void* tablePointer;
    unsigned int value;
    Link link;
    S* initialize(unsigned int);
};

S* S::initialize(unsigned int n)
{
    Packet packet;
    unsigned short small = (unsigned short)n;
    unsigned int saved = packet.second;
    value = n;
    packet.first = 0;
    packet.second = saved;
    tablePointer = table;
    packet.value = small;
    link.initialize(&packet, &n);
    return this;
}
