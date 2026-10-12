// from server: 95% by king_originala
struct String;
extern void (__thiscall *string_construct)(String *, const char *);
extern void (__cdecl *invalid_parameter_noinfo)();

struct String {
    unsigned int proxy;
    char storage[16];
    unsigned int length;
    unsigned int capacity;

    String(const char *text);
    ~String();
};

inline String::String(const char *text) {
    string_construct(this, text);
}

struct Exception {
    virtual ~Exception();
    char *message;
    int owned;
};

struct RuntimeError : Exception {
    String text;
    RuntimeError(const String &);
    ~RuntimeError();
};

struct Change {
    void unplay();
};

struct Node {
    Node *next;
    Node *previous;
    Change *value;
};

struct Iterator {
    void *owner;
    Node *node;

    Change **dereference();
    void decrement();
    bool equal(const Iterator &) const;
};

inline bool Iterator::equal(const Iterator &other) const {
    if (!owner || owner != other.owner)
        invalid_parameter_noinfo();
    return node == other.node;
}

struct RestoreFlag {
    bool *flag;
    bool previous;

    RestoreFlag(bool &);
    ~RestoreFlag();
};

inline RestoreFlag::RestoreFlag(bool &value)
    : flag(&value), previous(value) {
    value = true;
}

inline RestoreFlag::~RestoreFlag() {
    *flag = previous;
}

struct S {
    char padding0[0x138];
    void *owner;
    char padding1[0x10];
    Node **head;
    char padding2[4];
    Iterator saved;
    Iterator current;
    bool playing;
    bool enabled;

    void unplay();
};

void S::unplay() {
    if (playing)
        throw RuntimeError(String("ChangeHistoryService is currently playing"));

    if (!enabled)
        throw RuntimeError(String("ChangeHistoryService is disabled"));

    Iterator first;
    first.node = *head;
    first.owner = owner;

    if (current.equal(first))
        throw RuntimeError(String("Attempt to unplay before the change history"));

    RestoreFlag restore(playing);
    (*current.dereference())->unplay();
    saved = current;
    current.decrement();
}
