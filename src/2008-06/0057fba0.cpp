// from server: 78% by king_originala
extern "C" void* __cdecl cast_object(void*, long, const void*, const void*, int);
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

extern const char instance_type;
extern const char pvinstance_type;

struct Iterator {
    void* owner;
    void** position;
};

struct Selection {
    void* owner;
    unsigned char reserved[8];
    void** first;
    void** last;

    void insert(void* const*);
    Iterator erase(Iterator);
};

struct Change {
    void* added;
    void* reserved;
    void* removed;
};

struct FilteredSelection {
    unsigned char reserved[12];
    Selection selection;

    void update(Change*);
};

void FilteredSelection::update(Change* argument)
{
    Selection* s = reinterpret_cast<Selection*>(this);
    Change* change = *static_cast<Change* volatile*>(&argument);

    argument = static_cast<Change*>(
        cast_object(change->added, 0, &instance_type, &pvinstance_type, 0));

    if (argument)
        reinterpret_cast<Selection*>(
            reinterpret_cast<char*>(s) + 12)->insert(
                reinterpret_cast<void* const*>(&argument));

    change = static_cast<Change*>(change->removed);
    argument = change;
    if (change) {
        s = reinterpret_cast<Selection*>(reinterpret_cast<char*>(s) + 12);

        void** finish = s->last;
        if (s->first > finish)
            _invalid_parameter_noinfo();

        change = reinterpret_cast<Change*>(s->first);
        if (reinterpret_cast<void**>(change) > s->last)
            _invalid_parameter_noinfo();

        Iterator position;
        position.owner = s->owner;
        *static_cast<void*** volatile>(&position.position) =
            reinterpret_cast<void**>(change);

        while (reinterpret_cast<void**>(change) != finish) {
            if (*reinterpret_cast<void**>(change) ==
                *reinterpret_cast<void* volatile*>(&argument))
                break;
            change = reinterpret_cast<Change*>(
                reinterpret_cast<char*>(change) + 4);
        }

        finish = s->last;
        if (s->first > finish)
            _invalid_parameter_noinfo();

        void* owner = *static_cast<void* volatile*>(&s->owner);
        if (!position.owner || position.owner != owner)
            _invalid_parameter_noinfo();

        if (reinterpret_cast<void**>(change) != finish) {
            position.position = reinterpret_cast<void**>(change);
            s->erase(position);
        }
    }
}
