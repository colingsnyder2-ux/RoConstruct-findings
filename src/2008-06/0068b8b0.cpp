// from server: 97% by king_originala
struct String;

extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);
extern String (__cdecl *stringConcat)(const char*, const String&);

struct String {
    unsigned int storage[7];
    String(const char* text) { stringConstruct(this, text); }
    String(const String&);
    ~String() { stringDestroy(this); }
};

struct ExceptionCode {
    char value;
    ExceptionCode() : value(0) {}
};

struct InvalidParametersException {
    unsigned int storage[40];
    InvalidParametersException(const InvalidParametersException&);
    ~InvalidParametersException();
};

InvalidParametersException __cdecl makeException(
    ExceptionCode, const String&, const String&, const char*, int);

struct SceneManager {
#define SLOT(n) virtual void slot##n();
    SLOT(0)  SLOT(1)  SLOT(2)  SLOT(3)  SLOT(4)
    SLOT(5)  SLOT(6)  SLOT(7)  SLOT(8)  SLOT(9)
    SLOT(10) SLOT(11) SLOT(12) SLOT(13) SLOT(14)
    SLOT(15) SLOT(16) SLOT(17) SLOT(18) SLOT(19)
    SLOT(20) SLOT(21) SLOT(22) SLOT(23) SLOT(24)
    SLOT(25) SLOT(26) SLOT(27) SLOT(28) SLOT(29)
    SLOT(30) SLOT(31) SLOT(32) SLOT(33) SLOT(34)
    SLOT(35) SLOT(36) SLOT(37) SLOT(38) SLOT(39)
    SLOT(40) SLOT(41) SLOT(42) SLOT(43) SLOT(44)
    SLOT(45) SLOT(46) SLOT(47) SLOT(48)
#undef SLOT
    virtual void* createEntity(const String&, const String&);
    void* createEntity(const String&, int);
};

void* SceneManager::createEntity(const String& name, int prefab)
{
    switch (prefab) {
    case 0:
        return createEntity(name, String("Prefab_Plane"));
    case 1:
        return createEntity(name, String("Prefab_Cube"));
    case 2:
        return createEntity(name, String("Prefab_Sphere"));
    default:
        throw makeException(
            ExceptionCode(),
            stringConcat("Unknown prefab type for entity ", name),
            String("RbxSceneManager::createEntity"),
            ".\\RbxSceneManager.cpp",
            437);
    }
}
