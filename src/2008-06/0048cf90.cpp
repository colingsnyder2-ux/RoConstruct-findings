// from server: 83% by king_originala
struct Source {
    unsigned a, b, c, d;
};

struct String {
    void assign(unsigned, unsigned, unsigned, unsigned, const Source *);
};

typedef void (__thiscall *TidyFunction)(String *, bool, unsigned);
extern TidyFunction tidy;

String *__cdecl construct(String * volatile result, const Source * volatile source)
{
    struct Locals {
        volatile unsigned state;
        unsigned b;
    } local;

    local.state = 0;
    const Source *p = source;
    unsigned d = p->d;
    unsigned a = p->a;
    String *destination = result;
    unsigned c = p->c;
    local.b = p->b;
    tidy(destination, false, 0);
    destination->assign(a, local.b, c, d, source);
    return destination;
}
