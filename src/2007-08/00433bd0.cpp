// from server: 80% by colin
struct CMultiPlayerPane {
    char pad[0x54];
    void* field_54;
    int Init(int a, int b);
};

extern "C" void* __stdcall sub_62fcda(int, int, int, int, int, int, int);
extern "C" void* __stdcall sub_40cc10();
extern "C" void __stdcall sub_63052c(void*);
extern "C" void __stdcall sub_40e850(void*, int, int);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, int);

int CMultiPlayerPane::Init(int a, int b) {
    int local[4];
    local[0] = 0;
    local[1] = 0;
    local[2] = 0;
    local[3] = 0;

    if (sub_62fcda(0, 0, 0x50000000, (int)local, b, 0x3ea, 0) == 0)
        return 0;

    void* obj = sub_40cc10();
    sub_63052c(obj);
    this->field_54 = obj;

    local[0] = 0;
    local[1] = 0;
    local[2] = 0;
    local[3] = 0;

    void** vtbl = *(void***)obj;
    typedef int (__stdcall *Fn)(void*, int, int, int, int, int, int);
    Fn fn = (Fn)vtbl[0x5c / 4];
    if (fn(obj, 0, 0, 0x50000000, (int)local, 0x3eb, 0) == 0)
        return 0;

    int val = local[0];
    sub_40e850(this->field_54, val, b);

    void* hwnd = *(void**)((char*)this->field_54 + 0x20);
    SendMessageA(hwnd, 0x364, 0, 0);

    return 1;
}
