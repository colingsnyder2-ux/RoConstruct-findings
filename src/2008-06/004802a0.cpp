// from server: 96% by king_originala
struct String;

typedef void (__thiscall *StringConstructor)(String*, const char*);
typedef void (__thiscall *StringDestructor)(String*);

extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    stringConstructor(this, text);
}

inline String::~String()
{
    stringDestructor(this);
}

struct Node {
    unsigned hash;
    unsigned key;
    unsigned value;
    Node* next;
};

extern void __cdecl releaseNode(void*);
extern void __cdecl beginAssertion();
extern void __cdecl endAssertion();
extern "C" __declspec(noreturn) void __cdecl exit(int);

typedef bool (__cdecl *AssertionHandler)(
    const char*, const String&, const char*, int, bool*, bool);

extern AssertionHandler assertionHandler;
extern bool ignoreNull;
extern bool ignoreMissing;

struct Table {
    unsigned reserved;
    unsigned count;
    Node** buckets;
    unsigned bucketCount;

    void remove(const unsigned& key);
};

void Table::remove(const unsigned& key)
{
    unsigned hash = key;
    unsigned bucket = hash % bucketCount;
    Node* node = buckets[bucket];

    if (!ignoreNull && node == 0) {
        beginAssertion();
        bool terminate =
            assertionHandler &&
            assertionHandler(
                "n != NULL",
                String(""),
                "d:\\Roblox\\Releases\\2008.06.17\\Client\\Rendering\\g3d\\include\\G3D/Table.h",
                533, &ignoreNull, true);
        if (terminate)
            exit(-1);
        endAssertion();
    }

    Node* previous = 0;
    do {
        if (hash == node->hash && node->key == key) {
            if (previous == 0) {
                buckets[bucket] = node->next;
                releaseNode(node);
                --count;
                return;
            } else {
                previous->next = node->next;
                releaseNode(node);
                --count;
                return;
            }
        }
        previous = node;
        node = node->next;
    } while (node != 0);

    if (!ignoreMissing) {
        beginAssertion();
        bool terminate =
            assertionHandler &&
            assertionHandler(
                "false",
                String(""),
                "d:\\Roblox\\Releases\\2008.06.17\\Client\\Rendering\\g3d\\include\\G3D/Table.h",
                557, &ignoreMissing, true);
        if (terminate)
            exit(-1);
        endAssertion();
    }
}
