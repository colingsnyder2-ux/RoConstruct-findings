// from server: 83% by colin
//

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
    Change* change = argument;
    void* added = change->added;

    void* result = cast_object(added, 0, &instance_type, &pvinstance_type, 0);
    if (result)
        this->selection.insert(&result);

    void* removed = change->removed;
    if (removed) {
        Selection* s = &this->selection;

        void** finish = s->last;
        if (s->first > finish)
            _invalid_parameter_noinfo();

        void** pos = s->first;
        if (pos > s->last)
            _invalid_parameter_noinfo();

        Iterator position;
        position.owner = s->owner;
        position.position = pos;

        while (pos != finish) {
            if (*pos == removed)
                break;
            pos++;
        }

        finish = s->last;
        if (s->first > finish)
            _invalid_parameter_noinfo();

        void* owner = s->owner;
        if (!position.owner || position.owner != owner)
            _invalid_parameter_noinfo();

        if (pos != finish) {
            position.position = pos;
            s->erase(position);
        }
    }
}
