// from server: 97% by king_originala
extern bool __cdecl supported();
extern void __cdecl beginReport();
extern void __cdecl endReport();

extern int mode;
extern int totalBytes;
extern bool extensionsAvailable;
extern bool ignoreFailure;

extern long (__stdcall *decrementReference)(volatile long *);
extern void *(__cdecl *allocateMemory)(unsigned int);
extern void (__stdcall *terminateProcess)(int);

struct String;
extern void (__thiscall *constructString)(String *, const char *);
extern void (__thiscall *destroyString)(String *);

struct String {
    unsigned char allocator[4];
    char storage[16];
    unsigned int length;
    unsigned int capacity;
    String(const char *);
    ~String();
};

__forceinline String::String(const char *text) {
    constructString(this, text);
}

__forceinline String::~String() {
    destroyString(this);
}

struct Object {
    virtual ~Object();
    long references;
    void *resource;
    void releaseResource();
};

struct Reference {
    Object *pointer;
    Reference();
    ~Reference();
    void clear();
};

__forceinline Reference::Reference() : pointer(0) {}

__forceinline Reference::~Reference() {
    if (pointer && decrementReference(&pointer->references) == 0) {
        pointer->releaseResource();
        if (pointer)
            delete pointer;
    }
}

__forceinline void Reference::clear() {
    if (pointer) {
        if (decrementReference(&pointer->references) == 0) {
            pointer->releaseResource();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

extern void *baseTable[];
extern void *areaTable[];

struct Base {
    void *volatile table;
    int references;
    int weakReferences;
    Base();
    ~Base();
};

__forceinline Base::Base() {
    table = baseTable;
    references = 0;
    weakReferences = 0;
}

typedef void (__stdcall *Generate)(int, unsigned int *);
typedef void (__stdcall *Bind)(unsigned int, unsigned int);
typedef void (__stdcall *Allocate)(unsigned int, int, const void *, unsigned int);
typedef bool (__cdecl *Report)(const char *, const String &, const char *, int, bool *, bool);

extern Generate generate;
extern Bind bind;
extern Allocate allocate;
extern void *requiredExtension;
extern Report report;

struct Area : Base {
    Reference reference;
    void *mapped;
    int reserved;
    int generation;
    int position;
    int limit;
    int used;
    int size;
    unsigned int buffer;
    void *memory;

    Area(int, int);
    ~Area();
};

Area::Area(int bytes, int usage) {
    table = areaTable;
    size = bytes;
    used = 0;

    if (mode == 0) {
        mode = extensionsAvailable && generate && allocate &&
               requiredExtension && !supported() ? 1 : 2;
    }

    totalBytes += size;

    switch (mode) {
    default:
        if (!ignoreFailure) {
            beginReport();
            if (report &&
                report("false", String("Fell through switch."),
                       ".\\glg3dcpp\\VARArea.cpp", 102,
                       &ignoreFailure, true))
                terminateProcess(-1);
            endReport();
        }
        buffer = 0;
        memory = 0;
        break;

    case 2:
        buffer = 0;
        memory = allocateMemory(size);
        break;

    case 1:
        generate(1, &buffer);
        bind(0x8892, buffer);
        unsigned int hint;
        switch (usage) {
        case 0:
            hint = 0x88e4;
            break;
        case 1:
            hint = 0x88e8;
            break;
        case 2:
            hint = 0x88e0;
            break;
        default:
            hint = 0x88e0;
            break;
        }
        allocate(0x8892, size, 0, hint);
        memory = 0;
        bind(0x8892, 0);
        break;
    }

    reference.clear();
    mapped = 0;
    position = 0;
    limit = 0;
    generation = 1;
}
