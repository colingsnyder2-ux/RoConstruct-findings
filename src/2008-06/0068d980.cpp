// from server: 99% by king_originala
struct Text;
struct SharedBuffer;
struct Log;
struct MeshManager;
struct BufferManager;

extern void (__thiscall *textConstruct)(Text *, const char *);
extern void (__thiscall *textDestroy)(Text *);
extern Log &(__cdecl *getLog)();
extern void (__thiscall *writeLog)(Log *, const Text &, int, bool);
extern BufferManager &(__cdecl *getBuffers)();
extern SharedBuffer &(__thiscall *assignBuffer)(SharedBuffer *, const SharedBuffer &);
extern void (__thiscall *destroyBuffer)(SharedBuffer *);
extern MeshManager &(__cdecl *getMeshes)();
extern void (__thiscall *prepareMeshes)(MeshManager *, bool);
extern void (__cdecl *invalidParameter)();

struct Text {
    char storage[28];
    Text(const char *);
    ~Text();
};

inline Text::Text(const char *value)
{
    textConstruct(this, value);
}

inline Text::~Text()
{
    textDestroy(this);
}

struct SharedBuffer {
    void *vtable;
    void *buffer;
    unsigned *references;
    ~SharedBuffer();
    SharedBuffer &operator=(const SharedBuffer &);
};

inline SharedBuffer::~SharedBuffer()
{
    destroyBuffer(this);
}

inline SharedBuffer &SharedBuffer::operator=(const SharedBuffer &value)
{
    return assignBuffer(this, value);
}

struct BufferManager {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual SharedBuffer create(int, unsigned, int, bool);
};

struct Matrix {
    float values[16];
};

extern const Matrix *identity;

struct Object;
struct ObjectTable {
    void *unused0[86];
    void (__thiscall *setWorld)(Object *, bool, const Matrix *);
    void *unused1;
    void (__thiscall *setView)(Object *, bool, const Matrix *);
};

struct Object {
    ObjectTable *table;
};

struct Capabilities {
    char padding[8];
    unsigned flags;
};

struct Renderer {
    char padding[100];
    Capabilities *capabilities;
};

struct Scene;
struct SceneTable {
    void *unused0[9];
    void (__thiscall *clear)(Scene *);
    void *unused1[176];
    bool (__thiscall *stencil)(Scene *);
    bool (__thiscall *texture)(Scene *);
};

struct Scene {
    SceneTable *table;
    char padding0[48];
    Renderer *renderer;
    char padding1[0x89dc];
    int technique;
    char padding2[0x24];
    SharedBuffer shadowBuffer;
    unsigned shadowBufferSize;
    char padding3[0x58];
    Object **begin;
    Object **end;
    void setTechnique(int);
};

void Scene::setTechnique(int value)
{
    technique = value;

    if (table->stencil(this)) {
        if (!(renderer->capabilities->flags & 0x40)) {
            {
                Text message("WARNING: Stencil shadows were requested, but this device does not have a hardware stencil. Shadows disabled.");
                writeLog(&getLog(), message, 2, false);
            }
            technique = 0;
        } else if (!shadowBuffer.buffer) {
            shadowBuffer = getBuffers().create(0, shadowBufferSize, 14, false);
            prepareMeshes(&getMeshes(), true);
        }
    }

    if (!table->texture(this)) {
        table->clear(this);
        return;
    }

    for (unsigned i = 0; i < static_cast<unsigned>(end - begin); ++i) {
        if (i >= static_cast<unsigned>(end - begin))
            invalidParameter();

        Object *object = begin[i];
        object->table->setWorld(object, false, identity);
        object->table->setView(object, false, identity);
    }
}
