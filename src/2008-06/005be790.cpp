// from server: 83% by king_originala
struct String
{
    char storage[20];
    unsigned int length;
    unsigned int capacity;
};

extern bool (__cdecl *equalString)(const String&, const char*);
extern const float* infinityValue;
extern const float* nanValue;
extern float __cdecl parseFloat(const String&);

bool __cdecl stringToFloat(const String& text, float& result)
{
    if (!text.length)
        return false;

    if (equalString(text, "INF"))
    {
        result = *infinityValue;
        return true;
    }

    if (equalString(text, "-INF"))
    {
        result = -*infinityValue;
        return true;
    }

    if (equalString(text, "NAN"))
    {
        result = *nanValue;
        return true;
    }

    try
    {
        result = parseFloat(text);
        return true;
    }
    catch (...)
    {
        return false;
    }
}
