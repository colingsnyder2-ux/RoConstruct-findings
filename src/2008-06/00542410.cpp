// from server: 97% by king_originala
#pragma optimize("g", off)

struct VChunk { char pad[8]; };

struct Pair
{
    unsigned int first;
    unsigned int second;
};

struct Link
{
    unsigned int storage;
    void release(VChunk*, int);
};

struct List
{
    unsigned int storage[2];
    void remove(char*);
};

extern "C" char* __cdecl slot_a(VChunk*);
extern "C" char* __cdecl slot_b(VChunk*);
extern "C" char* __cdecl slot_c(VChunk*);

struct S
{
    char padding[12];
    Link link;
    List list;
    VChunk* chunk;
    unsigned int state;

    Pair first();
    Pair second();
    Pair combine(Pair, Pair);
    void f();
};

void S::f()
{
    Pair a;
    a = first();
    Pair b;
    b = second();
    combine(b, a);

    list.remove(slot_a(chunk));
    list.remove(slot_b(chunk));
    list.remove(slot_c(chunk));
    link.release(chunk, 1);

    chunk = 0;
    state = 0;
}
