// from server: 88% by king_originala
void* __cdecl operator new(unsigned int);

struct Base {
    unsigned char data[0x24];
    Base();
    ~Base();
};

struct Storage {
    Storage** link;
    unsigned int reserved[2];
    void* first;
    void* last;
    void* end;
    Storage();
};

__forceinline Storage::Storage()
    : link(new Storage*(this)), first(0), last(0), end(0)
{
}

struct S : Base {
    Storage storage;
    S();
};

S::S()
{
}
