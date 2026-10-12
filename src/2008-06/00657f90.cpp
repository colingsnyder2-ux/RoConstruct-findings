// from server: 62% by king_originala
struct Locale {
    unsigned short flags;
    void* facet;

    Locale(const Locale&);
    ~Locale();
};

extern void (__thiscall *facet_incref)(void*);
extern void (__thiscall *locale_destroy)(Locale*);

inline Locale::Locale(const Locale& other)
    : flags(other.flags), facet(other.facet)
{
    facet_incref(facet);
}

inline Locale::~Locale()
{
    locale_destroy(this);
}

struct Result {
    unsigned char storage[12];
};

void __cdecl helper(Result*, int, int, int, int, Locale, Result*);

Result __cdecl function(int a, int b, int c, int d, Locale locale)
{
    Result result;
    helper(&result, a, b, c, d, locale, &result);
    return result;
}
