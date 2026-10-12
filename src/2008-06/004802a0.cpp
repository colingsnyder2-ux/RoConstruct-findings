// from server: 73% by king_originala
struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

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

    if (!*reinterpret_cast<bool*>(0x96f7ad) && node == 0) {
        beginAssertion();
        bool terminate =
            *reinterpret_cast<AssertionHandler*>(0x94278c) &&
            (*reinterpret_cast<AssertionHandler*>(0x94278c))(
                "n != NULL",
                String(""),
                "d:\\Roblox\\Releases\\2008.06.17\\Client\\Rendering\\g3d\\include\\G3D/Table.h",
                533,
                reinterpret_cast<bool*>(0x96f7ad),
                true);
        if (terminate)
            exit(-1);
        endAssertion();
    }

    Node* previous = 0;
    do {
        if (node->hash == hash && node->key == key) {
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

    if (!*reinterpret_cast<bool*>(0x96f7ac)) {
        beginAssertion();
        bool terminate =
            *reinterpret_cast<AssertionHandler*>(0x94278c) &&
            (*reinterpret_cast<AssertionHandler*>(0x94278c))(
                "false",
                String(""),
                "d:\\Roblox\\Releases\\2008.06.17\\Client\\Rendering\\g3d\\include\\G3D/Table.h",
                557,
                reinterpret_cast<bool*>(0x96f7ac),
                true);
        if (terminate)
            exit(-1);
        endAssertion();
    }
}
