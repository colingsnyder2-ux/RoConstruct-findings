// from server: 40% by colin
struct CXTPDockingPanePaintManager {
    int field0;
    int field4;
    int field8;
    int fieldC;
    char pad10[8];
    int field18;
    int ProcessMessage(unsigned int, unsigned int, unsigned int, unsigned int);
};

extern "C" int __stdcall GetCapture();
extern "C" int __stdcall GetMessageA(void*, void*, unsigned int, unsigned int);
extern "C" int __stdcall ClientToScreen(unsigned int, void*);
extern "C" int __stdcall PtInRect(const void*, void*);
extern "C" int __stdcall SetCapture(unsigned int);
extern "C" int __stdcall ReleaseCapture();
extern "C" int __stdcall DispatchMessageA(const void*);

extern "C" int __stdcall sub_6301C0(unsigned int);
extern "C" int __stdcall sub_681140(void*, void*);
extern "C" int __stdcall sub_6E5460();
extern "C" int __stdcall sub_6EA590(unsigned int, unsigned int);

int CXTPDockingPanePaintManager::ProcessMessage(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    if (GetCapture() != 0) {
        return 0;
    }
    unsigned int hwnd = *(unsigned int*)(d + 0x20);
    unsigned int v = sub_6301C0(hwnd);
    int saved0 = field0;
    int saved4 = field4;
    int saved8 = field8;
    int savedC = fieldC;
    int local3C = 0;
    if (sub_6301C0(GetCapture()) != (int)d) {
        DispatchMessageA(0);
        sub_6EA590(*(unsigned int*)((char*)&local3C + 4), local3C);
        field18 = 0;
        sub_6E5460();
        return local3C;
    }
    unsigned int ebx = c;
    unsigned int edx = b;
    unsigned int eax = a;
    int r = PtInRect(&saved0, 0);
    int flag = (r == 0) ? 0 : 1;
    if (flag != field18) {
        field18 = flag;
        sub_6E5460();
    }
    int msg;
    GetMessageA(&msg, 0, 0, 0);
    switch (msg) {
    case 0x200:
        {
            int x = (short)(local3C & 0xFFFF);
            int y = (short)((local3C >> 16) & 0xFFFF);
            if (ebx == 0) {
                ClientToScreen(*(unsigned int*)(d + 0x20), &x);
                sub_681140((void*)d, &x);
            }
        }
        break;
    case 0x1F:
        break;
    case 0x100:
        if (local3C == 0x1B) break;
        break;
    case 0x202:
        local3C = field18;
        break;
    case 0x204:
        break;
    default:
        DispatchMessageA(&msg);
        break;
    }
    DispatchMessageA(0);
    sub_6EA590(*(unsigned int*)((char*)&local3C + 4), local3C);
    field18 = 0;
    sub_6E5460();
    return local3C;
}
