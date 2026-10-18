// from server: 60% by colin
struct CIDEDocManager;

struct Helper
{
    unsigned char padding[8];
    void initialize(CIDEDocManager* owner, const void* type, int flag);
};

struct CIDEDocManager
{
    unsigned char padding[0x20];
    void* field20;
    unsigned char pad24[0x28];
    int field4c;
    unsigned char pad50[0x40];
    unsigned short field90;
    unsigned short field92;

    int create(int value);
};

extern "C" int __stdcall IsWindowVisible(void* hwnd);
extern "C" void __stdcall DragAcceptFiles(void* hwnd, int accept);

extern "C" void* __stdcall sub_6A0920(unsigned int size);
extern "C" void __stdcall sub_6A1238();

struct Obj42E4C0 { void f(int arg); };
struct Obj4321F0 { void* f(); };
struct Obj4309F0 { void f(); };
struct Obj430F50 { void f(int arg); };

int CIDEDocManager::create(int value)
{
    if (field20 != 0)
    {
        void* hwnd = *(void**)((char*)field20 + 0x20);
        if (IsWindowVisible(hwnd) == 0)
        {
            ((Obj42E4C0*)field20)->f(field4c);
        }
        void* p = field20;
        return *(int*)((char*)p + 0x20) != 0;
    }

    void* mem = sub_6A0920(0x4b4);
    void* obj = 0;
    if (mem != 0)
    {
        obj = ((Obj4321F0*)mem)->f();
    }

    if (obj == 0)
    {
        return 0;
    }

    void** vtbl = *(void***)obj;
    int (__thiscall *fn)(void*, int, int, int, int) =
        (int (__thiscall *)(void*, int, int, int, int))vtbl[0x148 / 4];
    if (fn(obj, 0x80, 0xcf8000, 0, 0) == 0)
    {
        return 0;
    }

    if (value != 0)
    {
        ((Obj4309F0*)obj)->f();
    }
    else
    {
        ((Obj430F50*)obj)->f(0);
    }

    void* hwnd = *(void**)((char*)obj + 0x20);
    DragAcceptFiles(hwnd, 1);

    ((Obj42E4C0*)obj)->f(field4c);

    field20 = obj;

    if (field90 == 0 && field92 == 0)
    {
        sub_6A1238();
    }

    return 1;
}
