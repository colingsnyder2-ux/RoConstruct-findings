// from server: 81% by king_originala
extern "C" void __cdecl free(void*);

struct Entry {
    struct Table {
        void* slot0;
        void* slot1;
        unsigned long (__stdcall *release)(Entry*);
    };
    Table* table;
};

struct Storage {
    int field0;
    Entry** entries;
    int count;
    ~Storage();
};

struct CBrowserView : Storage {
    ~CBrowserView();
};

inline Storage::~Storage() {
    if (count > 0)
        free(entries);
}

CBrowserView::~CBrowserView() {
    for (Entry** p = entries; p < entries + count; ++p) {
        Entry* entry = *p;
        if (entry)
            entry->table->release(entry);
    }
}
