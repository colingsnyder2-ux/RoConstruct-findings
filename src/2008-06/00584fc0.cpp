// from server: 81% by king_originala
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern unsigned char instanceType;
extern unsigned char modifierType;
extern void (__cdecl *invalidParameter)();

struct Iterator {
    void* owner;
    void** position;
};

struct ModifierVector {
    void* owner;
    unsigned char reserved[8];
    void** first;
    void** last;
    void** limit;

    Iterator erase(Iterator position);
};

inline Iterator findModifier(Iterator first, Iterator last, void* const& value)
{
    while (first.position != last.position && *first.position != value)
        ++first.position;
    return first;
}

struct ModelInstance {
    unsigned char reserved[0x1ec];
    ModifierVector modifiers;

    void removeModifier(void* instance);
};

void ModelInstance::removeModifier(void* instance)
{
    instance = __RTDynamicCast(instance, 0, &instanceType, &modifierType, 0);

    if (instance) {
        void** last = modifiers.last;
        void (__cdecl *invalid)() = invalidParameter;
        ModifierVector* vector = &modifiers;

        if (vector->first > last)
            invalid();

        Iterator end;
        end.owner = vector->owner;
        end.position = last;

        void** first = vector->first;
        if (first > vector->last)
            invalid();

        Iterator begin;
        begin.owner = vector->owner;
        begin.position = first;

        vector->erase(findModifier(begin, end, instance));
    }
}
