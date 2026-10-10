// from server: 60% by colin
struct CRobloxTreeCtrl {
    char pad[0x20];
    void* hwnd;
    char pad2[0x3c - 0x24];
    int field_3c;
    char pad3[0x60 - 0x40];
    int field_60;
    int field_64;
    char pad4[0xec - 0x68];
    void* field_ec;

    void sub_420C40(int a2, int a3);
};

extern "C" {
    int __stdcall sub_6304A8(int);
    int __stdcall sub_63047E(int, int, int, int);
    int __stdcall sub_62FF02(int, int, int, int);
    int __stdcall sub_6301C0(int);
    void __stdcall sub_41EFD0(int);
    void __stdcall sub_41F1F0(int);
    int __stdcall ClientToScreen(int, int);
    int __stdcall SendMessageA(int, int, int, int);
    int __stdcall SetCapture(int);
}

void CRobloxTreeCtrl::sub_420C40(int a2, int a3)
{
    int local_c;
    int local_10;
    int local_14;
    int local_18;
    int v;

    v = sub_6304A8(*(int*)(a2 + 0x3c));
    if (v != (int)this->field_ec) {
        if (this->field_ec != 0) {
            (*(void(**)(int))(*((int*)this->field_ec) + 4))(1);
        }
    }
    this->field_ec = (void*)v;
    if (v == 0) {
        *(int*)a3 = 0;
        return;
    }
    sub_63047E((int)this, (int)&local_18, *(int*)(a2 + 0x3c), 1);
    SendMessageA((int)this->hwnd, 0x1106, 0, 0);
    local_c = *(int*)(a2 + 0x60);
    local_10 = *(int*)(a2 + 0x64);
    local_c -= local_14;
    local_10 -= local_18;
    v = (int)this->field_ec;
    v = *(int*)(v + 4);
    v = sub_62FF02(v, 0, local_c, local_10);
    sub_41EFD0(*(int*)(*(int*)(v + 0x94)));
    ClientToScreen((int)this->hwnd, (int)&local_c);
    v = sub_62FF02(0, local_c, local_10, 0);
    sub_41F1F0(*(int*)(*(int*)(v + 0x94)));
    SetCapture((int)this->hwnd);
    sub_6301C0(0);
    *(int*)a3 = 0;
}
