// from server: 54% by colin
extern "C" {
    __declspec(dllimport) unsigned int __stdcall GetPixel(void*, int, int);
    __declspec(dllimport) void* __stdcall GetParent(void*);
    __declspec(dllimport) int __stdcall InvalidateRect(void*, const void*, int);
    __declspec(dllimport) int __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

struct CXTColorLum {
    char pad[0x20];
    void* hwnd;
    char pad2[0x30];
    void* field_54;
    char pad3[0x8];
    unsigned int field_60;
    char pad4[0x1c];
    unsigned int field_80;
    unsigned int field_84;
    unsigned int field_88;
    void method(int, int, int);
};

extern "C" void __stdcall sub_680800(void*, int, int);
extern "C" void __stdcall sub_680880(void*);
extern "C" void* __stdcall sub_6301c0(void*);

void CXTColorLum::method(int a2, int a3, int a4)
{
    void* p;
    int result;
    void* parent;
    void* obj;

    p = (this->field_54 != 0) ? *(void**)((char*)this->field_54 + 4) : 0;
    sub_680800(&p, 0, (int)p);

    result = GetPixel(p, 0, a4);
    if (result != -1) {
        this->field_60 = result;
        if (a4 != 0) {
            parent = GetParent(this->hwnd);
            obj = sub_6301c0(parent);
            SendMessageA(this->hwnd, this->field_60, 0x2742, *(long*)((char*)obj + 0x20));
        }
        this->field_80 = 0;
        this->field_84 = a4;
        this->field_88 = a4;
        InvalidateRect(this->hwnd, 0, 0);
    }
    sub_680880(&p);
}
