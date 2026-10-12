// from server: 64% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* const invalid_parameter_noinfo)();

struct RefCount
{
    long unused;
    volatile long count;
};

struct Payload
{
    void* first;
    RefCount* firstCount;
    void* second;
    RefCount* secondCount;

    Payload(const Payload&) throw();
    ~Payload() throw();
};

inline Payload::Payload(const Payload& other) throw()
    : first(other.first), firstCount(other.firstCount)
{
    if (firstCount)
        _InterlockedExchangeAdd(&firstCount->count, 1);
    second = other.second;
    secondCount = other.secondCount;
    if (secondCount)
        _InterlockedExchangeAdd(&secondCount->count, 1);
}

struct Entry
{
    unsigned long unused0;
    void* key;
    unsigned long unused8;
    unsigned long unused12;
    Payload payload;

    void set(int) throw();
};

struct Owner
{
    unsigned long unused[4];
    Entry** end;
};

struct Proxy
{
    Owner* owner;
};

struct Iterator
{
    Proxy* proxy;
    Entry** position;

    bool equals(const Iterator&) const throw();
};

inline bool Iterator::equals(const Iterator& other) const throw()
{
    if (!proxy || proxy != other.proxy)
        invalid_parameter_noinfo();
    return position == other.position;
}

struct Listener
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual bool accept(void*, const Payload&, void*, const Payload&) throw();

    Proxy* proxy;
    unsigned long unused8;
    unsigned long unused12;
    Entry** begin;
    Entry** end;

    void append(void*, Payload) throw();
    void notify(void*, Payload) throw();
};

void Listener::notify(void* key, Payload value) throw()
{
    Entry** first = begin;
    if (first > end)
        invalid_parameter_noinfo();

    Iterator current;
    current.proxy = proxy;
    current.position = first;

    for (;;)
    {
        Iterator finish;
        finish.position = end;
        if (begin > finish.position)
            invalid_parameter_noinfo();
        finish.proxy = proxy;
        if (current.equals(finish))
        {
            append(key, value);
            return;
        }

        void (__cdecl* fail)() = invalid_parameter_noinfo;
        Owner* owner;
        if (!current.proxy)
        {
            fail();
            owner = 0;
        }
        else
            owner = current.proxy->owner;
        if (current.position >= owner->end)
            fail();

        if (!current.proxy)
        {
            fail();
            owner = 0;
        }
        else
            owner = current.proxy->owner;
        if (current.position >= owner->end)
            fail();

        Entry* entry = *current.position;
        void* selectedKey = key;
        void* entryKey = entry->key;
        const Payload* entryPayload = &entry->payload;
        if (accept(selectedKey, value, entryKey, *entryPayload))
        {
            void (__cdecl* failed)() = invalid_parameter_noinfo;
            if (!current.proxy)
            {
                failed();
                owner = 0;
            }
            else
                owner = current.proxy->owner;
            if (current.position >= owner->end)
                failed();

            if ((*current.position)->key != selectedKey)
            {
                Owner* finalOwner = reinterpret_cast<Owner*>(current.proxy);
                if (!current.proxy)
                    failed();
                else
                    finalOwner = current.proxy->owner;

                if (current.position >= finalOwner->end)
                    failed();
                (*current.position)->set(0);
            }
            return;
        }

        if (!current.proxy)
        {
            invalid_parameter_noinfo();
            owner = 0;
        }
        else
            owner = current.proxy->owner;
        if (current.position >= owner->end)
            invalid_parameter_noinfo();
        ++current.position;
    }
}
