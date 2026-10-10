// from server: 33% by colin
struct FilteredSelection {
    void construct(int a, int b, int c, int d, int e, int f, int g, int h);
};

extern "C" void __stdcall string_copy_ctor(void* dest, const void* src);
extern "C" void __stdcall string_dtor(void* str);
extern "C" void __fastcall sub_55fc40(void* self);

void FilteredSelection::construct(int a, int b, int c, int d, int e, int f, int g, int h)
{
    char local[0x1c];
    string_copy_ctor(local, (const void*)((char*)this + 0x30));
    sub_55fc40(this);
    *(void**)this = (void*)0x7a94dc;
    string_dtor(local);
}
