// from server: 86% by tajop
struct Face
{
    void setSurface(int value);
};

struct SurfaceGetSet
{
    void* vtable;
    void* get;
    void (Face::*set)(int);
    void setValue(void* instance, const int* value);
};

extern "C" char* __fastcall sub_573890(void*);

void SurfaceGetSet::setValue(void* instance, const int* value)
{
    void* p = instance ? (char*)instance - 4 : 0;
    Face* face = (Face*)(sub_573890(p) + 0x18);
    (face->*set)(*value);
}
