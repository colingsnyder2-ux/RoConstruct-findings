// from server: 98% by colin
struct SurfaceGetSet
{
    void* get;
    void* set;
    void setValue(void* instance, const void* value);
};

extern "C" void* __fastcall sub_573890(void*);

void SurfaceGetSet::setValue(void* instance, const void* value)
{
    void* p = instance ? (char*)instance - 4 : 0;
    char* base = (char*)sub_573890(p);
    void* fn = *(void**)((char*)this + 8);
    void* arg = *(void**)value;
    ((void (__fastcall*)(char*, void*))fn)(base + 8, arg);
}
