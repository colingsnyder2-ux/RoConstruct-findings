// from server: 45% by atomic.potato
struct String
{
    String(const String&);
};

typedef void (*Function)(void*, void*);

extern "C" String* StringCopy(String*, const String&);
extern Function g_function;

struct S
{
    int f(String*);
};

int S::f(String* value)
{
    String* result = 0;
    void* object = 0;

    if (value != 0)
        object = (char*)value - 0x1c;

    object = (char*)object + *(int*)((char*)this + 0xc);
    result = ((String* (__thiscall *)(void*, void*))(*(int*)((char*)this + 8)))(object, 0);

    StringCopy((String*)value, *result);
    return (int)value;
}
