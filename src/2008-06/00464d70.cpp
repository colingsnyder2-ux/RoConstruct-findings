// from server: 78% by king_originala
struct EventData;

struct Listener
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void dispatch(int, int) = 0;

    void prepare(EventData*);
};

struct EventData
{
    int field0;
    int argument;
    int field8;
    Listener* listener;
    int value;

    void invoke();
};

void EventData::invoke()
{
    if (listener)
    {
        try
        {
            listener->prepare(this);
            listener->dispatch(argument, value);
        }
        catch (...)
        {
            listener = 0;
        }
    }
}
