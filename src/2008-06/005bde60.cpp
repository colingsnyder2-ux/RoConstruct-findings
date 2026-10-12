// from server: 89% by king_originala
struct String;
extern bool (__cdecl *string_equals)(const String&, const char*);

struct StringConverterBool
{
    static bool __cdecl convertToValue(const String& text, bool& value);
};

bool __cdecl StringConverterBool::convertToValue(const String& text, bool& value)
{
    bool (__cdecl *equals)(const String&, const char*) = string_equals;

    if (equals(text, "true") ||
        equals(text, "True") ||
        equals(text, "TRUE"))
    {
        value = true;
        return true;
    }

    if (equals(text, "false") ||
        equals(text, "False") ||
        equals(text, "FALSE"))
    {
        value = false;
        return true;
    }

    return false;
}
