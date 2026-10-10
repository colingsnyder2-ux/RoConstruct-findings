// from server: 28% by colin
struct std_locale_facet_ptr
{
    void* ptr;
};

struct std_locale_id
{
    int id;
};

struct std_locale
{
    void* locale_impl;
};

extern "C" void __stdcall MSVCP80_ctor_Lockit(void* lock, int flag);
extern "C" void __stdcall MSVCP80_dtor_Lockit(void* lock);
extern "C" unsigned int __stdcall MSVCP80_Getcat_ctype(void** facet);
extern "C" const void* __stdcall MSVCP80_Getfacet_locale(const void* locale, unsigned int id);
extern "C" void __stdcall MSVCP80_Incref_facet(void* facet);
extern "C" void __stdcall MSVCP80_facet_Register(void* facet);
extern "C" void __stdcall MSVCR80_ctor_bad_cast(void* exc, const char* msg);

extern "C" void* __stdcall sub_630B9E(void* a, void* b);

struct RBX_ImageButton
{
    void* getCtypeFacet();
};

void* RBX_ImageButton::getCtypeFacet()
{
    void* lockit[3];
    void* localeObj[3];
    void* result;
    void* facet;
    unsigned int id;
    int* idCounter;
    void* savedLocale;

    MSVCP80_ctor_Lockit(lockit, 0);

    savedLocale = *(void**)0x8c82ac;

    if (*(int*)0x77e44c == 0)
    {
        MSVCP80_ctor_Lockit(localeObj, 0);
        if (*(int*)0x77e44c == 0)
        {
            idCounter = *(int**)0x77e454;
            *idCounter = *idCounter + 1;
            *(int*)0x77e44c = **(int**)0x77e454;
        }
        MSVCP80_dtor_Lockit(localeObj);
    }

    id = *(unsigned int*)0x77e44c;
    facet = (void*)MSVCP80_Getfacet_locale((const void*)id, 0);

    if (facet == 0 && savedLocale == 0)
    {
        unsigned int cat = MSVCP80_Getcat_ctype(&facet);
        if (cat == (unsigned int)-1)
        {
            MSVCR80_ctor_bad_cast(localeObj, "bad cast");
            sub_630B9E(localeObj, (void*)0x841e0c);
        }
        savedLocale = facet;
        *(void**)0x8c82ac = facet;
        MSVCP80_Incref_facet(facet);
        MSVCP80_facet_Register(facet);
    }

    MSVCP80_dtor_Lockit(localeObj);
    return savedLocale;
}
