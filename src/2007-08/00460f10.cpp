// from server: 20% by colin
struct EventData {
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    void init(int a, int b);
    EventData(int a, int b, int c);
};

void EventData::init(int a, int b)
{
}

EventData::EventData(int a, int b, int c)
{
    vtable = (void*)0x794b94;
    field_4 = 0;
    field_8 = 0;
    field_c = a;
    field_10 = c;
    init(b, 0);
}
