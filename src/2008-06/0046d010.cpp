// from server: 57% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct MapNode
{
    MapNode *left;
    MapNode *parent;
    MapNode *right;
    int color;
    int value;
    int key;
};

struct Map
{
    MapNode *header;
    int size;
};

struct ColorMap
{
    char pad[0x3c];
    Map map;

    int lookup(int key);
};

struct MapHelper
{
    void findNode(MapNode **out, int *keyPtr);
};

extern void (__thiscall *findNodeFn)(MapHelper *, MapNode **, int *);

int ColorMap::lookup(int key)
{
    MapNode *result;
    findNodeFn((MapHelper *)&map, &result, &key);

    MapNode *header = map.header;
    MapNode *end = header->parent;
    MapNode *node = result;

    if (node == 0 || node == header)
    {
        _invalid_parameter_noinfo();
    }

    if (node != end)
    {
        if (node == 0)
        {
            _invalid_parameter_noinfo();
        }
        while (node != header->parent)
        {
            _invalid_parameter_noinfo();
            node = node->left;
        }
        return node->value;
    }
    return 0;
}
