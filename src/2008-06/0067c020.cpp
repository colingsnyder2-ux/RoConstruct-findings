// from server: 94% by king_originala
struct Mutex {
    int value;
    unsigned char flag;
    int count;
    void acquire();
    void f();
};

struct GlobalState {
    char padding[36];
    Mutex mutex;
};

extern GlobalState *globalState;
extern int initializationFlag;
extern void __cdecl initializeCallback();
extern void __cdecl initialize(void (__cdecl *)(), int *);

struct ScopedLock {
    Mutex *mutex;
    bool held;
    ScopedLock(Mutex *);
    ~ScopedLock();
};

inline ScopedLock::ScopedLock(Mutex *p) : mutex(p), held(false)
{
    mutex->acquire();
    held = true;
}

inline ScopedLock::~ScopedLock()
{
    if (held)
        mutex->f();
}

namespace Ogre {
    struct HardwareIndexBuffer {
        virtual void slot0() = 0;
        virtual void slot1() = 0;
        virtual void slot2() = 0;
        virtual void slot3() = 0;
        virtual void slot4() = 0;
        virtual void slot5() = 0;
        virtual void writeData(unsigned int, unsigned int, const void *, bool) = 0;

        unsigned int size;
    };

    struct HardwareIndexBufferSharedPtr;
}

extern void (__thiscall *destroyIndexBuffer)(
    Ogre::HardwareIndexBufferSharedPtr *);
extern Ogre::HardwareIndexBufferSharedPtr &(__thiscall *assignIndexBuffer)(
    Ogre::HardwareIndexBufferSharedPtr *,
    const Ogre::HardwareIndexBufferSharedPtr &);

namespace Ogre {
    struct HardwareIndexBufferSharedPtr {
        void *vtable;
        HardwareIndexBuffer *pointer;
        unsigned int *references;
        ~HardwareIndexBufferSharedPtr();
    };

    struct HardwareBufferManager {
        virtual void slot0() = 0;
        virtual void slot1() = 0;
        virtual void slot2() = 0;
        virtual void slot3() = 0;
        virtual void slot4() = 0;
        virtual void slot5() = 0;
        virtual void slot6() = 0;
        virtual void slot7() = 0;
        virtual HardwareIndexBufferSharedPtr createIndexBuffer(
            int, unsigned int, int, bool) = 0;
    };

    struct IndexData : HardwareIndexBufferSharedPtr {
        unsigned int start;
        unsigned int count;
    };

    struct SubMesh {
        unsigned char useSharedVertices;
        char padding[11];
        IndexData *indexData;
    };

    struct Mesh;
}

inline Ogre::HardwareIndexBufferSharedPtr::~HardwareIndexBufferSharedPtr()
{
    destroyIndexBuffer(this);
}

extern Ogre::SubMesh *(__thiscall *createSubMesh)(Ogre::Mesh *);
extern Ogre::HardwareBufferManager &(__cdecl *getSingleton)();

struct MeshReference {
    void *vtable;
    Ogre::Mesh *pointer;
};

Ogre::SubMesh *__stdcall createIndices(
    const MeshReference &mesh,
    const void *primary,
    const void *fallback,
    unsigned int triangles)
{
    initialize(initializeCallback, &initializationFlag);
    ScopedLock lock(&globalState->mutex);

    Ogre::SubMesh *submesh = createSubMesh(mesh.pointer);
    unsigned int count = triangles * 3;

    Ogre::HardwareIndexBufferSharedPtr buffer =
        getSingleton().createIndexBuffer(primary == 0, count, 5, false);

    if (!primary)
        primary = fallback;

    unsigned int size = buffer.pointer->size;
    buffer.pointer->writeData(0, size, primary, true);
    submesh->useSharedVertices = 1;
    assignIndexBuffer(submesh->indexData, buffer);
    submesh->indexData->count = count;
    submesh->indexData->start = 0;
    return submesh;
}
