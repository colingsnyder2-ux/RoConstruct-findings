// from server: 33% by colin
struct CXTPDockingPaneSplitterContainer {
    void dtor();
};

extern "C" void __stdcall sub_63069A(void*);
extern "C" void __stdcall sub_71FAC0(void*);
extern "C" void* __stdcall sub_6E4440(void*);
extern "C" void __stdcall sub_6E4480(void*);

void CXTPDockingPaneSplitterContainer::dtor()
{
    *(int*)((char*)this + 0) = 0x7da2e4;
    *(int*)((char*)this + 0x20) = 0x7da284;
    while (*(int*)((char*)this + 0x80) != 0) {
        void* p = sub_6E4440((char*)this + 0x74);
        if (p != 0) {
            (*(void(__thiscall**)(void*, int))*(void**)p)(p, 1);
        }
    }
    sub_6E4480((char*)this + 0x74);
    sub_71FAC0((char*)this + 0x20);
    sub_63069A(this);
}
