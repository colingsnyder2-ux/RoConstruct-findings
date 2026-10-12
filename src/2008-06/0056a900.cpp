// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *invalidParameter)();
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Count {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Link {
    void* owner;
    void* data;
    void (__cdecl *cleanup)(void*);
};

struct SharedLink {
    Link* pointer;
    Count* count;
    ~SharedLink();
};

inline SharedLink::~SharedLink()
{
    if (count) {
        Count* p = count;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Connection {
    void* unused;
    Link* pointer;
    Count* count;
    bool disconnected;
    ~Connection();
    SharedLink get() const;
};

struct ScopedConnection {
    void* unused;
    Link* pointer;
    Count* count;
    bool disconnected;
    unsigned int state;
    ScopedConnection(const Connection&);
    ~ScopedConnection();
    Connection release();
};

struct Node {
    char padding[20];
    bool removed;
};

struct List {
    char padding[20];
    Node* end;
};

struct Iterator {
    List** proxy;
    Node* node;
    Iterator();
};

inline Iterator::Iterator() : proxy(0), node(0) {}

struct Record {
    unsigned int first;
    unsigned int second;
    unsigned int third;
    unsigned int fourth;
    Iterator iterator;
    bool valid;
    Record();
};

inline Record::Record()
    : first(0), second(0), third(0), fourth(0), iterator(), valid(false)
{
}

struct RecordOwner {
    Record* pointer;
    explicit RecordOwner(Record*);
    ~RecordOwner();
};

inline RecordOwner::RecordOwner(Record* p) : pointer(p) {}

inline RecordOwner::~RecordOwner()
{
    if (pointer)
        delete pointer;
}

struct ConnectionObject {
    char padding[24];
    Connection connection;
};

struct SharedConnection {
    ConnectionObject* pointer;
    Count* count;
    ~SharedConnection();
};

inline SharedConnection::~SharedConnection()
{
    if (count) {
        Count* p = count;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct SlotMap {
    Record insert(void*, const Connection&, void*, int);
};

void __cdecl cleanupRecord(void*);

struct S {
    char padding[8];
    SlotMap slots;
    Connection connect(void*, void*, SharedConnection, int);
};

Connection S::connect(void* slot, void* group, SharedConnection connection,
                      int position)
{
    connection.pointer->connection.disconnected = false;
    ScopedConnection guard(connection.pointer->connection);
    RecordOwner owned(new Record);
    Record* record = owned.pointer;

    Record result = slots.insert(group, connection.pointer->connection,
                                 slot, position);

    record->valid = result.valid;
    record->first = result.first;
    record->second = result.second;
    record->third = result.third;
    record->fourth = result.fourth;
    if (record->valid) {
        record->iterator.proxy = result.iterator.proxy;
        record->iterator.node = result.iterator.node;
    }

    connection.pointer->connection.get().pointer->owner = this;
    (connection.pointer->connection.get().pointer->data = record,
     owned.pointer = 0);
    connection.pointer->connection.get().pointer->cleanup = cleanupRecord;

    void (__cdecl *invalid)() = invalidParameter;
    if (!result.iterator.proxy)
        invalid();

    List* list = result.iterator.proxy ? *result.iterator.proxy : 0;
    if (result.iterator.node == list->end)
        invalid();

    result.iterator.node->removed = true;
    return guard.release();
}
