// from server: 47% by colin
struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    void* name;
    bool verbSecurity;
};

struct TToolVerb : Verb {
    TToolVerb(VerbContainer* container, int toggle);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __stdcall sub_5E3D10(void* self, int arg);

TToolVerb* TToolVerb_ctor(TToolVerb* self, VerbContainer* container, int toggle);

TToolVerb* TToolVerb_ctor(TToolVerb* self, VerbContainer* container, int toggle)
{
    TToolVerb* result = (TToolVerb*)operator_new(0x3c);
    if (result != 0) {
        sub_5E3D10(result, *(int*)((char*)container + 0x188));
        result->vtable = (void*)0x7b0ec4;
        *(void**)((char*)result + 4) = (void*)0x7b0eac;
        *(int*)((char*)result + 0x20) = 0;
        *(float*)((char*)result + 0x24) = 0.0f;
        *(float*)((char*)result + 0x28) = 0.0f;
        *(float*)((char*)result + 0x2c) = 0.0f;
        *(float*)((char*)result + 0x30) = 0.0f;
        *(float*)((char*)result + 0x34) = 0.0f;
        *(float*)((char*)result + 0x38) = 0.0f;
        return result;
    }
    return 0;
}
