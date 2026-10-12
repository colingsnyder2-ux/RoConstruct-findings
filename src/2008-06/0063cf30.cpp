// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Reference {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object {
    char padding[0x104];
    void* owner;
};

struct SharedObject {
    Object* object;
    Reference* reference;
    ~SharedObject()
    {
        Reference* p = reference;
        if (p) {
            if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                    p->destroy();
            }
        }
    }
};

struct Character {
    char padding[0x1e8];
    unsigned char flags;
    void* getObject();
    void setEnabled(bool);
};

struct Connection {
    char storage[20];
    ~Connection();
};

struct Signal {
    char storage[20];
    void clear();
    void assign(const Connection&);
};

struct Spawn;

struct MemberPointer {
    void (__cdecl *function)(Spawn*);
    int adjustment;
    int extra;
};

struct BoundFunction {
    char storage[20];
};

struct Function {
    char storage[40];
    Function(const BoundFunction&);
    ~Function();
};

struct Dispatcher {
    Connection connect(void*, const Function&, int);
};

extern double threshold;
extern unsigned char option;
extern Dispatcher dispatcher;

extern double __cdecl currentTime();
extern Character* __cdecl findCharacter(void*);
extern bool __cdecl isValid(void*);
extern void __cdecl callback(Spawn*);
extern BoundFunction* __cdecl bindFunction(
    BoundFunction*, MemberPointer, Spawn*, unsigned char);

struct Spawn {
    char padding[0x3fc];
    Signal signal;
    double lastTime;
    int blocked;
    void apply(Character*);
    void process(SharedObject);
};

void Spawn::process(SharedObject object)
{
    if (currentTime() - lastTime > threshold && !blocked) {
        void* owner = object.object->owner;
        if (owner) {
            Character* character = findCharacter(owner);
            if (character && character->getObject() &&
                !(character->flags & 2) &&
                !(character->flags & 8) &&
                isValid(character->getObject()) && isValid(this)) {
                signal.clear();
                apply(character);
                character->setEnabled(true);

                BoundFunction bound;
                MemberPointer member = { callback, 0, 0 };
                Function function(*bindFunction(&bound, member, this, option));
                signal.assign(dispatcher.connect(
                    reinterpret_cast<char*>(character) + 0x14,
                    function, 10));
            }
        }
    }
}
