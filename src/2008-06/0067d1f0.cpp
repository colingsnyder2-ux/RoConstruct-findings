// from server: 83% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);

namespace Ogre {
    struct Primary {
        virtual ~Primary();
    };

    struct Secondary {
        virtual ~Secondary();
        unsigned char reserved[0xc0];
    };

    struct Tertiary {
        virtual ~Tertiary();
        unsigned char reserved0[0x108];
        bool enabled;
        unsigned char reserved1[0x9f];
        unsigned int value;
        bool flag0;
        unsigned char reserved2;
        bool flag1;
        unsigned char reserved3;
    };

    struct Entity : Primary, Secondary, Tertiary {
        Entity();
        virtual ~Entity();
    };

    struct AxisAlignedBox {
        unsigned char storage[0x20];
        AxisAlignedBox();
        ~AxisAlignedBox();
    };
}

extern float initialValue;

struct RbxEntity : Ogre::Entity {
    struct List {
        struct Node {
            List* owner;
            Node(List*);
        };

        Node* head;
        unsigned int reserved[2];
        unsigned int count;
        unsigned int first;
        unsigned int last;

        List();
    };

    Ogre::AxisAlignedBox box;
    float scale;
    unsigned int identifier;
    List list;

    RbxEntity();
    virtual ~RbxEntity();
};

inline RbxEntity::List::Node::Node(List* p)
    : owner(p)
{
}

inline RbxEntity::List::List()
{
    head = new Node(this);
    count = 0;
    first = 0;
    last = 0;
}

RbxEntity::RbxEntity()
{
    scale = initialValue;
    enabled = true;
    value = 0;
    flag0 = true;
    flag1 = true;
    identifier = 0x378;
}
