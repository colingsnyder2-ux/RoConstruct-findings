// from server: 96% by king_originala
struct Node
{
    Node *next;
};

struct Object
{
    char padding[0x290];
    Node link;
};

struct Flag
{
    bool value;
};

struct Table
{
    unsigned count;
    unsigned padding[2];
    Node **data;
    int f(int);
};

struct Receiver
{
    unsigned padding[2];
    Table table;
    unsigned padding2[2];
    unsigned first;

    bool insert(Object *);
    bool prepare(Object *, Node ***, Flag);
    void remove(Object *);
    bool accept(Object *);
};

extern "C" unsigned __cdecl hashObject(Object *);

bool Receiver::insert(Object *object)
{
    Node *node = object ? &object->link : 0;
    Node *next = node->next;
    Node *previous = next;
    while (previous->next != node)
        previous = previous->next;
    previous->next = next;

    Flag flag;
    try
    {
        unsigned bucket = hashObject(object) % table.count;
        Node **data = table.data;
        Node **position = data + bucket;
        flag.value = false;

        if (!prepare(object, &position, flag))
        {
            unsigned index = first;
            for (;;)
            {
                if (data[index] != reinterpret_cast<Node *>(data + index))
                {
                    first = index;
                    remove(object);
                    return false;
                }
                ++index;
            }
        }

        try
        {
            try
            {
                if (accept(object))
                {
                    Node *entry = object ? &object->link : 0;
                    entry->next = *position;
                    *position = entry;

                    unsigned index = first;
                    if (index > bucket)
                        first = bucket;
                    else if (index < bucket)
                        first = table.f(index);
                    return true;
                }
            }
            catch (...)
            {
                throw;
            }
        }
        catch (...)
        {
            remove(0);
            throw;
        }

        unsigned index = first;
        for (;;)
        {
            if (table.data[index] !=
                reinterpret_cast<Node *>(table.data + index))
            {
                first = index;
                return false;
            }
            ++index;
        }
    }
    catch (...)
    {
        throw;
    }
}
