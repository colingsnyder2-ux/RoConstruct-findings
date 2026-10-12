// from server: 85% by king_originala
typedef int (__thiscall *Getter)(void*);
typedef void (__thiscall *Consumer)(void*, int, float*);

struct Iterator {
    int unused;
    char* current;
};

struct Functor {
    Consumer consume;
    char* object;
    int adjustment;
    Getter get;
    int unused;
    float x;
    float y;
    float z;
};

Functor __cdecl apply(Iterator first, Iterator last, Functor action)
{
    char* current = first.current;
    char* end = last.current;
    for (; current != end; current += 8) {
        int value = action.get(current);
        action.consume(action.object + action.adjustment, value, &action.x);
    }

    Functor result = {
        action.consume,
        action.object,
        action.adjustment,
        action.get,
        action.unused,
        action.x,
        action.y,
        action.x
    };
    return result;
}
