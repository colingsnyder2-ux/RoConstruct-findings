// from server: 92% by king_originala
struct Interface;

struct VTable {
    long (__stdcall *query)(Interface *, const void *, void **);
    unsigned long (__stdcall *addRef)(Interface *);
    unsigned long (__stdcall *release)(Interface *);
};

struct Interface {
    VTable *vtable;
};

struct Object {
    unsigned long reserved;
    unsigned long flags;
    long check();
};

extern "C" long __stdcall update(Object *object, const void *iid,
                                unsigned long mask, unsigned long value)
{
    Object *original = object;
    Interface *base = object
        ? reinterpret_cast<Interface *>(reinterpret_cast<char *>(object) - 8)
        : 0;

    if (base->vtable->query(base, iid, reinterpret_cast<void **>(&object)) < 0)
        return 0x80004002L;

    Interface *result = reinterpret_cast<Interface *>(object);
    result->vtable->release(result);

    if (mask & 0xFFFFFFFEUL)
        return 0x80004005L;

    long status = original->check();
    if (status == 0) {
        original->flags = (original->flags & ~mask) | (mask & value);
        return 0;
    }
    return status;
}
