// from server: 92% by king_originala
struct String;

extern unsigned (__thiscall *string_find)(
    const String *, const char *, unsigned, unsigned);

bool is_http_url(const String *value)
{
    if (string_find(value, "http://", 0, 7) == 0)
        return true;
    return string_find(value, "https://", 0, 8) == 0;
}
