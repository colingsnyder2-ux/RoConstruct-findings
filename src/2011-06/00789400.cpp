// from server: 86% by atomic.potato
extern "C" void* __cdecl sub_0080BBC2(void*);
extern "C" int imported_type_info_equal(void*, const void*);

struct TToolVerb
{
    void* p;
    int f();
};

TToolVerb* g_object = (TToolVerb*)0x00C912C8;

int TToolVerb::f()
{
    void* a = *(void**)((char*)p + 0xACC);
    void* b = *(void**)((char*)a + 0x188);
    if (b)
    {
        void* c = sub_0080BBC2(b);
        return imported_type_info_equal(g_object, c);
    }
    return 0;
}
