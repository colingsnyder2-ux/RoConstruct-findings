// from server: 49% by king_originala
extern "C" void* __cdecl cast_object(void*, long, const void*, const void*, int);
extern "C" void (__cdecl* invalid_parameter_noinfo)();

extern char instance_type;
extern char part_type;

struct Iterator
{
    void* owner;
    void** current;
};

struct Selection
{
    void* owner;
    unsigned int reserved[2];
    void** first;
    void** last;

    void insert(void* const*);
    Iterator* erase(Iterator*, void*, void**);
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
    argument = static_cast<Argument*>(
        cast_object(original->object, 0, &instance_type, &part_type, 0));

    if (argument)
        selection.insert(reinterpret_cast<void* const*>(&argument));

    argument = static_cast<Argument*>(original->removed);
    if (argument)
    {
        void** finish = selection.last;
        if (selection.first > finish)
            invalid_parameter_noinfo();

        void** current = selection.first;
        if (current > selection.last)
            invalid_parameter_noinfo();

        void* owner = selection.owner;
        Iterator position;
        position.owner = owner;
        position.current = current;

        while (current != finish)
        {
            if (*current == argument)
                break;
            ++current;
        }

        finish = selection.last;
        if (selection.first > finish)
            invalid_parameter_noinfo();

        if (!owner || owner != selection.owner)
            invalid_parameter_noinfo();

        if (current != finish)
            selection.erase(&position, owner, current);
    }
}
