// from server: 87% by king_originala
struct Facet;

typedef void (__thiscall *IncrefFunction)(Facet *);
extern IncrefFunction incref;

struct Result {
    unsigned short tag;
    Facet *facet;
};

Result *__cdecl build(Result *result, Facet *const *source)
{
    result->tag = 72;
    Facet *facet = *source;
    volatile int state = 0;
    result->facet = facet;
    incref(facet);
    return result;
}
