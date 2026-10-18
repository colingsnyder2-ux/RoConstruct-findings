// from server: 55% by colin
extern "C" void* __cdecl cast_object(void*, long, const void*, const void*, int);
extern "C" void __cdecl invalid_parameter_noinfo();

extern char instance_type;
extern char part_type;

struct Selection
{
    void* owner;
    void** first;
    void** last;

    void insert(void* const*);
    void** erase(void**, void*, void**);
};

struct Argument
{
    void* object;
    unsigned int reserved;
    void* removed;
};

struct S
{
    unsigned int reserved[3];
    Selection selection;

    void update(Argument*);
};

void S::update(Argument* argument)
{
    Argument* original = argument;
    void* obj = cast_object(original->object, 0, &instance_type, &part_type, 0);

    if (obj)
        selection.insert(&obj);

    void* removed = original->removed;
    if (removed)
    {
        void** finish = selection.last;
        if (selection.first > finish)
            invalid_parameter_noinfo();

        void** current = selection.first;
        if (current > selection.last)
            invalid_parameter_noinfo();

        void* owner = selection.owner;

        while (current != finish)
        {
            if (*current == removed)
                break;
            ++current;
        }

        finish = selection.last;
        if (selection.first > finish)
            invalid_parameter_noinfo();

        if (!owner || owner != selection.owner)
            invalid_parameter_noinfo();

        if (current != finish)
            selection.erase(current, owner, current);
    }
}
