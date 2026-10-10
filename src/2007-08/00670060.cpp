// from server: 45% by colin
struct CXTPDockingPaneManager {
    void f(void* a, void* b, void* c);
};

extern "C" void __fastcall func_0066f110(void*);
extern "C" void __fastcall func_0066f140(void*);
extern "C" void __fastcall func_0066e060(void*);
extern "C" void* __fastcall func_0066dfe0(void*);
extern "C" void __fastcall func_0066f3e0(void*, void*, void*, void*);
extern "C" void __fastcall func_006d86f0(void*);

void CXTPDockingPaneManager::f(void* a, void* b, void* c)
{
    void* esi = a;
    if (*(int*)((char*)esi + 0x18) == 2) {
        func_0066f110((char*)this + 0x0c);
        void* vtable = *(void**)esi;
        void* fn = *(void**)((char*)vtable + 0x0c);
        void* local = 0;
        ((void (__thiscall*)(void*, int, void**))fn)(esi, 1, &local);
        if (*(int*)((char*)&local + 0x0c) == 1) {
            esi = *(void**)((char*)*(void**)&local + 8);
        }
        func_0066f140((char*)this + 0x0c);
    }
    if (*(int*)((char*)esi + 0x18) == 0) {
        func_0066e060(esi);
    } else {
        esi = func_0066dfe0(esi);
    }
    func_0066f3e0(this, esi, b, c);
    func_006d86f0(*(void**)((char*)this + 0xd0));
    *(int*)((char*)this + 0x138) = 0;
}
