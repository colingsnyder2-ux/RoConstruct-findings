// from server: 92% by colin
// roc 2007-08 00587220  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587220

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Container {
    char pad0[4];
    unsigned int* begin;
    unsigned int* end;
};

struct Result {
    Container* container;
    unsigned int* ptr;
};

Container* __cdecl getContainer();

void __cdecl makeResult(Result* out)
{
    Container* c = getContainer();
    unsigned int* p = c->begin;
    if (p > c->end)
        _invalid_parameter_noinfo();
    out->ptr = p;
    out->container = c;
}
