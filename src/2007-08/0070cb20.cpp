// from server: 48% by colin
extern "C" {
    unsigned long __stdcall GetPixel(void*, int, int);
    void* __stdcall GetParent(void*);
    long __stdcall SendMessageA(void*, unsigned int, unsigned long, long);
}

struct CXTColorBase {
    char pad[0x20];
    void* field_20;
    char pad2[0x30];
    void* field_54;
    char pad3[0x08];
    int field_60;
    char pad4[0x1c];
    int field_80;
    int field_84;
    void Init(int, int, int);
};

extern "C" void __stdcall sub_680800(void*, int, int);
extern "C" void __stdcall sub_680880(void*);
extern "C" void* __stdcall sub_6301c0(void*);

void CXTColorBase::Init(int a, int b, int c)
{
    void* p;
    int pixel;
    void* parent;
    void* obj;

    p = (this->field_54 == 0) ? *(void**)((char*)this->field_54 + 4) : 0;
    sub_680800(&p, 0, (int)p);

    pixel = GetPixel(p, b, c);
    if (pixel != -1) {
        this->field_60 = pixel;
        if (c != 0) {
            parent = GetParent(this->field_20);
            obj = sub_6301c0(parent);
            SendMessageA(this->field_20, 0x2742, this->field_60, *(long*)((char*)obj + 0x20));
        }
    }

    this->field_80 = b;
    this->field_84 = c;

    sub_680880(&p);
}
