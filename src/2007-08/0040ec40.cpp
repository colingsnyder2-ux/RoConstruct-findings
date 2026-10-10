// from server: 91% by colin
extern "C" __declspec(dllimport) void* __stdcall GetSystemMenu(void*, int);
extern "C" __declspec(dllimport) int __stdcall RemoveMenu(void*, unsigned int, unsigned int);

extern "C" void* __stdcall sub_006303BE(void*, int);
extern "C" void* __stdcall sub_006302F8(void*);
extern "C" void* __stdcall sub_006302FE(void*, unsigned int, int);
extern "C" void __stdcall sub_006303B8(void*, unsigned int, int, int);
extern "C" void __stdcall sub_00630214(void*, unsigned int, int, int);

struct CRbxChildFrame {
    char pad[0x20];
    void* hwnd;
    char pad2[0xd4 - 0x24];
    int field_d4;
    int method(void* arg);
};

int CRbxChildFrame::method(void* arg)
{
    int result = (int)sub_006303BE(arg, 0);
    if (result == -1) {
        return 0;
    }
    this->field_d4 = 0;
    void* menu = GetSystemMenu(this->hwnd, 0);
    void* menu2 = sub_006302F8(menu);
    void* hmenu = *(void**)((char*)menu2 + 4);
    RemoveMenu(hmenu, 0xf120, 0);
    RemoveMenu(*(void**)((char*)menu2 + 4), 0xf020, 0);
    RemoveMenu(*(void**)((char*)menu2 + 4), 0xf030, 0);
    RemoveMenu(*(void**)((char*)menu2 + 4), 0xf010, 0);
    RemoveMenu(*(void**)((char*)menu2 + 4), 0xf000, 0);
    void* obj = sub_006302FE(this->hwnd, 0xe900, 1);
    sub_006303B8(obj, 0x800000, 0, 0);
    sub_00630214(obj, 0x200, 0, 0x20);
    return 0;
}
