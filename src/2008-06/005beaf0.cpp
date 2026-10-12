// from server: 93% by king_originala
struct String
{
    unsigned char storage[28];

    String(const String&);
    ~String();
    String& operator+=(const char*);
    String& operator+=(const String&);
};

extern String __cdecl formatFloat(const float&);
extern String __cdecl formatVector(const float*);
extern String& (__thiscall *appendText)(String*, const char*);
extern String& (__thiscall *appendString)(String*, const String&);
extern void (__thiscall *destroyString)(String*);

inline String::~String()
{
    destroyString(this);
}

inline String& String::operator+=(const char* text)
{
    return appendText(this, text);
}

inline String& String::operator+=(const String& text)
{
    return appendString(this, text);
}

String __cdecl serializeMatrix(const float* values)
{
    String result = formatVector(values + 9);
    int rows = 3;
    do
    {
        int columns = 3;
        do
        {
            result += " ";
            result += formatFloat(*values);
            ++values;
        } while (--columns);
    } while (--rows);
    return result;
}
