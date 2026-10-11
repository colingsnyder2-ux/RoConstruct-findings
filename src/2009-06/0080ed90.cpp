// from server: 38% by atomic.potato
struct CXTPRibbonGroup
{
    char pad0[0x28];
    char field28[0x34];
    char pad5c[0x18];
    void* field74;
    char pad78[0x18];
    int GetTextExtent(void* p);
};

extern "C" void* __stdcall sub_89fb54(void*);
extern "C" void* __stdcall sub_89fcd0(void*, void*);
extern "C" int __stdcall sub_89e150(void*, void*, void*);
extern "C" void* __stdcall sub_7b7a20();
extern "C" void sub_770860(void*, void*, void*);
extern "C" void sub_7708e0(void*);

int CXTPRibbonGroup::GetTextExtent(void* p)
{
    void* v1;
    void* v2;
    void* v3;
    int result;
    int extra;
    void* dc;
    void* size;

    v1 = sub_7b7a20();
    v1 = (char*)v1 + 0x654;
    sub_770860(&v2, p, v1);
    v3 = sub_89fb54(&field28);
    v3 = sub_89fcd0(&field28, v3);
    sub_89e150(*(void**)((char*)p + 8), v3, &v2);
    extra = 0;
    if (field74 != 0)
    {
        void* v4 = sub_7b7a20();
        extra = *(int*)((char*)v4 + 0x660);
    }
    result = (int)v2 + extra;
    sub_7708e0(&v2);
    return result;
}
