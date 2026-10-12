// from server: 91% by king_originala
void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct S;
struct SubMesh;
struct MaterialName;

struct SubEntity {
    char storage[0x15c];

    SubEntity(S *, SubMesh *, void *);
};

typedef bool (__thiscall *IsMatInitialised)(const SubMesh *);
typedef const MaterialName &(__thiscall *GetMaterialName)(const SubMesh *);
typedef void (__thiscall *SetMaterialName)(SubEntity *, const MaterialName &);

extern IsMatInitialised isMatInitialised;
extern GetMaterialName getMaterialName;
extern SetMaterialName setMaterialName;

struct Collection {
    char storage[16];

    void insert(SubEntity *const &);
};

struct S {
    char padding[0xd8];
    Collection entities;

    SubEntity *f(SubMesh *, void *);
};

SubEntity *S::f(SubMesh *mesh, void *argument)
{
    SubMesh *originalMesh = mesh;
    SubEntity *entity = new SubEntity(this, originalMesh, argument);

    if (isMatInitialised(originalMesh))
        setMaterialName(entity, getMaterialName(originalMesh));

    mesh = reinterpret_cast<SubMesh *>(entity);
    entities.insert(reinterpret_cast<SubEntity *const &>(mesh));
    return entity;
}
