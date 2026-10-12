// from server: 69% by king_originala
struct EventData;

struct Value
{
    void* first;
    void* second;

    Value(const Value& other);
};

inline Value::Value(const Value& other)
    : first(other.first), second(other.second)
{
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
};

void EventData::invoke()
{
    if (listener)
    {
        try
        {
            listener->prepare(this);
            listener->dispatch(source, value);
        }
        catch (...)
        {
        }
    }
}
