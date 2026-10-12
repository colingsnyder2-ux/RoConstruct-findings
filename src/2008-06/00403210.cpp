// from server: 77% by king_originala
struct Guid {
    unsigned long a;
    unsigned short b, c;
    unsigned char d[8];
};

extern const Guid interfaceId;
extern const Guid firstServiceId;
extern const Guid firstInterfaceId;
extern const Guid secondServiceId;

struct Interface;

struct InterfaceTable {
    void *slots01[2];
    unsigned long (__stdcall *release)(Interface *);
    long (__stdcall *queryService)(Interface *, const Guid &, const Guid &, Interface **);
    long (__stdcall *queryInterface)(Interface *, const Guid &, Interface **);
    long (__stdcall *create)(Interface *, void *, void *, void *);
    void *slots06to29[24];
    long (__stdcall *get)(Interface *, void **);
};

struct Interface {
    InterfaceTable *table;
};

struct InterfacePtr {
    Interface *p;
    InterfacePtr();
    ~InterfacePtr();
};

inline InterfacePtr::InterfacePtr() : p(0) {}

inline InterfacePtr::~InterfacePtr() {
    if (p)
        p->table->release(p);
}

struct Owner {
    char padding[16];
    Interface interface;
};

struct Factory {
    long f(void **value, void *result);
};

long Factory::f(void **value, void *result) {
    InterfacePtr provider;
    Owner *owner = this
        ? reinterpret_cast<Owner *>(reinterpret_cast<char *>(this) - 8)
        : 0;

    long hr = owner->interface.table->queryInterface(
        &owner->interface, interfaceId, &provider.p);
    if (hr < 0)
        return hr;

    InterfacePtr first;
    long serviceResult = provider.p->table->queryService(
        provider.p, firstServiceId, firstInterfaceId, &first.p);

    if (serviceResult >= 0) {
        if (first.p->table->get(first.p, value) >= 0) {
            InterfacePtr second;
            serviceResult = provider.p->table->queryService(
                provider.p, secondServiceId, secondServiceId, &second.p);
            if (serviceResult < 0)
                return serviceResult;

            hr = second.p->table->create(second.p, *value, result, 0);
            if (hr < 0)
                return hr;

            return 0;
        }
    }

    return serviceResult;
}
