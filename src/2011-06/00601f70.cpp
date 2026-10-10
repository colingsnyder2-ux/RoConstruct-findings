// from server: 66% by atomic.potato
typedef char* String;
extern "C" String StringCopy(String*, const String*);

struct TextDisplay
{
    char pad0[164];
    String m_text;
    String* f(String* value);
};

String* TextDisplay::f(String* value)
{
    String* destination = reinterpret_cast<String*>(reinterpret_cast<char*>(this) + 164);
    *destination = 0;
    StringCopy(destination, value);
    return value;
}
