// from server: 50% by colin
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

extern "C" void sub_42E4C0(void* self, int arg);
extern "C" void sub_4321F0(void* self);
extern "C" void sub_4309F0(void* self);
extern "C" void sub_430F50(void* self, int arg);

int CIDEDocManager::create(int value)
{
    if (field20 != 0)
    {
        void* hwnd = *(void**)((char*)field20 + 0x20);
        if (IsWindowVisible(hwnd) == 0)
        {
            sub_42E4C0(field20, field4c);
        }
        void* p = field20;
        return *(int*)((char*)p + 0x20) != 0;
    }

    void* mem = sub_6A0920(0x4b4);
    void* obj = 0;
    if (mem != 0)
    {
        sub_4321F0(mem);
        obj = mem;
    }

    if (obj == 0)
    {
        return 0;
    }

    void** vtbl = *(void***)obj;
    int (__stdcall *fn)(void*, int, int, int, int) =
        (int (__stdcall *)(void*, int, int, int, int))vtbl[0x148 / 4];
    if (fn(obj, 0x80, 0xcf8000, 0, 0) == 0)
    {
        return 0;
    }

    if (value != 0)
    {
        sub_4309F0(obj);
    }
    else
    {
        sub_430F50(obj, 0);
    }

    void* hwnd = *(void**)((char*)obj + 0x20);
    DragAcceptFiles(hwnd, 1);

    sub_42E4C0(obj, field4c);

    if (field90 == 0 && field92 == 0)
    {
        sub_6A1238();
    }

    field20 = obj;
    return 1;
}
