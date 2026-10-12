// from server: 91% by king_originala
struct Storage {
    Storage(const void *);
    ~Storage();
};

struct S : Storage {
    S(const S &, const S &);
};

extern const void *(__thiscall *get_allocator)(const S *);
extern void (__thiscall *construct)(Storage *, const void *);
extern unsigned int (__thiscall *get_size)(const S *);
extern const char *(__thiscall *get_data)(const S *);
extern void (__cdecl *compose)(S *, const char *, unsigned int,
                              const char *, unsigned int);

__forceinline Storage::Storage(const void *allocator)
{
    construct(this, allocator);
}

__forceinline S::S(const S &left, const S &right)
    : Storage(get_allocator(&left))
{
    compose(this, get_data(&left), get_size(&left),
            get_data(&right), get_size(&right));
}

S operator+(const S &left, const S &right)
{
    return S(left, right);
}
