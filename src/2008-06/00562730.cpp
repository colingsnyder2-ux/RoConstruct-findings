// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Text;
struct Input;
struct Output;

extern void (__thiscall *copyText)(Text*, const Text&);
extern void (__thiscall *openInput)(Input*, const char*, int, int, int);
extern void (__thiscall *closeInput)(Input*);
extern void (__thiscall *openOutput)(Output*, int, int);
extern void (__thiscall *closeOutput)(Output*);
extern Text* (__thiscall *outputText)(const Output*, Text*);

struct Text {
    unsigned int unused;
    union {
        char local[16];
        char* heap;
    };
    unsigned int length;
    unsigned int capacity;

    Text(const Text&);
    Text(const Output&);
    const char* data() const;
};

inline Text::Text(const Text& other) {
    copyText(this, other);
}

inline Text::Text(const Output& output) {
    outputText(&output, this);
}

inline const char* Text::data() const {
    if (capacity >= 16)
        return heap;
    return local;
}

struct Key {
    Text text;
    unsigned int tag;
    Key(const Key&);
};

inline Key::Key(const Key& other)
    : text(other.text), tag(other.tag) {
}

struct Input {
    char storage[148];
    Input(const char*, int, int);
    ~Input();
};

inline Input::Input(const char* name, int mode, int protection) {
    openInput(this, name, mode, protection, 1);
}

inline Input::~Input() {
    closeInput(this);
}

struct Output {
    char storage[128];
    Output(int);
    ~Output();
};

inline Output::Output(int mode) {
    openOutput(this, mode, 1);
}

inline Output::~Output() {
    closeOutput(this);
}

struct Mutex {
    void* handle;
    bool kind;
    void lock();
    void unlock();
};

struct Guard {
    Mutex* mutex;
    bool locked;
    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* value) : mutex(value) {
    mutex->lock();
    locked = true;
}

inline Guard::~Guard() {
    if (locked)
        mutex->unlock();
}

struct Counter {
    void* table;
    volatile long references;
};

struct Entry {
    Text* object;
    Counter* counter;
    Text* filename;
    void assign(Text*);
};

struct Result {
    Text* object;
    Counter* counter;
    Result();
    Result(const Entry&);
    ~Result();
};

inline Result::Result() : object(0), counter(0) {
}

inline Result::Result(const Entry& entry)
    : object(entry.object), counter(entry.counter) {
    if (counter)
        _InterlockedExchangeAdd(&counter->references, 1);
}

extern void __cdecl transfer(Input*, Output*, unsigned int);
extern void* __cdecl operator new(unsigned int);
extern void __cdecl operator delete(void*);

struct S {
    char padding[0x170];
    Mutex mutex;
    Entry* find(Key, int, int);
    Result f(const Key&);
};

Result S::f(const Key& key) {
    Entry* entry = find(key, 1, 0);
    if (!entry)
        return Result();

    Guard guard(&mutex);
    if (!entry->object) {
        Input input(entry->filename->data(), 33, 64);
        Output output(2);
        transfer(&input, &output, 4096);
        entry->assign(new Text(output));
    }
    return Result(*entry);
}
