// from server: 50% by king_originala
struct Guid {
    unsigned long a;
    unsigned short b, c;
    unsigned char d[8];
};

extern const Guid unknownId;
extern const Guid identityId;

struct Object;

struct ObjectVTable {
    long (__stdcall *QueryInterface)(Object*, const Guid&, void**);
    unsigned long (__stdcall *AddRef)(Object*);
    unsigned long (__stdcall *Release)(Object*);
    long (__stdcall *IsEqualObject)(Object*, Object*);
};

struct Object {
    ObjectVTable* vtable;
};

struct ObjectPtr {
    Object* p;
    ObjectPtr(Object* value = 0);
    ~ObjectPtr();
};

__forceinline ObjectPtr::ObjectPtr(Object* value) : p(value) {
    if (p)
        p->vtable->AddRef(p);
}

__forceinline ObjectPtr::~ObjectPtr() {
    if (p)
        p->vtable->Release(p);
}

bool __cdecl equalObjects(Object* first, Object* second) {
    ObjectPtr a;
    ObjectPtr b;
    ObjectPtr identity;

    if (first == second)
        return true;

    if (!first || !second)
        return false;

    first->vtable->QueryInterface(
        first, unknownId, reinterpret_cast<void**>(&a.p));
    second->vtable->QueryInterface(
        second, unknownId, reinterpret_cast<void**>(&b.p));

    if (a.p == b.p)
        return true;

    if (a.p && b.p) {
        if (a.p->vtable->QueryInterface(
                a.p, identityId, reinterpret_cast<void**>(&identity.p)) >= 0) {
            if (!identity.p)
                return false;
            if (identity.p->vtable->IsEqualObject(identity.p, b.p) == 0)
                return true;
        }
    }

    return false;
}
