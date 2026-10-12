// from server: 98% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern "C" char *(__thiscall *string_pointer)(void *);

struct String {
    char padding[20];
    unsigned int size;
};

struct S {
    String *owner;
    char *position;
    S &operator+=(int offset);
};

S &S::operator+=(int offset)
{
    if (owner != reinterpret_cast<String *>(-4)) {
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        if (!owner)
            invalid();

        String *s = owner;
        if (position + offset > string_pointer(s) + s->size ||
            position + offset < string_pointer(s))
            invalid();
    }

    position += offset;
    return *this;
}
