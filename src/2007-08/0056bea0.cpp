// from server: 49% by colin
struct IDREFBinding {
    const void* valueIDREF;
    char string[0x1c];
    void* a;
    void* b;
};

struct ArchiveBinder {
    char pad0[8];
    IDREFBinding* begin;
    IDREFBinding* end;
    char pad1[4];
    void* savedList;
    void processIDREF(const void* valueIDREF, void* propertyOwner, const void* idref);
};

extern "C" void __stdcall MSVCP80_string_copy(void*, const void*);
extern "C" void __stdcall MSVCP80_string_dtor(void*);
extern "C" void __stdcall MSVCR80_invalid_parameter_noinfo();
extern "C" void __stdcall sub_56C510();

void ArchiveBinder::processIDREF(const void* valueIDREF, void* propertyOwner, const void* idref)
{
    unsigned int i = 0;
    int count;
    if (begin == 0)
        count = 0;
    else
        count = (int)((char*)end - (char*)begin) >> 2;

    void* saved = savedList;
    savedList = &i;

    if (count > 0) {
        do {
            IDREFBinding* cur;
            if (begin == 0)
                MSVCR80_invalid_parameter_noinfo();
            else if (i >= (unsigned int)((int)((char*)end - (char*)begin) >> 2))
                MSVCR80_invalid_parameter_noinfo();

            cur = &begin[i];

            char buf[0x28];
            *(const void**)buf = valueIDREF;
            MSVCP80_string_copy(buf + 4, cur->string);
            *(void**)(buf + 0x20) = cur->a;
            *(void**)(buf + 0x24) = cur->b;

            sub_56C510();

            i++;
        } while (i < (unsigned int)count);
    }

    savedList = saved;
    MSVCP80_string_dtor(&i);
}
