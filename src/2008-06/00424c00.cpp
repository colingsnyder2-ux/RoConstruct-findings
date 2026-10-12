// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Argument {
    void* object;
    Control* control;
    Argument(const Shared&);
    ~Argument();
};

__forceinline Argument::Argument(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

__forceinline Argument::~Argument()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Guard {
    unsigned int data[3];
    Guard(Argument);
    ~Guard();
};

struct String {
    unsigned char data[28];
};

extern bool (__cdecl *compare)(const String&, const String&);
extern int __cdecl image(int);

struct Payload {
    unsigned char padding[0x110];
    String text;
};

struct Node;

struct Navigation {
    virtual void unused();
    virtual unsigned int next(unsigned int, int);
};

#define SLOT(n) virtual void slot##n() = 0;
#define TEN(n) SLOT(n##0) SLOT(n##1) SLOT(n##2) SLOT(n##3) SLOT(n##4) \
               SLOT(n##5) SLOT(n##6) SLOT(n##7) SLOT(n##8) SLOT(n##9)

struct Tree {
    TEN(0)
    TEN(1)
    TEN(2)
    TEN(3)
    TEN(4)
    TEN(5)
    TEN(6)
    TEN(7)
    SLOT(80)
    SLOT(81)
    SLOT(82)
    SLOT(83)
    SLOT(84)
    virtual Shared get() = 0;

    unsigned char padding0[0x1c];
    void* window;
    unsigned char padding1[0x30];
    Navigation navigation;

    Node* lookup(unsigned int);
};

#undef TEN
#undef SLOT

struct Insert {
    unsigned int parent;
    unsigned int after;
    unsigned int mask;
    unsigned int item;
    unsigned int state;
    unsigned int stateMask;
    char* text;
    int textLength;
    int image;
    int selectedImage;
    int children;
    Node* parameter;
    unsigned int extension[4];
};

struct Node {
    unsigned char padding0[0x0c];
    Payload* payload;
    unsigned char padding1[0x48];
    Tree* tree;
    Node* parent;
    unsigned char padding2[0x20];
    unsigned int item;
    int priority;
    int imageIndex;

    int f();
};

int Node::f()
{
    Insert insertion;
    insertion.text = reinterpret_cast<char*>(-1);
    insertion.children = -1;
    insertion.mask = 0x67;
    insertion.image = insertion.selectedImage = image(imageIndex);
    insertion.parameter = this;
    insertion.parent = parent ? parent->item : 0xffff0000;

    unsigned int after = 0xffff0001;
    unsigned int current =
        SendMessageA(tree->window, 0x110a, 4, insertion.parent);

    while (current) {
        Node* other = tree->lookup(current);
        if (priority > other->priority) {
            after = current;
        } else {
            if (priority != other->priority)
                break;

            Guard guard(tree->get());
            if (!compare(payload->text, other->payload->text))
                break;
            after = current;
        }

        Navigation* navigation = &tree->navigation;
        current = navigation->next(current, 1);
    }

    insertion.after = after;
    Tree* owner = tree;
    return SendMessageA(owner->window, 0x1100, 0,
                        reinterpret_cast<long>(&insertion));
}
