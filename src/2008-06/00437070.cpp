// from server: 71% by king_originala
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, long);

struct String;
extern "C" void (__thiscall *destroy_string)(String*);

struct String {
    unsigned int data[7];
    ~String();
};

inline String::~String()
{
    destroy_string(this);
}

struct Record {
    unsigned int kind;
    String text;
    unsigned int extra[2];
};

struct Queue {
    unsigned int reserved[4];
    Record** blocks;
    unsigned int capacity;
    unsigned int start;
    unsigned int count;
    void append(const void*);
};

struct Lock {
    void* object;
    char type;
    void enter();
    void leave();
};

struct Guard {
    Lock* lock;
    bool active;
    Guard(Lock*);
    ~Guard();
};

inline Guard::Guard(Lock* p) : lock(p)
{
    lock->enter();
    active = true;
}

inline Guard::~Guard()
{
    if (active)
        lock->leave();
}

struct CStandardOutputView {
    unsigned int reserved;
    Queue queue;
    Lock lock;
    void output(unsigned int, Record);
};

void CStandardOutputView::output(unsigned int, Record value)
{
    Guard guard(&lock);

    if (queue.count == 0)
        PostMessageA(*(void**)((char*)this - 0x100), 0x465, 0, 0);

    queue.append(&value);

    if (queue.count > 250) {
        if (queue.count != 0) {
            queue.blocks[queue.start]->text.~String();
            ++queue.start;
            if (queue.start >= queue.capacity)
                queue.start = 0;
            if (--queue.count == 0)
                queue.start = 0;
        }
    }
}
