// from server: 99% by king_originala
struct String;

extern "C" bool (__cdecl *equal_strings)(const String &, const String &);
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Entry {
    void *object;
    void *control;
};

struct Children {
    char padding[12];
    Entry *first;
    Entry *last;
};

struct S {
    char padding[0x108];
    Children *children;

    void *f(const String &name);
};

void *S::f(const String &name)
{
    Children *p = children;
    if (!p)
        return 0;

    unsigned int i = 0;
    if (i < (unsigned int)(p->last - p->first)) {
        bool (__cdecl *compare)(const String &, const String &) = equal_strings;
        do {
            if (i >= (unsigned int)(p->last - p->first))
                invalid_parameter_noinfo();

            const String &childName = *reinterpret_cast<const String *>(
                static_cast<char *>(p->first[i].object) + 0x110);

            if (compare(childName, name)) {
                if (i >= (unsigned int)(p->last - p->first))
                    invalid_parameter_noinfo();
                return p->first[i].object;
            }

            ++i;
        } while (i < (unsigned int)(p->last - p->first));
    }

    return 0;
}
