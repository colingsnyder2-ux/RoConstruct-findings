// from server: 78% by king_originala
struct Interface;

struct InterfaceTable {
    long (__stdcall *query)(Interface *, const void *, void **);
    unsigned long (__stdcall *addRef)(Interface *);
    unsigned long (__stdcall *release)(Interface *);
};

struct Interface {
    InterfaceTable *table;
};

struct Prefix {
    unsigned long word;
};

struct S {
    unsigned long word;
    unsigned long enabled;
    unsigned long padding[2];
    Interface interfaceMember;

    int check();
};

struct Object : Prefix, S {};

long __stdcall getOptions(S *object, const void *id,
                          unsigned long *supported,
                          unsigned long *enabled)
{
    S *original = object;
    Object *complete = static_cast<Object *>(object);

    if (!supported || !enabled)
        return (long)0x80004003UL;

    Interface *interfacePointer = &complete->interfaceMember;
    long result = interfacePointer->table->query(
        interfacePointer, id, reinterpret_cast<void **>(&object));

    if (result >= 0) {
        Interface *queried = reinterpret_cast<Interface *>(object);
        queried->table->release(queried);

        int disabled = original->check();
        *supported = 1;

        if (!disabled) {
            *enabled = original->enabled;
            return result;
        }
    } else {
        *supported = 0;
    }

    *enabled = 0;
    return result;
}
