// from server: 92% by king_originala
struct Interface;

struct InterfaceTable {
    long (__stdcall *query)(Interface *, const void *, void **);
    unsigned long (__stdcall *addRef)(Interface *);
    unsigned long (__stdcall *release)(Interface *);
};

struct Interface {
    InterfaceTable *table;
};

struct Owner {
    char padding[20];
    Interface interfaceValue;
};

struct S {
    unsigned long reserved;
    unsigned long flags;

    long check();
};

long __stdcall setOptions(S *object, const void *id,
                         unsigned long mask, unsigned long enabled)
{
    S *original = object;
    Owner *owner = object
        ? reinterpret_cast<Owner *>(reinterpret_cast<char *>(object) - 4)
        : 0;

    long result = owner->interfaceValue.table->query(
        &owner->interfaceValue, id, reinterpret_cast<void **>(&object));

    if (result < 0)
        return (long)0x80004002;

    Interface *queried = reinterpret_cast<Interface *>(object);
    queried->table->release(queried);

    if (mask & 0xfffffffeUL)
        return (long)0x80004005;

    result = original->check();
    if (result == 0) {
        original->flags = (original->flags & ~mask) | (mask & enabled);
        return 0;
    }
    return result;
}
