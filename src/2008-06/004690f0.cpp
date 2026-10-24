// from server: 99% by king_originala
#include <intrin.h>
// from server: 89% by king_originala
typedef unsigned long DWORD;

struct Accelerator;
extern "C" __declspec(dllimport) int __stdcall copyAccelerators(void*, Accelerator*, int);
extern long (__stdcall *createInput)(void*, DWORD, const void*, void**, void*);
extern const unsigned char inputIdentifier[];
extern "C" long __stdcall normalizeResult(long);
extern "C" void* __cdecl clearMemory(void*, int, unsigned int);
extern "C" __declspec(noreturn) void __stdcall AtlThrowImpl(long);

void* __cdecl operator new[](unsigned int);

struct Primary {
    virtual void primaryMethod();
    unsigned char reserved[0x24];
};

struct Interface1 {
    virtual void firstMethod();
};

struct Interface2 {
    virtual void secondMethod();
};

struct Base : Primary, Interface1, Interface2 {
    DWORD reserved30;
    Base();
    ~Base();
};

struct Member {
    unsigned char reserved[0x18];
    Member();
    ~Member();
};

struct Listener {
    void connect(void*);
};

struct Object {
    unsigned char reserved0[0x130];
    Listener first;
    unsigned char reserved1[0x170 - 0x130 - sizeof(Listener)];
    Listener second;
    Object* related();
};

void __cdecl initializeReference(void*, Object*);

struct Reference {
    Object* object;
    void* control;
    Reference(Object*);
    ~Reference();
};

inline Reference::Reference(Object* p)
{
    initializeReference(this, p);
}

struct Resource {
    void* value;
    Resource();
    ~Resource();
};

inline Resource::Resource() : value(0)
{
}

struct Window;

struct WindowTable {
    void* reserved[98];
    void* (__thiscall *accelerators)(Window*);
};

struct Window {
    WindowTable* table;
    unsigned char reserved[0x1c];
    void* handle;
    Window* owner();
    Window* parent();
};

struct Accelerator {
    unsigned short flags;
    unsigned short key;
    unsigned short command;
};

inline void* ownerHandle(Window* w)
{
    Window* p = w->owner();
    if (!p)
        return 0;
    return p->handle;
}

struct S : Base {
    Member member;
    Window* current;
    Accelerator* acceleratorData;
    volatile unsigned int acceleratorCount;
    unsigned char flag58;
    unsigned char flag59;
    unsigned short reserved5a;
    DWORD value5c;
    volatile float value60;
    volatile float value64;
    unsigned char keys[0x100];
    DWORD value168;
    Window* window;
    void* handle;
    Resource input;
    Resource device;
    Resource extraDevice;
    Reference reference;
    Reference relatedReference;
    unsigned char flag190;
    unsigned char flag191;
    unsigned char flag192;
    unsigned char flag193;

    virtual void primaryMethod();
    virtual void firstMethod();
    virtual void secondMethod();

    S(Window*, Object*);
    void initializeFirst();
    void initializeSecond();
};

S::S(Window* w, Object* o)
    : acceleratorData(0),
      acceleratorCount(0),
      flag58(0),
      flag59(0),
      value5c(0),
      value60(0.0f),
      value64(0.0f),
      value168(0),
      window(w),
      handle(ownerHandle(w)),
      reference(o),
      relatedReference(o ? o->related() : 0),
      flag190(0),
      flag191(0),
      flag192(0),
      flag193(0)
{
    Reference* r = &relatedReference;
    current = window->parent();
    if (current) {
        do {
            WindowTable* table = current->table;
            void* (__thiscall *getAccelerator)(Window*) = table->accelerators;
            unsigned int count = copyAccelerators(
                getAccelerator(current), 0, 0);
            acceleratorCount = count;
            if (count) {
                Accelerator* allocated = new Accelerator[count];
                acceleratorData = allocated;
                copyAccelerators(current->table->accelerators(current),
                     allocated, acceleratorCount);
                break;
            }
            current = current->parent();
        } while (current);
    }

    clearMemory(keys, 0, 0x100);

    long result = normalizeResult(createInput(
        0, 0x800, inputIdentifier, &input.value, 0));
    if (result < 0)
        AtlThrowImpl(result);

    initializeFirst();
    initializeSecond();

    if (r->object)
        r->object->first.connect(static_cast<Interface2*>(this));
    _ReadWriteBarrier();
    if (r->object)
        r->object->second.connect(static_cast<Interface1*>(this));
}
