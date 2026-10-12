// from server: 47% by king_originala
struct Pair {
    unsigned int first;
    unsigned int second;
};

extern Pair __cdecl transform(Pair value);
extern Pair __cdecl advance(Pair value);

struct Container {
    Pair firstOperation(Pair value);
    Pair secondOperation(Pair value);
};

struct S {
    unsigned char padding[8];
    Container container;
    Container* f(const Pair* value);
};

Container* S::f(const Pair* value)
{
    Pair current = *value;
    while (current.first) {
        current = advance(
            container.secondOperation(
                container.firstOperation(
                    transform(current))));
    }
    return &container;
}
