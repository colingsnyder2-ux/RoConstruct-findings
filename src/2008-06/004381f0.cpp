// from server: 91% by king_originala
struct String {
    char* data;

    String(const char*);
    String(const String&);
    ~String();
    int Compare(const char*) const;
};

extern int __cdecl ConvertColor(String);

struct Item;

typedef void (__thiscall *SetColorFunction)(Item*, int);

struct ItemTable {
    void* reserved[57];
    SetColorFunction setColor;
};

struct Item {
    ItemTable* table;
    char padding[0x108];
    int color;

    void SetValue(String);
    void Update(String);
};

void Item::Update(String value)
{
    if (value.Compare(">Authoring") != 0) {
        table->setColor(this, ConvertColor(value));
    } else {
        color = -1;
        SetValue(String(">Authoring"));
    }
}
