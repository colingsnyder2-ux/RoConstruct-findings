// from server: 83% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Text
{
    unsigned char data[4];
    Text();
    ~Text();
    bool empty() const;
    const char* c_str() const;
};

extern void (__thiscall *text_construct)(Text*);
extern void (__thiscall *text_destroy)(Text*);
extern bool (__thiscall *text_empty)(const Text*);
extern const char* (__thiscall *text_data)(const Text*);

__forceinline Text::Text()
{
    text_construct(this);
}

__forceinline Text::~Text()
{
    text_destroy(this);
}

__forceinline bool Text::empty() const
{
    return text_empty(this);
}

__forceinline const char* Text::c_str() const
{
    return text_data(this);
}

struct String
{
    unsigned int allocator;
    union
    {
        char buffer[16];
        char* pointer;
    };
    unsigned int size;
    unsigned int capacity;

    String(const char*);
    ~String();
};

extern void (__thiscall *string_construct)(void*, const char*);
extern void (__thiscall *string_destroy)(void*);

__forceinline String::String(const char* value)
{
    string_construct(this, value);
}

__forceinline String::~String()
{
    string_destroy(this);
}

struct Control
{
    unsigned int unused;
    volatile long references;
};

struct Shared
{
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& value)
{
    pointer = value.pointer;
    control = value.control;
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

struct Guard
{
    void* pointer;
    Control* control;
    unsigned int state;

    Guard(Shared);
    ~Guard();
};

struct Receiver
{
    void send(String);
};

struct Widget
{
    void close();
};

extern int close_value;

struct ChatEnter
{
    unsigned char padding[136];
    Widget* widget;
    unsigned char padding2[16];
    Shared shared;
    Receiver* receiver;

    void key(int, int, int);
    void other();
    void close(int);
    void getText(Text*);
};

void ChatEnter::key(int key, int, int)
{
    switch (key)
    {
    default:
        other();
        return;
    case 27:
        close(close_value);
        widget->close();
        return;
    case 13:
        break;
    }

    Text text;
    getText(&text);
    if (receiver && !text.empty())
    {
        try
        {
            {
                Guard guard(shared);
                receiver->send(text.c_str());
            }
            close(close_value);
        }
        catch (...)
        {
            other();
        }
    }
}
