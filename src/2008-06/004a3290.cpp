// from server: 84% by king_originala
struct Iterator {
    void* owner;
    void* node;
};

struct Table {
    void* owner;
    char padding[20];
    void* end;
    Iterator* find(Iterator* result, const void* key);
};

struct State {
    char padding[0x164];
    Table table;
};

struct Script {
    char padding[0x130];
    const void* externalKey;
    char reserved[4];
    char localKey[0x14];
    unsigned int discriminator;
};

extern const char instanceType;
extern const char scriptType;
extern const char messageType;

extern "C" void* __cdecl dynamicCast(
    void* object, int offset, const void* sourceType,
    const void* targetType, int isReference);

extern "C" void (__cdecl *invalidParameter)();

struct ClientProxy {
    char padding[0x2d70];
    State* state;
    bool contains(void* object);
};

bool ClientProxy::contains(void* object)
{
    Script* script = static_cast<Script*>(
        dynamicCast(object, 0, &instanceType, &scriptType, 0));

    if (script) {
        Table* table = &state->table;
        void* owner = table->owner;
        void* end = table->end;
        Iterator temporary;
        Iterator* result;

        if (script->discriminator == 0)
            result = table->find(&temporary, script->externalKey);
        else
            result = table->find(&temporary, script->localKey);

        if (!result->owner || result->owner != owner)
            invalidParameter();

        return result->node != end;
    }

    return dynamicCast(object, 0, &instanceType, &messageType, 0) == 0;
}
