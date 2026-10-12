// from server: 92% by king_originala
struct String;
struct Resource;
struct Parameters;
struct Material;
struct MaterialPtr;
struct MaterialManager;
struct Technique;
struct Pass;

template<class T> struct SharedPtr;

extern void (__thiscall *stringConstruct)(String *, const char *);
extern String& (__thiscall *stringAssign)(String *, const String&);
extern String (__cdecl *stringPrefix)(const char *, const String&);
extern String (__cdecl *stringSuffix)(const String&, const char *);
extern MaterialManager& (__cdecl *materialManagerSingleton)();
extern void (__thiscall *materialPtrConstruct)(MaterialPtr *, const SharedPtr<Resource>&);
extern void (__thiscall *materialPtrDestruct)(MaterialPtr *);
extern Technique *(__thiscall *materialBestTechnique)(Material *, unsigned short);
extern Pass *(__thiscall *techniquePass)(Technique *, unsigned short);
extern const String& (__thiscall *passVertexProgramName)(const Pass *);
extern SharedPtr<Parameters> (__thiscall *passVertexProgramParameters)(const Pass *);

struct String {
    unsigned char allocator;
    char storage[16];
    unsigned int length;
    unsigned int capacity;

    String(const char *);
    ~String();
    String& operator=(const String&);
};

inline String::String(const char *s)
{
    stringConstruct(this, s);
}

inline String& String::operator=(const String& s)
{
    return stringAssign(this, s);
}

inline String operator+(const char *s, const String& t)
{
    return stringPrefix(s, t);
}

inline String operator+(const String& s, const char *t)
{
    return stringSuffix(s, t);
}

struct Resource {};
struct Parameters {};

template<class T>
struct SharedPtr {
    T *object;
    unsigned int *references;

    virtual ~SharedPtr();
    virtual void destroy();
    void release();
};

template<class T>
inline void SharedPtr<T>::release()
{
    if (references) {
        --*references;
        if (*references == 0)
            destroy();
    }
}

template<class T>
inline SharedPtr<T>::~SharedPtr()
{
    release();
}

struct Pass {
    char padding[0xf0];
    void *vertexProgram;

    const String& getVertexProgramName() const;
    SharedPtr<Parameters> getVertexProgramParameters() const;
};

inline const String& Pass::getVertexProgramName() const
{
    return passVertexProgramName(this);
}

inline SharedPtr<Parameters> Pass::getVertexProgramParameters() const
{
    return passVertexProgramParameters(this);
}

struct Technique {
    Pass *getPass(unsigned short);
};

inline Pass *Technique::getPass(unsigned short index)
{
    return techniquePass(this, index);
}

struct Material {
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void load(bool);

    Technique *getBestTechnique(unsigned short);
};

inline Technique *Material::getBestTechnique(unsigned short index)
{
    return materialBestTechnique(this, index);
}

struct MaterialPtr {
    void *table;
    Material *object;
    unsigned int *references;

    MaterialPtr(const SharedPtr<Resource>&);
    ~MaterialPtr();
};

inline MaterialPtr::MaterialPtr(const SharedPtr<Resource>& p)
{
    materialPtrConstruct(this, p);
}

inline MaterialPtr::~MaterialPtr()
{
    materialPtrDestruct(this);
}

struct MaterialManager {
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual SharedPtr<Resource> getByName(const String&);

    static MaterialManager& getSingleton();
};

inline MaterialManager& MaterialManager::getSingleton()
{
    return materialManagerSingleton();
}

struct ExceptionCode {
    unsigned char value;
};

struct Exception {
    long line;
    int number;
    String typeName;
    String description;
    String source;
    String file;
    String fullDescription;
    char reserved[8];

    Exception(const Exception&);
    virtual ~Exception();
};

Exception __cdecl createException(
    ExceptionCode, const String&, const String&, const char *, long);

struct ParameterPtr : SharedPtr<Parameters> {
    ParameterPtr& operator=(const SharedPtr<Parameters>&);
};

struct SceneManager {
    char padding[0x8afc];
    Pass *casterPass;
    unsigned int reserved;
    String vertexProgramName;
    char intervening[0x38];
    ParameterPtr vertexParameters;

    void setShadowTextureCasterMaterial(const String&);
};

void SceneManager::setShadowTextureCasterMaterial(const String& name)
{
    if (name.length == 0) {
        casterPass = 0;
    } else {
        MaterialPtr material(MaterialManager::getSingleton().getByName(name));

        if (!material.object) {
            String source("RbxSceneManager::setShadowTextureCasterMaterial");
            ExceptionCode code;
            code.value = 0;
            throw createException(
                code,
                "Cannot locate material called '" + name + "'",
                source,
                ".\\RbxSceneManager.cpp",
                4822);
        }

        material.object->load(false);
        casterPass = material.object->getBestTechnique(0)->getPass(0);

        if (casterPass->vertexProgram) {
            vertexProgramName = casterPass->getVertexProgramName();
            vertexParameters = casterPass->getVertexProgramParameters();
        }
    }
}
