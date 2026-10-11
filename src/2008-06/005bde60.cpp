// from server: 69% by tester




extern "C" bool __cdecl string_equals(const char* a, const char* b);

struct StringConverterBool
{
    bool __cdecl convertToValue(const char* text, bool& value);
};

bool StringConverterBool::convertToValue(const char* text, bool& value)
{
    if (string_equals(text, "true") ||
        string_equals(text, "True") ||
        string_equals(text, "TRUE"))
    {
        value = true;
        return true;
    }

    if (string_equals(text, "false") ||
        string_equals(text, "False") ||
        string_equals(text, "FALSE"))
    {
        value = false;
        return true;
    }

    return false;
}
