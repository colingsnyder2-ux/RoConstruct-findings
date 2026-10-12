// from server: 87% by king_originala
struct Selection {
    char reserved[12];
    void** begin;
    void** end;
};

struct Flag {
    bool value;
};

struct Signal {
    void notify(Flag value);
};

struct Owner {
    char reserved[0x344];
    Signal changed;
};

struct Transaction {
    char storage[44];
    Transaction(int mode, Selection* selection, Owner* owner);
    ~Transaction();
    void begin();
    void apply(void* item);
    void finish();
};

struct FilteredSelection {
    char reserved[12];
    Owner* owner;
    void update(void* item, Selection* selection);
};

void FilteredSelection::update(void* item, Selection* selection)
{
    if (selection->end - selection->begin != 0) {
        Transaction transaction(0, selection, owner);
        transaction.begin();
        transaction.apply(item);
        transaction.finish();
        Owner* current = owner;
        Flag flag;
        flag.value = false;
        current->changed.notify(flag);
    }
}
