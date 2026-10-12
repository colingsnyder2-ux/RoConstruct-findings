// from server: 92% by king_originala
struct String;

extern void (__thiscall *copy_string)(String*, const String&);
extern void (__thiscall *destroy_string)(String*);

struct String
{
    char data[28];
    String(const String&);
    ~String();
};

__forceinline String::String(const String& other)
{
    copy_string(this, other);
}

__forceinline String::~String()
{
    destroy_string(this);
}

typedef int (__thiscall *Predicate)(void*, String);

String* __cdecl find_if(String* first, String* last,
                       Predicate volatile predicate, void* volatile context)
{
    for (; first != last; ++first)
    {
        int result;
        {
            String value(*first);
            result = predicate(context, value);
        }
        if (result)
            break;
    }
    return first;
}
