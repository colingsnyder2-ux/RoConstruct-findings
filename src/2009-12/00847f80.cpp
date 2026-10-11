// from server: 25% by atomic.potato
extern "C" void* __cdecl sub_7F3860(unsigned int size);
extern "C" void __fastcall sub_846C60(void* self);

struct CXTPControls {
    void* construct();
};

void* CXTPControls::construct()
{
    void* p = sub_7F3860(0x44);
    if (p != 0) {
        sub_846C60(p);
    }
    return p;
}
