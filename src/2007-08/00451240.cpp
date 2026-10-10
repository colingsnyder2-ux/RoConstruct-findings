// from server: 21% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall GetActiveWindow();
extern "C" void* __stdcall GetFocus();
extern "C" unsigned int __stdcall GetWindowTextA(void*, char*, int);
extern "C" int __stdcall GetWindowTextLengthA(void*);
extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
extern "C" void* __stdcall GetDC(void*);
extern "C" int __stdcall ReleaseDC(void*, void*);

struct ReportAbuseVerb {
    void* vptr;
    char pad[0x74];
    void* field_78;
    char pad2[0x70];
    void* field_ec;
    char pad3[0x7c];
    void* field_16c;
    char pad4[0x88];
    void* field_1f8;

    void method(int a, int b);
};

struct SomeObject {
    char pad[0xc];
    void* field_c;
};

extern "C" void __cdecl func_00403800();
extern "C" void __cdecl func_00403830();
extern "C" void __cdecl func_00408740();
extern "C" void __cdecl func_0040ace0(int);
extern "C" void __cdecl func_0040d550();
extern "C" void __cdecl func_0042e5d0();
extern "C" void __cdecl func_0044cf10();
extern "C" void __cdecl func_0044f310();
extern "C" void __cdecl func_0053ce20();
extern "C" void __cdecl func_00544f40();
extern "C" void __cdecl func_00548e90();
extern "C" void __cdecl func_005595a0();
extern "C" void __cdecl func_0056c0a0();
extern "C" void __cdecl func_0056c3b0();
extern "C" void __cdecl func_00637300();
extern "C" void __cdecl func_006386b0();

void ReportAbuseVerb::method(int a, int b)
{
    SomeObject* obj = (SomeObject*)a;
    void* esi = obj->field_c;
    int val = *(int*)((char*)esi + 0xf8);
    if (val != 5) {
        return;
    }
    func_006386b0();
    void* hwnd = GetActiveWindow();
    char text[0x100];
    GetWindowTextA(hwnd, text, 0x100);
    ReleaseDC(0, 0);
    void* focus = GetFocus();
    func_00637300();
    int len = GetWindowTextLengthA(focus);
    if (len == -1) {
        GetWindowTextA(0, text, 0x100);
        void* dc = GetDC(0);
        SendMessageA(dc, 0x181, 0, (long)text);
        int n = SendMessageA(dc, 0x18b, 0, 0);
        if (n > 10) {
            n = SendMessageA(dc, 0x18b, 0, 0);
            func_0040ace0(n - 1);
        }
    }
    func_0044cf10();
    func_00408740();
    func_00548e90();
    func_0044f310();
    func_00544f40();
    func_00403830();
    func_0040d550();
    func_00403800();
    func_0042e5d0();
    func_0053ce20();
    func_005595a0();
    func_0056c0a0();
    func_0056c3b0();
}
