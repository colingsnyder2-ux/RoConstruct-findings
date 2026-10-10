// from server: 40% by colin
struct Verb {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
};

struct TToolVerb {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    void* construct(Verb* parent, int name);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct VerbCtor {
    void ctor(int name);
};

void* TToolVerb::construct(Verb* parent, int name)
{
    TToolVerb* result = (TToolVerb*)operator_new(0x4c);
    if (result != 0) {
        ((VerbCtor*)result)->ctor(name);
        result->vtable = (void*)0x7b064c;
        *(void**)((char*)result + 4) = (void*)0x7b0630;
    }
    return result;
}
