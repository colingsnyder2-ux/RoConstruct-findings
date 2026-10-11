// from server: 1% by atomic.potato
struct CXTPCustomizeToolbarsPageCheckListBox {
    char pad0[0x20];
    void* field20;
    char pad24[0x44];
    int field68;
    int field6c;
    char pad70[0x5c];
    char field5c[0x10];
    void method(int);
};

extern "C" void __stdcall SendMessageA(void*, unsigned int, int, int);
extern "C" void __stdcall DrawFrameControl(void*, void*, unsigned int, unsigned int);
extern "C" void __stdcall CopyRect(void*, void*);

extern "C" void __cdecl func_00926430();
extern "C" void __cdecl func_00926d84();
extern "C" void __cdecl func_0086b840();
extern "C" void __cdecl func_0086bdb0();

void CXTPCustomizeToolbarsPageCheckListBox::method(int)
{
    char buf[0x60];
    int* p = (int*)buf;
    int* src = (int*)((char*)this + 0);
    (void)src;
}
