// from server: 95% by colin
void __cdecl alignedFree(void*);

extern bool flag1;
extern bool flag2;

struct Dispatch
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void notify(void*);
};

struct Secondary
{
    int padding;
    Dispatch* dispatch;
};

struct Owner
{
    char padding0[0x1a0];
    Dispatch dispatch;
    char padding1[0x20c];
    Secondary* secondary;
};

struct Message
{
    void notify(void*);
};

struct Buffer
{
    void* data;
    int size;
    int capacity;
    bool flag;
    bool enabled;

    Buffer()
    {
        size = 0;
        capacity = 0;
        data = 0;
        flag = false;
        enabled = true;
    }

    ~Buffer() { alignedFree(data); }

    void notify(void*);
};

struct S
{
    char padding0[0x204];
    Owner* owner;
    char padding1[0x28];
    bool disabled;
    char padding2[0x1f];
    int count;
    char padding3[5];
    bool active;

    void* getObject();
    void collect(Buffer&);
    void notify(void*);
};

void S::notify(void* argument)
{
    if (active)
    {
        ++count;
        if (argument)
        {
            owner->dispatch.notify(argument);

            void* object = getObject();
            if (object)
                reinterpret_cast<Message*>(
                    static_cast<char*>(object) + 0x138)->notify(argument);

            if (!disabled)
                owner->secondary->dispatch->notify(argument);

            if (flag1 && flag2)
            {
                Buffer buffer;
                collect(buffer);
                buffer.notify(argument);
            }
        }
    }
}
