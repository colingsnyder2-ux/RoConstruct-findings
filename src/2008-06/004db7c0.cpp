// from server: 7% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance {
    void* vtable;
    char pad[0x100];
    Instance* getChild();
};

struct PartInstance : Instance {
    void* getPartPrimitive();
};

struct Adorn {
    void renderCoordinateFrame(Instance* instance);
};

struct ViewRbxGfx {
    void render3dAdorn(Adorn* adorn, Instance* instance);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl operator_delete(void* p);

extern "C" void* __stdcall sub_6a17c6(void* a, void* b, void* c, void* d, void* e);
extern "C" void* __stdcall sub_6a0920(unsigned int size);
extern "C" void* __stdcall sub_618a40(void* a, void* b);
extern "C" void __stdcall sub_4ebcc0(void* a, void* b, void* c);
extern "C" void __stdcall sub_4eae10(void* a, void* b, void* c);
extern "C" void __stdcall sub_4eafd0(void* a, void* b, void* c);
extern "C" void __stdcall sub_600660(void* a);

void ViewRbxGfx::render3dAdorn(Adorn* adorn, Instance* instance)
{
    Instance* child = instance->getChild();
    if (child) {
        PartInstance* part = (PartInstance*)child;
        void* prim = part->getPartPrimitive();
        if (prim) {
            adorn->renderCoordinateFrame(instance);
        }
    }
}
