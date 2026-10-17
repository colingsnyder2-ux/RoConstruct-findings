// from server: 63% by colin
struct Base {
    virtual void vfunc();
    char padding[80];
    Base();
    ~Base();
};

struct MapNode {
    MapNode* left;
    MapNode* parent;
    MapNode* right;
    char pad[4];
    int value;
};

struct Map {
    MapNode* head;
    int size;
};

struct CRobloxDoc : Base {
    char pad0[0x74 - 4];
    int m_74;
    Map m_map;
    int m_90;
    int m_94;
    CRobloxDoc();
};

extern "C" void* __cdecl operator_new(unsigned int);

CRobloxDoc::CRobloxDoc()
{
    Base::Base();
    *(void**)this = (void*)0x817ce4;
    m_74 = 0;
    MapNode* node = (MapNode*)operator_new(4);
    if (node != 0) {
        node->left = (MapNode*)&m_map;
    } else {
        node = 0;
    }
    m_map.head = node;
    m_map.size = 0;
    m_90 = 0;
    m_94 = 0;
}
