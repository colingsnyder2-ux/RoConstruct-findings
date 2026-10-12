// from server: 84% by king_originala
struct String
{
    const char* c_str() const;
};

struct Object
{
    unsigned char unknown[4];
    String name;
};

struct Item
{
    unsigned char unknown[4];
    Object* object;
};

extern int __fastcall G1_func_00433500(const Item*);
extern "C" int __cdecl strcmp(const char*, const char*);

int __stdcall func_004335d0(const Item* first, const Item* second, long)
{
    int a = G1_func_00433500(first);
    int b = G1_func_00433500(second);

    if (a != b)
        return a - b;

    const char* secondName = second->object->name.c_str();
    const char* firstName = first->object->name.c_str();
    return strcmp(firstName, secondName);
}
