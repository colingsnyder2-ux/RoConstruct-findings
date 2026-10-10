// from server: 88% by colin
struct VerbContainer {
    char pad[4];
    void* field4;
    void* field8;
};

struct CopyVerb {
    char pad[0x104];
    VerbContainer* container;
    void* getSelection(void* out);
};

extern "C" void __cdecl _invalid_parameter_noinfo();

void* CopyVerb::getSelection(void* out)
{
    VerbContainer* c = this->container;
    void* end = c->field8;
    void* begin = c->field4;
    *(void**)out = 0;
    if (begin > end) {
        _invalid_parameter_noinfo();
    }
    *(void**)out = c;
    *(void**)((char*)out + 4) = end;
    return out;
}
