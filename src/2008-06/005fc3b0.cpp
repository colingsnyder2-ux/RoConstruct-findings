// from server: 88% by king_originala
struct Signal {
    char data[32];
    void disconnect(void*);
};

struct Object {
    char pad0[36];
    Signal signal24;
    Signal signal44;
    Signal signal64;
    Signal signal84;
};

struct ObjectPtr {
    Object* ptr;
    void* control;
    void reset();
};

struct Connection {
    int value;
    void disconnect(ObjectPtr&, Signal Object::*);
};

__forceinline void Connection::disconnect(ObjectPtr& object, Signal Object::* signal)
{
    Object* p = *reinterpret_cast<Object* volatile*>(&object.ptr);
    if (p)
        (p->*signal).disconnect(this);
}

struct S {
    char pad0[360];
    Connection connection168;
    Connection connection16c;
    Connection connection170;
    Connection connection174;
    char pad178[8];
    ObjectPtr object180;
    char pad188[16];
    ObjectPtr object198;

    void update1();
    void update2();
    void f();
};

void S::f()
{
    if (object198.ptr) {
        connection170.disconnect(object198, &Object::signal64);
        connection174.disconnect(object198, &Object::signal84);
        object198.reset();
    }

    update1();
    update2();

    if (object180.ptr) {
        object180.ptr->signal24.disconnect(&connection168);
        connection16c.disconnect(object180, &Object::signal44);
        object180.reset();
    }
}
