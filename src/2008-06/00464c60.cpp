// from server: 86% by colin
struct EventData;

struct Value
{
    void* first;
    void* second;

    Value(const Value& other);
    Value(void* a, void* b);
};

inline Value::Value(const Value& other)
{
    *this = other;
}

inline Value::Value(void* a, void* b)
{
    first = a;
    second = b;
}

struct Listener
{
    virtual void slot0();
    virtual void slot1();
    virtual void dispatch(void* source, Value value);
    void prepare(EventData* event);
};

struct EventData
{
    void* field0;
    void* source;
    void* field8;
    Listener* listener;
    Value value;

    void invoke();
    void finish();
};

void EventData::invoke()
{
    if (listener)
    {
        try
        {
            listener->prepare(this);
            Value temp(value.first, value.second);
            listener->dispatch(source, temp);
        }
        catch (...)
        {
        }
        finish();
    }
}
