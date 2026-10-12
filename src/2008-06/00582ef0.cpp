// from server: 86% by king_originala
struct Entry {
    unsigned long first;
    unsigned long second;
};

struct Container {
    char padding[12];
    Entry* first;
    Entry* last;
};

struct Object {
    char padding[0x154];
    Container* container;
};

struct Handle {
    Object* get(int);
    char padding[12];
};

struct Query {
    void* cast(const void*);
};

struct Source {
    Query* get();
};

struct ControllerCommand {
    char padding[0x14];
    Handle handle;
    Source* source;
    bool execute();
};

bool ControllerCommand::execute()
{
    Container* container = handle.get(1)->container;
    if ((unsigned int)(container->last - container->first) <= 0)
        return false;

    if (source)
        return source->get()->cast((const void*)0x57d550) != 0;

    Query* query = 0;
    return query->cast((const void*)0x57d550) != 0;
}
