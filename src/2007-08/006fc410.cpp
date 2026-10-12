// from server: 3% by colin
struct CXTPPropertyGridDelphiTheme {
    void Paint(int);
};

struct Helper {
    void* method(int, int);
};

extern "C" void* __stdcall sub_668f70();
extern "C" void* __stdcall sub_668770(void*, int);
extern "C" void __stdcall sub_682a20();
extern "C" void __stdcall sub_67ffa0();
extern "C" void __stdcall sub_680060();
extern "C" void __stdcall sub_680550();
extern "C" void __stdcall sub_6805d0();
extern "C" void __stdcall sub_680430();
extern "C" void __stdcall sub_6308b0();
extern "C" void __stdcall sub_7383e8();
extern "C" void __stdcall sub_69b980();
extern "C" void __stdcall sub_738688();
extern "C" void __stdcall sub_738bc2();
extern "C" void __stdcall sub_6301c0();
extern "C" void __stdcall sub_6457a0();
extern "C" void __stdcall sub_6308aa();
extern "C" void __stdcall sub_6996d0();
extern "C" void __stdcall sub_630238();
extern "C" void __stdcall sub_73850e();
extern "C" void __stdcall sub_41f680();

extern "C" void* __stdcall GetFocus();
extern "C" void* __stdcall GetParent(void*);
extern "C" void __stdcall CopyRect(void*, void*);
extern "C" void __stdcall CreateRectRgnIndirect(void*);
extern "C" void __stdcall SetPixel(void*, int, int, unsigned int);

void CXTPPropertyGridDelphiTheme::Paint(int param)
{
    void* p = sub_668f70();
    void* q = sub_668770(p, 0x10);
    void* r = sub_668f70();
    void* s = sub_668770(r, 0x14);
    (void)q;
    (void)s;
    (void)param;
}
