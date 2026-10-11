// from server: 57% by atomic.potato
extern "C" void basic_string_ctor(void *, const char *);

struct S
{
    S(void *);
};

S::S(void *value)
{
    char local[28];
    basic_string_ctor(local, "FilteredSelection");
    ((void (__thiscall *)(void *, void *))0x57e730)(this, local);
    *(void **)this = (void *)0x830890;
    (void)value;
}
