// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Connection {
    void disconnect(void*);
};

struct Object {
    unsigned char padding[0xa4];
    Connection connection;
};

struct Shared {
    Object* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other) {
    Control* count = other.control;
    Object* value = other.object;
    object = value;
    control = count;
    if (count)
        _InterlockedExchangeAdd(&count->strong, 1);
}

inline Shared::~Shared() {
    if (control && _InterlockedDecrement(&control->strong) == 0) {
        control->dispose();
        if (_InterlockedDecrement(&control->weak) == 0)
            control->destroy();
    }
}

struct Vector {
    Vector** owner;
    unsigned long reserved;
    unsigned long allocator;
    Shared* first;
    Shared* last;
    Shared* limit;
};

struct Iterator {
    Vector** owner;
    Shared* position;

    Vector* container() const;
    Iterator operator-(int) const;
    Shared& operator*() const;
};

inline Vector* Iterator::container() const {
    return owner ? *owner : 0;
}

inline Iterator Iterator::operator-(int amount) const {
    Iterator result = *this;
    if (!result.owner)
        _invalid_parameter_noinfo();
    if (result.position - amount > result.container()->last ||
        result.position - amount < result.container()->first)
        _invalid_parameter_noinfo();
    result.position -= amount;
    return result;
}

inline Shared& Iterator::operator*() const {
    if (!owner)
        _invalid_parameter_noinfo();
    if (position >= container()->last)
        _invalid_parameter_noinfo();
    return *position;
}

struct Storage {
    Vector* vector;
    Vector** write();
    Vector* const& read() const;
    unsigned long size() const;
    Iterator end() const;
};

inline Vector* const& Storage::read() const {
    return vector;
}

inline unsigned long Storage::size() const {
    Vector* value = read();
    return static_cast<unsigned long>(value->last - value->first);
}

inline Iterator Storage::end() const {
    Vector* value = read();
    Shared* position = value->last;
    if (value->first > position)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = value->owner;
    result.position = position;
    return result;
}

struct Selection {
    unsigned char padding[0x150];
    unsigned long connection;
    Storage storage;

    void notify(Shared);
    void clear();
};

extern void __cdecl destroy_range(Shared*, Shared*, void*, Selection*);

void Selection::clear() {
    while (storage.size() > 0) {
        Shared selected(*(storage.end() - 1));

        Vector* vector = *storage.write();
        if (vector->last - vector->first) {
            Shared* last = vector->last;
            destroy_range(last - 1, last, &vector->allocator, this);
            --vector->last;
        }

        selected.object->connection.disconnect(&connection);
        notify(selected);
    }
}
