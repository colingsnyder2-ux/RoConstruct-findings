// from server: 86% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl sub_6A17C6(void*, int, int, int, int);

struct Entry {
    void* object;
    void* control;
};

struct Vector {
    Vector** owner;
    unsigned int reserved[2];
    Entry* begin;
    Entry* end;
};

struct Teams {
    unsigned char reserved[0x108];
    Vector* children;
    void* findHumanoid();
};

void* Teams::findHumanoid() {
    Vector* v = children;
    if (v) {
        Entry* last = v->end;
        void (__cdecl *bad)() = invalid_parameter_noinfo;
        if (v->begin > last)
            bad();
        Vector** lastOwner = v->owner;

        v = children;
        Entry* current = v->begin;
        if (current > v->end)
            bad();
        Vector** owner = v->owner;

        for (;;) {
            if (!owner || owner != lastOwner)
                bad();
            if (current == last)
                break;

            Vector* container = !owner
                ? (bad(), (Vector*)0)
                : *owner;
            if (current >= container->end)
                bad();

            void* result = sub_6A17C6(
                current->object, 0, 0x92907c, 0x9534e0, 0);
            if (result)
                return result;

            container = !owner
                ? (bad(), (Vector*)0)
                : *owner;
            if (current >= container->end)
                bad();
            ++current;
        }
    }
    return 0;
}
