// from server: 53% by king_originala
struct Iterator {
    void* owner;
    char* position;
};

struct String;

extern Iterator (__thiscall *string_begin)(String*);
extern Iterator (__thiscall *string_end)(String*);

struct Tag {};

extern Iterator __cdecl transform_range(
    char*, char*, Iterator, int, int, Tag);

void __cdecl process(String* string, int argument)
{
    transform_range(
        string_begin(string).position,
        string_end(string).position,
        string_begin(string),
        argument,
        argument,
        Tag());
}
