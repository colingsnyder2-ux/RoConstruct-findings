// from server: 83% by king_originala
extern "C" long (__stdcall * const InterlockedDecrement)(volatile long *);

struct ControlBlock {
    virtual ~ControlBlock();
    volatile long references;
    void dispose();
};

struct Reference {
    ControlBlock *pointer;
    ~Reference();
};

inline Reference::~Reference()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->dispose();
            delete pointer;
        }
        pointer = 0;
    }
}

struct String {
    unsigned char storage[28];
    ~String();
};

extern void (__thiscall * const destroyString)(String *);

inline String::~String()
{
    destroyString(this);
}

namespace Ogre {
    struct TexturePtr {
        virtual ~TexturePtr();
        unsigned char storage[4];
    };
}

extern void (__thiscall * const destroyTexturePtr)(Ogre::TexturePtr *);

inline Ogre::TexturePtr::~TexturePtr()
{
    destroyTexturePtr(this);
}

struct Root {
    virtual ~Root();
};

inline Root::~Root()
{
}

struct Base : Root {
    unsigned char padding[8];
    String name;
    virtual ~Base();
};

inline Base::~Base()
{
}

struct TextureProxy : Base {
    unsigned char padding28[8];
    Reference reference30;
    unsigned char padding34[12];
    Reference reference40;
    Reference reference44;
    unsigned char padding48[12];
    Ogre::TexturePtr texture;
    virtual ~TextureProxy();
};

TextureProxy::~TextureProxy()
{
}
