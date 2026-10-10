// from server: 61% by atomic.potato
extern "C" void __cdecl std_locale_facet_incref();

struct S
{
    int f();
};

int S::f()
{
    unsigned char* p = reinterpret_cast<unsigned char*>(this);
    unsigned char* q = reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char**>(reinterpret_cast<unsigned char*>(this) + 4));
    *reinterpret_cast<unsigned short*>(q) = 0x48;
    *reinterpret_cast<unsigned long*>(q + 4) = *reinterpret_cast<unsigned long*>(p);
    std_locale_facet_incref();
    return reinterpret_cast<int>(q);
}
