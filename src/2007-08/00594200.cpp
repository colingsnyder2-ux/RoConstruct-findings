// from server: 93% by colin
struct Verb;
struct VerbContainer;

struct TToolVerb {
    char pad[0xc];
    VerbContainer* container;
    bool isEnabled() const;
};

struct VerbContainer {
    char pad[0x188];
    void* something;
};

struct SomeClass {
    char pad[0x318];
    void* ptr;
};

extern "C" int __cdecl sub_631392(void*);
extern "C" int __stdcall sub_77E708(const void*);

bool TToolVerb::isEnabled() const
{
    VerbContainer* c = container;
    SomeClass* s = *(SomeClass**)((char*)c + 0x188);
    void* p = *(void**)((char*)s + 0x318);
    if (p) {
        int r = sub_631392(p);
        return sub_77E708((const void*)r) != 0;
    }
    return false;
}
