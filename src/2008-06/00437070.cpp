// from server: 98% by king_originala
extern "C" int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, long);
extern "C" void (__thiscall *destroyString)(void*);

struct String {
    unsigned char storage[28];
    ~String();
};

inline String::~String()
{
    destroyString(this);
}

struct Entry {
    unsigned int kind;
    String text;
    unsigned char remainder[12];
};

struct Queue {
    unsigned int reserved[4];
    Entry** blocks;
    unsigned int capacity;
    unsigned int start;
    unsigned int count;
    void append(const void*);
    void pop_front();
};

inline void Queue::pop_front()
{
    if (count != 0) {
        Entry* e = blocks[start];
        e->text.~String();
        ++start;
        if (capacity <= start)
            start = 0;
        if (--count == 0)
            start = 0;
    }
}

struct Mutex {
    void* handle;
    char flag;
    void lock();
    void unlock();
};

struct Guard {
    Mutex* mutex;
    bool locked;
    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* value) : mutex(value)
{
    mutex->lock();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

struct View {
    unsigned int reserved;
    Queue queue;
    Mutex mutex;
    void submit(Entry value);
};

void View::submit(Entry value)
{
    Guard guard(&mutex);

    if (queue.count == 0)
        PostMessageA(*(void**)((char*)this - 256), 0x465, 0, 0);

    queue.append((const char*)&value + 4);

    unsigned int n = queue.count;
    if (n > 250)
        queue.pop_front();
}
