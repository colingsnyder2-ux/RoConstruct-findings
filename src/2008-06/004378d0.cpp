// from server: 86% by king_originala
extern const char formatString[];
extern int (__cdecl *formatPrint)(char*, const char*, ...);

struct Text;
extern Text* (__thiscall *constructText)(Text*, const char*);

struct Text
{
    char* data;
    Text(const char*, const int* volatile&);
    Text(const Text&);
};

inline Text::Text(const char* s, const int* volatile& slot)
{
    slot = reinterpret_cast<const int*>(this);
    constructText(this, s);
}

struct Item
{
    typedef void (__thiscall *Setter)(Item*, Text);

    struct Table
    {
        void* unused[24];
        Setter set;
    };

    Table* table;
    void update(const int* volatile value);
};

void Item::update(const int* volatile value)
{
    char buffer[32];
    formatPrint(buffer, formatString, *value);
    table->set(this, Text(buffer, value));
}
