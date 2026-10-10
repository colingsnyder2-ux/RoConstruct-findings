// from server: 44% by colin
struct FilteredSelection {
    char pad[0x24];
    char flag;
    void construct(char* other);
};

extern "C" void* __stdcall string_copy_ctor(void* dest, const void* src);
extern "C" void __stdcall string_dtor(void* str);
extern "C" void __fastcall base_construct(FilteredSelection* self, void* unused, char* other);

void FilteredSelection::construct(char* other)
{
    char local[0x1c];
    string_copy_ctor(local, other);
    base_construct(this, 0, local);
    flag = local[0x1c];
    *(void**)this = (void*)0x7a9430;
    string_dtor(local);
}
