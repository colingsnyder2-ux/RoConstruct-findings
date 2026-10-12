// from server: 69% by king_originala
typedef unsigned long ULONG;
typedef long HRESULT;
typedef unsigned int size_t;

void * __cdecl operator new(size_t);
void * __cdecl operator new[](size_t);
void __cdecl operator delete(void *);

struct Unknown;
struct UnknownTable {
    HRESULT (__stdcall *query)(Unknown *, const void *, void **);
    ULONG (__stdcall *addRef)(Unknown *);
    ULONG (__stdcall *release)(Unknown *);
};
struct Unknown {
    UnknownTable *table;
};

struct Module;
struct ModuleTable {
    void (__thiscall *first)(Module *);
    void (__thiscall *lock)(Module *);
};
struct Module {
    ModuleTable *table;
};
extern Module *module;

struct Entry {
    Unknown *object;
    ULONG cookie;
};

struct Connections {
    Unknown **data;
    unsigned int count;
};

struct Source {
    void *table;
    Connections connections;
};

struct Enumerator;
struct EnumeratorTable {
    void *slots[7];
    void (__thiscall *destroy)(Enumerator *, unsigned int);
};
extern EnumeratorTable enumeratorTable;
extern const unsigned char interfaceMap[];
extern const unsigned char interfaceId[];

struct Enumerator {
    EnumeratorTable *table;
    long references;
    Entry *begin;
    Entry *end;
    Entry *allocation;
    Unknown *owner;
    unsigned int flags;

    Enumerator() throw();
    void initialize(Entry *, Entry *, Unknown *, unsigned int);
};

inline Enumerator::Enumerator() throw()
{
    references = 0;
    allocation = 0;
    end = 0;
    begin = 0;
    owner = 0;
    flags = 0;
    table = &enumeratorTable;
    module->table->lock(module);
}

extern "C" ULONG __stdcall connectionCookie(Connections *, Unknown **);
extern "C" HRESULT __stdcall queryObject(
    Enumerator *, const void *, const void *, void **);

HRESULT __stdcall createEnumerator(Source *source, void **result)
{
    if (!result)
        return (HRESULT)0x80004003L;

    *result = 0;
    Enumerator *enumerator;
    try {
        enumerator = new Enumerator;
    } catch (...) {
        return (HRESULT)0x8007000EL;
    }

    if (enumerator) {
        Connections *connections = &source->connections;
        Entry *entries;
        try {
            entries = new Entry[
                (int)((ULONG)(connections->data + connections->count) -
                      (ULONG)connections->data) / 4];
        } catch (...) {
            enumerator->table->destroy(enumerator, 1);
            return (HRESULT)0x8007000EL;
        }

        if (entries) {
            Entry *output = entries;
            for (Unknown **current = connections->data;
                 current < connections->data + connections->count;
                 ++current) {
                if (*current) {
                    (*current)->table->addRef(*current);
                    output->object = *current;
                    output->cookie = connectionCookie(connections, current);
                    ++output;
                }
            }

            enumerator->initialize(entries, output, 0, 2);
            HRESULT status = queryObject(
                enumerator, interfaceMap, interfaceId, result);
            if (status < 0)
                enumerator->table->destroy(enumerator, 1);
            return status;
        }

        enumerator->table->destroy(enumerator, 1);
    }
    return (HRESULT)0x8007000EL;
}
