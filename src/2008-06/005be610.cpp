// from server: 97% by king_originala
struct S
{
    unsigned char padding[20];
    void* volatile value;
};

extern int __cdecl process(S* object);

bool __cdecl getValue(S* object, int* result)
{
    if (object->value)
    {
        try
        {
            *result = process(object);
            return true;
        }
        catch (...)
        {
        }
    }
    return false;
}
