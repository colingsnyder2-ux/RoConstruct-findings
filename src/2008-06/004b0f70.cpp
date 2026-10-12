// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct S;
struct Buffer;

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Item {
    virtual void unused();
    virtual void write(Buffer*);
};

struct Shared {
    Item* object;
    Control* control;

    __forceinline Shared(Item* p, Control* c) : object(p), control(c) {
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
    }

    __forceinline ~Shared() {
        if (control && _InterlockedExchangeAdd(&control->strong, -1) == 0) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
                control->destroy();
        }
    }
};

struct Node {
    Node* next;
    Node* previous;
    Item* object;
    Control* control;
};

struct List;

struct Iterator {
    List** owner;
    Node* node;
};

struct List {
    List** proxy;
    unsigned char padding[16];
    Node* head;
    unsigned int count;

    Iterator erase(Iterator);

    __forceinline List* checkedOwner() {
        if (proxy)
            return *proxy;
        _invalid_parameter_noinfo();
        return 0;
    }
};

struct Guard {
    unsigned char storage[24];
    Guard(void*, int);
    ~Guard();
};

struct Buffer {
    int bits;
    unsigned char storage[272];
    unsigned int limit;
};

struct Stream {
    unsigned char prefix[8];
    Buffer buffer;
    bool result;
    unsigned char tail[3];

    Stream(S*, unsigned int);
    ~Stream();
};

void __cdecl putByte(Buffer*, unsigned char);

struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual bool ready();

    unsigned char prefix[0x2c70];
    List pending;
    unsigned char middle[0x98];
    void* context;
    unsigned char suffix[0x24];
    unsigned int parameter;

    bool f();
};

bool S::f() {
    if (!ready())
        return false;

    Guard guard(context, 0);
    Stream stream(this, parameter);

    if (pending.count > 0) {
        List& list = pending;
        do {
            Node* node = list.head->next;
            if (node == list.checkedOwner()->head)
                _invalid_parameter_noinfo();

            Shared item(node->object, node->control);
            if (item.object) {
                if (static_cast<unsigned int>((stream.buffer.bits + 7) >> 3)
                    >= stream.buffer.limit)
                    break;

                if (!stream.buffer.bits)
                    putByte(&stream.buffer, 78);

                item.object->write(&stream.buffer);
                stream.result = true;
            }

            Iterator position;
            position.owner = list.proxy;
            position.node = list.head->next;
            list.erase(position);
        } while (pending.count > 0);
    }

    return stream.result;
}
