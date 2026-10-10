// from server: 78% by colin
struct CXTPScrollBase {
    char pad[0x60];
    void* field60;
    void method71d850(int, int, int);
    virtual void vfunc14(int, int);
    void func71da30();
};

extern "C" {
    int __stdcall GetCursorPos(void*);
    int __stdcall ScreenToClient(void*, void*);
    int __stdcall GetDoubleClickTime(void);
    int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);
}

void CXTPScrollBase::func71da30()
{
    void* p = this->field60;
    if (p == 0)
        return;

    int pt[2];
    GetCursorPos(pt);

    void* hwnd = *(void**)((char*)this->field60 + 0x2c);
    ScreenToClient(hwnd, pt);

    this->method71d850(0, pt[0], pt[1]);

    if (*(int*)p != 0) {
        unsigned int t = GetDoubleClickTime();
        unsigned int v = t / 10;
        void* hwnd2 = *(void**)((char*)this->field60 + 0x2c);
        *(void**)((char*)p + 0x18) = (void*)SetTimer(hwnd2, 0x5b31, v, 0);
        void** vt = *(void***)this;
        void* arg = *(void**)((char*)p + 0x14);
        typedef void (__thiscall *Fn)(void*, void*, int);
        Fn fn = (Fn)vt[5];
        fn(this, arg, 0);
    }
}
