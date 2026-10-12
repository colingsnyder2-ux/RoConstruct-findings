// from server: 87% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Value {
    void* object;
    Control* control;
    ~Value();
};

inline Value::~Value()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Iterator {
    void* owner;
    Value* position;
    Iterator operator+(unsigned int count) const;
};

struct S {
    void* owner;
    unsigned int padding[2];
    Value* first;
    Value* last;

    void insert(void* owner, Value* position, unsigned int count,
                const Value* value);
    Iterator* erase(Iterator* result, Iterator first, Iterator last);
    void resize(unsigned int count, Value value);
};

void S::resize(unsigned int count, Value value)
{
    Value* finish = last;
    Value* start = first;
    unsigned int size = static_cast<unsigned int>(finish - start);

    if (count > size) {
        if (start > finish)
            _invalid_parameter_noinfo();
        insert(owner, finish,
               count - static_cast<unsigned int>(last - first), &value);
    } else if (count < size) {
        if (start > finish)
            _invalid_parameter_noinfo();

        Iterator endIterator;
        endIterator.owner = owner;
        endIterator.position = finish;

        Value* beginPosition = first;
        if (beginPosition > last)
            _invalid_parameter_noinfo();

        Iterator beginIterator;
        beginIterator.owner = owner;
        beginIterator.position = beginPosition;

        Iterator result;
        erase(&result, beginIterator + count, endIterator);
    }
}
