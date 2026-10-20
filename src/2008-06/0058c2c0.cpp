// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_historyendctor_0c2f650a85faa6e2.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
struct S;

struct Record {
    char padding[0x24];
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > name;

    Record(S*);
    bool empty();
};

struct Iterator {
    void* owner;
    void* node;

    __forceinline Iterator(void* p, void* n) : owner(p), node(n) {}
    Iterator() {}
    Iterator& operator++();
};

struct History {
    void* owner;
    char padding[0x10];
    void* head;
    char tail[4];

    void append(Record**);
    __forceinline Iterator end() { return Iterator(owner, head); }
};

struct S {
    char padding[0x134];
    Record* current;
    History history;
    Iterator position;
    Iterator nextPosition;
    char reserved;
    bool enabled;

    void prepare();
    void commit(const char*);
};

void S::commit(const char* name)
{
    if (enabled) {
        prepare();
        if (current && !current->empty()) {
            current->name = name;
            history.append(&current);

            position = history.end();
            nextPosition = ++history.end();

            current = new Record(this);
        }
    }
}
