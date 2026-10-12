// from server: 90% by king_originala
struct String {
    unsigned int proxy;
    union {
        char buffer[16];
        char* pointer;
    } data;
    unsigned int length;
    unsigned int capacity;
};

struct Named {
    unsigned int reserved;
    String name;
};

struct Info {
    unsigned int reserved;
    Named* named;
};

struct Base {
    unsigned int reserved[2];
    Info* info;
};

struct Instance {
    char reserved[0x110];
    String name;
};

extern char baseType[];
extern char instanceType[];

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);
extern "C" void __cdecl pushString(void*, const char*);

int __cdecl getName(Base** object, void* state)
{
    Instance* instance = (Instance*)__RTDynamicCast(
        *object, 0, baseType, instanceType, 0);

    if (instance) {
        if (instance->name.capacity >= 16) {
            pushString(state, instance->name.data.pointer);
            return 1;
        }
        pushString(state, instance->name.data.buffer);
        return 1;
    }

    String* name = &(*object)->info->named->name;
    if (name->capacity >= 16) {
        pushString(state, name->data.pointer);
        return 1;
    }
    pushString(state, name->data.buffer);
    return 1;
}
