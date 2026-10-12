// from server: 83% by king_originala
struct PartInstance;

struct PhysicsService {
    void f(PartInstance* x, PartInstance* y);
};

struct StateHolder {
    char padding[0x18];
    int* state;
};

struct Primitive {
    char padding[0x24];
    StateHolder* holder;
};

struct Interface {
    virtual void reserved() = 0;
    virtual bool enabled() = 0;
};

struct PartInstance {
    char padding0[0x58];
    PhysicsService* service;
    Primitive* primitive;
    char padding1[0x44];
    Interface* interfaceObject;
};

void __cdecl func_005e74c0(PartInstance* x, PartInstance* y)
{
    Primitive* first = x->primitive;
    Primitive* second = y->primitive;

    if (x->interfaceObject->enabled()) {
        int* state;
        if (((state = first->holder->state) != 0 &&
             (*state == 3 || *state == 1 || *state == 2)) ||
            ((state = second->holder->state) != 0 &&
             (*state == 3 || *state == 1 || *state == 2))) {
            x->service->f(x, y);
        }
    }
}
