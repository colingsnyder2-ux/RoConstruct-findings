// from server: 88% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const String&);
    ~String();
};

struct Player {
    char padding[0x1B1];
    bool disabled;
};

struct Message {
    String first;
    String text;
    Player* sender;
    unsigned int extra[3];

    Message(const Message&);
    ~Message();
};

struct Settings {
    char padding[0x134];
    unsigned int limit;
};

Settings* __cdecl getSettings();
extern float lifetime;

struct Owner {
    char padding[0x1A0];
    Player* player;
};

struct Filter {
    char storage[0x20];
    bool check(String);
};

struct Entry {
    char storage[0x48];
    bool flag;
    char padding[3];

    Entry(Player*, const String&, float);
};

struct Queue {
    char storage[0x1C];
    void append(Entry* const&);
};

struct Base {
    void removeOldest();
    bool command(Message);
};

struct S {
    char padding[0x0C];
    Owner* owner;
    Filter filter;
    Queue queue;
    unsigned int count;
    float time;

    void f(unsigned int, Message);
};

#pragma float_control(precise, off)

void S::f(unsigned int, Message message)
{
    unsigned int current = count;
    while (current > getSettings()->limit) {
        reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 0x144)->removeOldest();
        current = count;
    }

    if (message.text.length > 0) {
        const char* text = message.text.pointer;
        if (message.text.capacity < 16)
            text = message.text.buffer;
        if (text[0] == '/') {
            if (reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 0x144)->command(message) == true)
                return;
        }
    }

    Player* player = owner->player;
    if (player && player->disabled)
        return;

    bool accepted = filter.check(message.text);
    if (player && message.sender != player && accepted)
        return;

    Entry* entry;
    entry = new Entry(message.sender, message.text, time + lifetime);
    entry->flag = false;
    queue.append(entry);
}
