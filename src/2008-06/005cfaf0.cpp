// from server: 92% by king_originala
void* __cdecl operator new(unsigned int size);

struct Object {
    unsigned int unused;
    unsigned int first;
    unsigned int second;

    Object(unsigned int a, unsigned int b);
    virtual void virtualFunction();
};

inline Object::Object(unsigned int a, unsigned int b)
    : first(a), second(b)
{
}

Object** __cdecl makeObject(Object** result, unsigned int,
                           unsigned int first, unsigned int second)
{
    Object* volatile temporary = 0;
    *result = new Object(first, second);
    return result;
}
