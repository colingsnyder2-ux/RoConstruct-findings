// from server: 43% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void __cdecl _invalid_parameter_noinfo();

struct ScriptItem;
struct Map;

struct VectorReference {
    ScriptItem* owner;
};

struct MapReference {
    Map* owner;
};

struct Node {
    unsigned char reserved[0x1c];
    char* first;
    char* last;
};

struct MapIterator {
    MapReference* reference;
    Node* node;
};

struct Map {
    MapReference* reference;
    unsigned char reserved[0x14];
    Node* sentinel;

    MapIterator find(const unsigned int& key);
};

struct PropertyItem {
    void SetHidden(int hidden);
};

struct ScriptItem {
    unsigned int reserved0;
    VectorReference* reference;
    unsigned int reserved1[2];
    unsigned int* first;
    unsigned int* last;

    void update(Map* map);
};

void ScriptItem::update(Map* map)
{
    if (!map)
        _invalid_parameter_noinfo();

    unsigned int* current = first;
    if (current > last)
        _invalid_parameter_noinfo();

    VectorReference* beginReference = reference;
    unsigned int* finish = last;

    if (first > finish)
        _invalid_parameter_noinfo();

    VectorReference* endReference = reference;

    for (;;) {
        if (!beginReference || beginReference != endReference)
            _invalid_parameter_noinfo();

        if (current == finish)
            break;

        ScriptItem* owner;
        if (!beginReference) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = beginReference->owner;
        }

        if (current >= owner->first)
            _invalid_parameter_noinfo();

        unsigned int key = *current;
        MapIterator found = map->find(key);
        Node* sentinel = map->sentinel;
        MapReference* expectedReference = map->reference;

        if (!found.reference || found.reference != expectedReference)
            _invalid_parameter_noinfo();

        if (found.node != sentinel) {
            Map* foundOwner;
            if (!found.reference) {
                _invalid_parameter_noinfo();
                foundOwner = 0;
            } else {
                foundOwner = found.reference->owner;
            }

            if (found.node == foundOwner->sentinel)
                _invalid_parameter_noinfo();

            if ((unsigned int)((found.node->last - found.node->first) >> 3) > 0) {
                ((PropertyItem*)((char*)this - 0x10c))->SetHidden(0);
                return;
            }
        }

        if (!beginReference) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = beginReference->owner;
        }

        if (current >= owner->first)
            _invalid_parameter_noinfo();

        ++current;
    }

    ((PropertyItem*)((char*)this - 0x10c))->SetHidden(1);
}
