// from server: 95% by king_originala
struct Enum;

struct Ptr {
    Enum* volatile p;
    Ptr(Enum* value) throw();
    ~Ptr() throw();
    operator Enum*() const throw();
};

struct Enum {
    virtual long __stdcall QueryInterface(const void*, void**) throw();
    virtual unsigned long __stdcall AddRef() throw();
    virtual unsigned long __stdcall Release() throw();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void* destroy(unsigned int) throw();

    Ptr owner;
    void* begin;
    void* end;
    void* current;
    unsigned long flags;

    long Init(void*, void*, Enum*, unsigned long) throw();
    static long __stdcall Clone(Enum*, void**) throw();
};

extern "C" long __stdcall CreateInstance(Enum**) throw();
extern "C" long __stdcall QueryObject(Enum*, const void*, const void*, void**) throw();
extern const unsigned char interfaceId[];
extern const unsigned char interfaceMap[];

inline Ptr::Ptr(Enum* value) throw() : p(value)
{
    if (value)
        value->AddRef();
}

inline Ptr::~Ptr() throw()
{
    Enum* value = p;
    if (value)
        value->Release();
}

inline Ptr::operator Enum*() const throw()
{
    return p;
}

long __stdcall Enum::Clone(Enum* source, void** result) throw()
{
    Enum* object;
    long status = (long)0x80004003UL;

    if (result) {
        *result = 0;
        status = CreateInstance(&object);
        if (status >= 0) {
            Enum* clone = object;
            status = clone->Init(source->begin, source->end,
                                (source->flags & 2) ? Ptr(source) : source->owner,
                                0);
            if (status >= 0) {
                clone->current = source->current;
                status = QueryObject(clone, interfaceId, interfaceMap, result);
            }
            if (status < 0 && clone)
                clone->destroy(1);
        }
    }
    return status;
}
