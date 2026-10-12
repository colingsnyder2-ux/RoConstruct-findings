// from server: 90% by king_originala
extern "C" {
extern long (__stdcall *InterlockedIncrement)(long*);
extern long (__stdcall *InterlockedDecrement)(long*);
}

extern const float minimumValue;

struct Model;
struct Services;
struct Part;
struct Callback;

struct __declspec(novtable) Listener {
    virtual void notify() = 0;
};

struct ListenerList {
    void attach(Listener*);
};

struct Model {
    char prefix[0x14];
    char event;
    char padding[0x18b];
    ListenerList listeners;
    char listenerPadding[0x24];
    int mode;
};

struct Reference {
    Part* value;
    Reference(Part*);
    ~Reference();
};

struct Service {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void insert(const Reference&, int) = 0;
};

struct Services {
    void* unused;
    Service* service;
};

struct ModelReference {
    Model* value;
};

struct ConnectionResult {
    char storage[16];
    ~ConnectionResult();
};

struct Connection {
    int unused;
    void* first;
    void* second;
    bool flag;
    char padding[3];
    bool otherFlag;
    char trailing[3];

    Connection()
        : first(0), second(0), flag(false), otherFlag(false) {}
    ~Connection();
    Connection& operator=(const ConnectionResult&);
};

struct Function {
    char storage[40];
    Function(const Callback&);
    ~Function();
};

struct Dispatcher {
    ConnectionResult connect(void*, const Function&, int);
};

extern Dispatcher dispatcher;

struct Base {
    virtual ~Base();
    long references;
    char prefix[12];
    float value;
    char remaining[0xc0];

    Base(float, const ModelReference&, const Services&);
    void release();
};

struct Part : Base, Listener {
    Connection connection;

    Part(const ModelReference&, const Services&);
    virtual void notify();
    void callback();
    void update();
    void finish();
};

struct Callback {
    void (Part::*method)();
    Part* object;
};

inline Reference::Reference(Part* p) : value(p)
{
    InterlockedIncrement(&p->references);
}

inline Reference::~Reference()
{
    if (value && InterlockedDecrement(&value->references) == 0) {
        value->release();
        if (value)
            delete value;
    }
}

Part::Part(const ModelReference& model, const Services& services)
    : Base(0.0f, model, services), connection()
{
    if (model.value->mode == 0) {
        services.service->insert(Reference(this), 1);
        if (value < 1.0)
            value = 0.0f;
    } else {
        if (value < minimumValue)
            value = minimumValue;
    }

    if (model.value)
        model.value->listeners.attach(this);

    Callback callbackData;
    callbackData.method = &Part::callback;
    callbackData.object = this;

    {
        Function function(callbackData);
        connection = dispatcher.connect(
            model.value ? &model.value->event : 0, function, 10);
    }

    update();
    finish();
}
