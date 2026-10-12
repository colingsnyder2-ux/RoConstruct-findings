// from server: 66% by king_originala
struct Locale {
    void* facet;

    Locale(const Locale&);
    ~Locale();
};

extern void (__thiscall *facet_incref)(void*);
extern void (__thiscall *locale_destroy)(Locale*);

inline Locale::Locale(const Locale& other)
    : facet(other.facet)
{
    facet_incref(facet);
}

inline Locale::~Locale()
{
    locale_destroy(this);
}

struct Result;

void __cdecl helper(Result*, int, int, int, int, unsigned short, Locale, Result*);

Result* __cdecl function(Result* result, int a, int b, int c, int d,
                        unsigned short flags, Locale locale)
{
    helper(result, a, b, c, d, flags, locale, result);
    return result;
}
