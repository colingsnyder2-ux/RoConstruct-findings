// from server: 88% by atomic.potato
extern "C" void release_object(void *);

extern "C" void __cdecl process_value(void *);

void f(void *value)
{
    if (value != 0)
    {
        release_object((char *)value + 4);
        release_object(value);
        process_value(value);
    }
}
