// from server: 3% by colin
struct String {
    char storage[32];
    String();
    String(const String &);
    ~String();
};

extern "C" void __stdcall invalid_parameter_noinfo();
extern "C" void *__cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void *);

struct Node {
    Node *next;
    Node *prev;
    int refcount;
    String key;
    void *value;
};

struct Map {
    Node *head;
    unsigned int size;
    void insert(void *);
};

struct S {
    char pad[0x170];
    int lock;
    char pad2[4];
    Map map;
    void *field_0x68;

    void * __cdecl method(void *arg);
};

void *S::method(void *arg) {
    if (arg == 0)
        return 0;

    // lock
    lock = 1;

    // lookup
    Node *found = 0;
    // ... complex logic omitted
    return found;
}
