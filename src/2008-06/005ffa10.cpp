// from server: 64% by king_originala
extern "C" int __cdecl sub_4898d0(int);
extern "C" bool __cdecl sub_495eb0(int, int);
extern "C" void* __cdecl sub_49aca0(void*);

struct Event
{
    int reserved;
    int oldValue;
    int newValue;
};

struct EventArgument
{
    Event* const value;
    ~EventArgument();
};

inline EventArgument::~EventArgument()
{
}

struct Signal
{
    void sub_4b5950(const EventArgument*);
};

struct Entry
{
    char padding[0x10];
    Signal signal;
};

struct Registry
{
    Entry* sub_56b620(void*);
};

extern Registry registry_97b6d4;
extern Registry registry_97b708;

struct Connection
{
    void sub_5a2730();
};

struct S
{
    char padding0[0x104];
    void* parent;
    char padding1[0xA4];
    Connection* connection;
    char padding2[0x14];
    int state;
    char padding3[0x38];
    int active;

    void sub_5ff900(int, int);
    void sub_55acc0(Event*);
    void sub_5fdb70();
    void sub_5ff750(int);
    void sub_5ffa10(EventArgument);
};

void S::sub_5ffa10(EventArgument argument)
{
    Event* event = argument.value;
    int previousState = state;
    int oldObject = sub_4898d0(event->oldValue);
    int newObject = sub_4898d0(event->newValue);

    if (oldObject)
    {
        if (sub_495eb0(oldObject, 1))
        {
            sub_5ff900(0, oldObject);
        }
        else
        {
            if (state == 6)
            {
                Entry* entry = registry_97b6d4.sub_56b620(
                    reinterpret_cast<char*>(this) + 0x14);
                if (entry)
                    entry->signal.sub_4b5950(&argument);
            }

            if (state >= 5)
            {
                Entry* entry = registry_97b708.sub_56b620(
                    reinterpret_cast<char*>(this) + 0x14);
                if (entry)
                    entry->signal.sub_4b5950(&argument);

                if (active)
                {
                    active = 0;
                    connection->sub_5a2730();
                    connection = 0;
                }
            }

            state = 0;
        }
    }

    sub_55acc0(event);

    if (newObject)
    {
        if (sub_495eb0(newObject, 1))
        {
            sub_5fdb70();
            return;
        }

        void* savedParent = parent;
        if (savedParent == sub_49aca0(this))
        {
            if (previousState >= 5)
                sub_5ff750(4);
            sub_5ff750(5);
        }
    }
}
