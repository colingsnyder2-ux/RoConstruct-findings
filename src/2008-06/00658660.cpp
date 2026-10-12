// from server: 90% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    } data;
    unsigned int length;
    unsigned int capacity;

    ~String();
    const char* c_str() const;
    String& operator=(const char*);
};

extern void (__thiscall *destroyString)(String*);
extern String& (__thiscall *assignString)(String*, const char*);

inline String::~String()
{
    destroyString(this);
}

inline const char* String::c_str() const
{
    const char* result = data.pointer;
    if (capacity < 16)
        result = data.buffer;
    return result;
}

inline String& String::operator=(const char* value)
{
    return assignString(this, value);
}

struct Input {
    char storage[140];

    Input(const char*, int, int);
    ~Input();
};

extern void (__thiscall *constructInput)(Input*, const char*, int, int, int);
extern void (__thiscall *destroyInput)(Input*);

inline Input::Input(const char* path, int mode, int protection)
{
    constructInput(this, path, mode, protection, 1);
}

inline Input::~Input()
{
    destroyInput(this);
}

struct Document {
    ~Document();
};

struct Owner {
    Document* pointer;

    explicit Owner(Document*);
    ~Owner();
    Document* release();
};

inline Owner::Owner(Document* value) : pointer(value)
{
}

inline Owner::~Owner()
{
    Document* value = pointer;
    if (value) {
        value->~Document();
        operator delete(value);
    }
}

inline Document* Owner::release()
{
    Document* value = pointer;
    pointer = 0;
    return value;
}

struct Parser {
    char storage[72];

    explicit Parser(void*);
    ~Parser();
    Owner parse();
};

struct Node {
    char prefix[24];
    String name;

    Node();
    ~Node();
};

struct S {
    Node* root;

    String path();
    void attach(Node*, Document*);
    void f();
};

void S::f()
{
    String filename = path();
    Input input(filename.c_str(), 33, 64);
    Parser parser(input.storage + 8);
    Owner document(parser.parse().release());

    Node* replacement = new Node;
    Node* old = root;
    root = replacement;
    if (old) {
        old->~Node();
        operator delete(old);
    }

    root->name = "ROOT";
    attach(root, document.pointer);
}
