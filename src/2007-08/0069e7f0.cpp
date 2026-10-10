// from server: 56% by colin
extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void*, const char*);

extern void* g_8c91f8;
extern void* g_8b5188;

struct CXTPPropertyGridItemEnum {
    int field0;
    void* field4;
    void CloseThemeData();
};

void* sub_69e740();

void CXTPPropertyGridItemEnum::CloseThemeData()
{
    if (field4 != 0 && g_8c91f8 == 0)
    {
        void* p = sub_69e740();
        if (*(void**)((char*)p + 0xd0) != 0 && *(void**)((char*)p + 4) == 0)
        {
            *(void**)((char*)p + 4) = GetProcAddress(*(void**)((char*)p + 0xd0), "CloseThemeData");
        }
        void* fn = *(void**)((char*)p + 4);
        if (fn != 0)
        {
            ((void (__stdcall*)(void*))fn)(field4);
        }
    }
}
