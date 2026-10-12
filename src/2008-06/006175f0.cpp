// from server: 71% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Instance;
struct Provider;

struct Input {
    char padding[8];
    Instance* instance;
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct ControlHolder {
    Control* control;
    void assign(const ControlHolder*);
};

struct Shared {
    Provider* object;
    ControlHolder holder;
    Shared& operator=(const Shared&);
    ~Shared();
};

__forceinline Shared& Shared::operator=(const Shared& other)
{
    object = other.object;
    holder.assign(&other.holder);
    return *this;
}

__forceinline Shared::~Shared()
{
    if (holder.control) {
        Control* p = holder.control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Listener {
    void insert(Instance* const*);
};

struct Entry {
    Instance* object;
    Control* control;
};

struct Sequence;

struct Proxy {
    Sequence* owner;
};

struct Sequence {
    Proxy* proxy;
    char padding[8];
    Entry* first;
    Entry* last;
    Entry* limit;
};

struct Provider {
    char padding[0x154];
    Sequence* sequence;
    void connect(void*);
};

extern Provider* __cdecl func_00421cb0(Instance*);
extern Shared __cdecl resolve(Provider*);

struct Selection {
    char padding[0x130];
    void* connection;
    Shared selected;
    Listener listener;
    void initialize(Input*);
    void update(Input*);
};

void Selection::update(Input* input)
{
    initialize(input);
    if (selected.object)
        return;

    selected = resolve(func_00421cb0(input->instance));

    if (!selected.object)
        return;

    Sequence* sequence = selected.object->sequence;
    Entry* current = sequence->first;
    if (current > sequence->last)
        _invalid_parameter_noinfo();
    Proxy* proxy = sequence->proxy;

    for (;;) {
        sequence = selected.object->sequence;
        Entry* end = sequence->last;
        if (sequence->first > end)
            _invalid_parameter_noinfo();

        Proxy* endProxy = sequence->proxy;
        void (__cdecl* invalid)() = _invalid_parameter_noinfo;
        if (!proxy || proxy != endProxy)
            invalid();

        if (current == end)
            break;

        if (!proxy)
            invalid();
        Sequence* owner = proxy ? proxy->owner : 0;
        if (current >= owner->last)
            invalid();

        Instance* object = current->object;
        if (object)
            listener.insert(&object);

        if (!proxy)
            invalid();
        owner = proxy ? proxy->owner : 0;
        if (current >= owner->last)
            invalid();
        ++current;
    }

    selected.object->connect(&connection);
}
