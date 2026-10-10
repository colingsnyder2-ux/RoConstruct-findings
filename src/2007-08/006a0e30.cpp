// from server: 92% by tester
struct CXTPNewToolbarDlg {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    char pad18[0x1C];
    int field34;
    int sub_6A0B00(int, int);
    int sub_6A0E30(int, int);
};

extern "C" {
    int __stdcall GetCursorPos(void*);
    void* __stdcall LoadCursorA(void*, const char*);
    int __stdcall ReleaseCapture();
    void* __stdcall SetCapture(void*);
    void* __stdcall SetCursor(void*);
    int __stdcall sub_62FF02();
}

int CXTPNewToolbarDlg::sub_6A0E30(int a1, int a2)
{
    int eax;
    int edi;

    eax = this->field14;
    if (eax == 0) {
        eax = this->field34;
        eax = *(int*)(eax + 0xA0);
    }
    this->field4 = a1;
    if (eax != 0) {
        eax = *(int*)(eax + 0x20);
    }
    this->field0 = eax;
    SetCapture((void*)eax);
    this->field8 = 0;
    this->field10 = 0;
    this->fieldC = a2;
    GetCursorPos((void*)((char*)this + 0x18));
    edi = this->sub_6A0B00(0, 0);
    if (this->field10 != 0) {
        (*(void(__thiscall**)(int))(*(int*)this->field10 + 0x16C))(this->field10);
    }
    ReleaseCapture();
    sub_62FF02();
    SetCursor(LoadCursorA(0, (const char*)0x7F00));
    return edi;
}
