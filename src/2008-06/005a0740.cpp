// from server: 78% by colin
struct Script {
    virtual ~Script();
    bool f(Script* node);
};

struct LocalScript : Script {
};

extern "C" bool __cdecl checkOwner(void*, int);
extern "C" Script* __cdecl getCharacter(void*);

struct S {
    S* f(Script* node);
};

S* S::f(Script* node)
{
    LocalScript* script = dynamic_cast<LocalScript*>(node);
    char* owner = reinterpret_cast<char*>(this) - 0x340;

    if (!script) {
        if (checkOwner(owner, 1) && owner)
            return reinterpret_cast<S*>(owner + 0x340);
    } else {
        Script* character = getCharacter(owner);
        if (character && node->f(character) && owner)
            return reinterpret_cast<S*>(owner + 0x340);
    }

    return 0;
}
