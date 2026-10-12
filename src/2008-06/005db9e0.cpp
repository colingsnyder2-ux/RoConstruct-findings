// from server: 88% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Signal {};

struct Listener {
    void notify(Signal**);
};

struct Node {
    char padding[0x228];
    Signal signal;
};

struct Vector;

struct Proxy {
    Vector* container;
};

struct Vector {
    Proxy* proxy;
    char padding[8];
    Node** first;
    Node** last;
    Node** limit;
};

struct Iterator {
    Node** position;
    Proxy* owner;

    Iterator(Node**, Proxy*);
    bool operator!=(const Iterator&) const;
};

inline Iterator::Iterator(Node** p, Proxy* o) : position(p), owner(o) {}

inline bool Iterator::operator!=(const Iterator& other) const {
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return position != other.position;
}

namespace RBX {
    struct Instance {
        virtual ~Instance();
        char padding[0x100];
        Instance* next;
    };

    struct ModelInstance : Instance {
        void visit(void (__cdecl* callback)(), Listener*);
    };

    struct ServiceProvider : Instance {
        char padding2[0x34];
        Vector children;
    };
}

RBX::ServiceProvider* __cdecl func_005db230(RBX::Instance*);
void __cdecl callback_005d9d10();

struct S {
    void f(Listener*);
};

void S::f(Listener* listener) {
    RBX::Instance* instance =
        reinterpret_cast<RBX::Instance*>(reinterpret_cast<char*>(this) - 0x14c);

    if (instance) {
        RBX::ModelInstance* model =
            dynamic_cast<RBX::ModelInstance*>(instance->next);
        if (model)
            model->visit(callback_005d9d10, listener);
    }

    RBX::ServiceProvider* provider = func_005db230(instance);
    if (provider) {
        Vector& children = provider->children;
        Node** first = children.first;
        if (first > children.last)
            _invalid_parameter_noinfo();

        Iterator current(first, children.proxy);
        for (;;) {
            Node** last = children.last;
            if (children.first > last)
                _invalid_parameter_noinfo();

            Iterator end(last, children.proxy);
            if (!(current != end))
                break;

            void (__cdecl *invalid)() = _invalid_parameter_noinfo;
            if (!current.owner)
                invalid();
            Vector* container = current.owner ? current.owner->container : 0;
            if (current.position >= container->last)
                invalid();

            Signal* signal =
                reinterpret_cast<Signal*>(
                    reinterpret_cast<char*>(*current.position) + 0x228);
            listener->notify(&signal);

            if (!current.owner)
                invalid();
            container = current.owner ? current.owner->container : 0;
            if (current.position >= container->last)
                invalid();
            ++current.position;
        }
    }
}
