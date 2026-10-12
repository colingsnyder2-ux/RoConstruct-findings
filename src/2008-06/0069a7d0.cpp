// from server: 81% by king_originala
typedef unsigned int size_t;

extern void (__cdecl *invalidParameter)();
extern "C" __declspec(noreturn) void __stdcall throwException(void *, void *);

struct String;
extern void (__thiscall *stringConstruct)(String *, const char *);
extern void (__thiscall *stringDestroy)(String *);
extern String (__cdecl *prependString)(const char *, const String &);
extern String (__cdecl *appendString)(const String &, const char *);

struct String {
    unsigned char allocator[4];
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    String(const char *);
    ~String();
};

inline String::String(const char *text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Iterator {
    void *owner;
    void *node;
};

struct Animation;
struct AnimationMap {
    void *owner;
    unsigned char padding[20];
    void *end;

    Iterator *find(Iterator *, const String &);
    Animation **operator[](const String &);
};

struct Exception {
    unsigned char data[164];
};

struct ErrorCode {
    unsigned char value;
};

extern void __cdecl constructException(
    Exception *, ErrorCode, const String &, const String &,
    const char *, int);
extern unsigned char exceptionType[];

struct Animation {
    virtual ~Animation();
    unsigned char data[164];
};

extern void (__thiscall *animationConstruct)(
    Animation *, const String &, float);

struct SceneAnimation : Animation {
    SceneAnimation(const String &, float);
    virtual ~SceneAnimation();
};

__forceinline SceneAnimation::SceneAnimation(const String &name, float duration)
{
    animationConstruct(this, name, duration);
}

struct SceneManager {
    unsigned char padding[0x4294];
    AnimationMap animations;

    Animation *createAnimation(const String &, float);
};

Animation *SceneManager::createAnimation(const String &name, float duration)
{
    void *owner = animations.owner;
    void *finish = animations.end;
    Iterator result;
    Iterator *found = animations.find(&result, name);

    if (!found->owner || found->owner != owner)
        invalidParameter();

    if (found->node != finish) {
        String source("RbxSceneManager::createAnimation");
        ErrorCode code;
        code.value = 0;
        Exception error;
        constructException(
            &error, code,
            appendString(
                prependString("An animation with the name ", name),
                " already exists"),
            source, ".\\RbxSceneManager.cpp", 2991);
        throwException(&error, exceptionType);
    }

    SceneAnimation *animation = new SceneAnimation(name, duration);
    *animations[name] = animation;
    return animation;
}
