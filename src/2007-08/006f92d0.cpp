// from server: 29% by colin
struct CXTPPropertyGridPaintManager
{
    void dtor();
};

extern "C" void __stdcall sub_41F680(void*);
extern "C" void __stdcall sub_6301E4(void*);
extern "C" void __stdcall sub_69F160(void*);

void CXTPPropertyGridPaintManager::dtor()
{
    *(void**)this = (void*)0x7dc8bc;

    void* p = *(void**)((char*)this + 0x34);
    if (p)
    {
        sub_6301E4(p);
        *(void**)((char*)this + 0x34) = 0;
    }

    *(void**)((char*)this + 0x2c) = (void*)0x794a08;
    sub_41F680((char*)this + 0x2c);

    *(void**)((char*)this + 0x24) = (void*)0x794a08;
    sub_41F680((char*)this + 0x24);

    sub_69F160((char*)this + 0x18);
    sub_69F160((char*)this + 0x10);
    sub_69F160((char*)this + 0x08);
}
