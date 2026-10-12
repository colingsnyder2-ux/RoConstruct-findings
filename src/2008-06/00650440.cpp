// from server: 86% by king_originala
void __cdecl operator delete(void *);

struct Base {
    volatile unsigned long words[85];
    ~Base();
};

struct Aux {
    unsigned char data[0x20];
    ~Aux();
};

struct Queue {
    void *storage;
    unsigned long data[6];
    volatile unsigned long count;
    void clear();
    ~Queue();
};

struct S : Base {
    Aux aux;
    Queue queue;
    void remove();
    ~S();
};

inline Queue::~Queue()
{
    clear();
    operator delete(storage);
}

S::~S()
{
    words[0] = 0x0084BB84;
    words[4] = 0x0084BB78;
    words[5] = 0x0084BB70;
    words[8] = 0x0084BB68;
    words[9] = 0x0084BB58;
    words[17] = 0x0084BB48;
    words[25] = 0x0084BB38;
    words[33] = 0x0084BB28;
    words[41] = 0x0084BB18;
    words[49] = 0x0084BB08;
    words[76] = 0x0084BB00;
    words[81] = 0x0084BAF4;
    words[82] = 0x0084BAE8;

    while (queue.count != 0)
        remove();
}
