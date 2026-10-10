// from server: 6% by colin
struct CXTButton {
    char pad[0x20];
    void* hwnd;
    char pad2[0x5c];
    void* field80;
    char pad3[0x54];
    char field54[0x2c];
    void SetIcon(void* p);
    void SetText(void* p);
    void SetTooltip(void* p);
    void Update();
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" int __stdcall IsWindow(void* hwnd);
extern "C" int __stdcall InvalidateRect(void* hwnd, const void* rect, int erase);

void CXTButton::Update()
{
    void* old = field80;
    field80 = 0;
    if (0) {}
}
