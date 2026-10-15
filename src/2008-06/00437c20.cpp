// from server: 62% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct S;

struct VTable {
    void* slots[58];
    unsigned int (__thiscall *getColor)(S*);
};

struct Triple {
    float x, y, z;
};

extern const float colorScale;
extern "C" void __cdecl constructColor(void*, Triple);

struct S {
    VTable* vtable;
    void* convert(void* result);
};

void* S::convert(void* result)
{
    unsigned int color = vtable->getColor(this);
    Triple value;
    value.x = (color & 255) * colorScale;
    value.y = ((color >> 8) & 255) * colorScale;
    value.z = ((color >> 16) & 255) * colorScale;
    constructColor(result, value);
    return result;
}
