// from server: 86% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_viewdisconnect_1ed6133b773f4e34.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct Signal {
    void remove(void*);
};

struct Node {
    char padding[0x150];
    Signal first;
    char gap[0x1f];
    Signal second;
    Node* resolve();
};

typedef boost::shared_ptr<Node> Shared;

struct Guard {
    char storage[12];
    Guard(Shared);
    ~Guard();
};

struct Connection {
    virtual void reserved() = 0;
    virtual ~Connection();
};

struct S {
    char padding0[0xa0];
    int listener0;
    int listener1;
    int listener2;
    char padding1[0xc4];
    Shared model;
    char padding2[0x64];
    Connection* connection0;
    Connection* connection1;
    Connection* connection2;
    Connection* connection3;
    Connection* connection4;

    Shared get();
    void disconnect();
};

inline Node* resolve(const Shared& value) { return value.get() ? value->resolve() : 0; }

void S::disconnect() {
    Guard guard(model);

    Connection* old = connection0;
    connection0 = 0;
    if (old)
        delete old;

    old = connection1;
    connection1 = 0;
    if (old)
        delete old;

    old = connection2;
    connection2 = 0;
    if (old)
        delete old;

    old = connection3;
    connection3 = 0;
    if (old)
        delete old;

    old = connection4;
    connection4 = 0;
    if (old)
        delete old;

    void* listener = this ? &listener0 : 0;
    if (model.get())
        model.get()->first.remove(listener);

    listener = &listener1;
    if (model.get())
        model.get()->second.remove(listener);

    Node* node = resolve(get());

    if (node)
        node->first.remove(&listener2);
}
