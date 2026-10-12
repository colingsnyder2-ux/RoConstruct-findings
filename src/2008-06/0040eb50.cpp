// from server: 88% by king_originala
struct Guid {
    unsigned long a, b, c, d;
};

extern const Guid eventInterfaceId;

struct S {
    virtual long __stdcall QueryInterface(const Guid& iid, void** result);
    virtual unsigned long __stdcall AddRef();
};

long __stdcall S::QueryInterface(const Guid& iid, void** result)
{
    if (!result)
        return (long)0x80004003UL;

    *result = 0;

    if (!(iid.a == 0xb196b286UL &&
          iid.b == eventInterfaceId.b &&
          iid.c == eventInterfaceId.c &&
          iid.d == eventInterfaceId.d) &&
        !(iid.a == 0 &&
          iid.b == 0 &&
          iid.c == 0xc0UL &&
          iid.d == 0x46000000UL))
        return (long)0x80004002UL;

    *result = this;
    AddRef();
    return 0;
}
