// from server: 77% by king_originala
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
    Change* change = argument;

    argument = static_cast<Change*>(
        cast_object(change->added, 0, &instance_type, &pvinstance_type, 0));

    if (argument)
        reinterpret_cast<Selection*>(
            reinterpret_cast<char*>(s) + 12)->insert(
                reinterpret_cast<void* const*>(&argument));

    argument = static_cast<Change*>(change->removed);
    if (argument) {
        s = reinterpret_cast<Selection*>(reinterpret_cast<char*>(s) + 12);

        void** finish = s->last;
        if (s->first > finish)
            _invalid_parameter_noinfo();

        void** current = s->first;
        if (current > s->last)
            _invalid_parameter_noinfo();

        Iterator position;
        position.owner = s->owner;
        *static_cast<void*** volatile>(&position.position) = current;

        while (current != finish) {
            if (*current == *reinterpret_cast<void* volatile*>(&argument))
                break;
            ++current;
        }

        finish = s->last;
        if (s->first > finish)
            _invalid_parameter_noinfo();

        void* owner = *static_cast<void* volatile*>(&s->owner);
        if (!position.owner || position.owner != owner)
            _invalid_parameter_noinfo();

        if (current != finish) {
            position.position = current;
            s->erase(position);
        }
    }
}
