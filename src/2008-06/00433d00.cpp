// from server: 95% by colin
struct Text
{
    unsigned int value;
    Text();
    ~Text();
    const char* data() const;
};

extern void (__thiscall* text_construct)(Text*);
extern void (__thiscall* text_destroy)(Text*);
extern const char* (__thiscall* text_data)(const Text*);
extern const char* (__thiscall* string_data)(const void*);
extern void (__cdecl* text_format)(Text*, const char*, ...);
extern const char format_string[];

inline Text::Text()
{
    text_construct(this);
}

inline Text::~Text()
{
    text_destroy(this);
}

inline const char* Text::data() const
{
    return text_data(this);
}

struct Item
{
    unsigned int reserved;
    char* object;
};

struct CObjectBrowser
{
    void* create(int, const char*, int, int, int, int, int,
                 unsigned int, unsigned int);
    void attach(void*, int, int, int, int, int, int, Item*);
    void func_00433d00(Item*);
};

void CObjectBrowser::func_00433d00(Item* item)
{
    Text text;
    char* obj = item->object;
    text_format(&text, format_string, string_data(obj + 4));
    void* control = create(35, text.data(), 9, 9, 0, 0, 0,
                           0xffff0000U, 0xffff0002U);
    attach(control, 4, 0, 0, 0, 0, 0, item);
}
