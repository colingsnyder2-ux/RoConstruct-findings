// from server: 22% by colin
struct DxUserInput {
    char pad[0x59];
    char unk59;
    char pad2[0x16c - 0x5a];
    void* unk16c;
    char pad3[0x178 - 0x170];
    void* unk178;
    char pad4[0x192 - 0x17c];
    char unk192;
    void method();
};

extern "C" {
    int __stdcall ClientToScreen(void*, void*);
    int __stdcall InvalidateRect(void*, const void*, int);
    void* __stdcall LoadCursorA(void*, const char*);
    void* __stdcall SetCursor(void*);
    int __stdcall SetCursorPos(int, int);
    void __stdcall sub_6A17F0();
    void __stdcall sub_6A0926();
    void __stdcall sub_467B50(void*);
}

void DxUserInput::method()
{
    void* v1 = this->unk178;
    void* v2 = *(void**)v1;
    void (__stdcall *fn)(void*) = *(void (__stdcall**)(void*))((char*)v2 + 0x20);
    fn(v1);

    int local10;
    int local14;
    sub_467B50(&local10);

    float f14 = *(float*)&local14;
    sub_6A17F0();
    int edi = (int)f14;

    float f10 = *(float*)&local10;
    sub_6A17F0();
    int eax2 = (int)f10;

    int local8 = eax2;
    int localC = edi;

    void* v3 = this->unk16c;
    void* v4 = *(void**)((char*)v3 + 0x20);
    ClientToScreen(v4, &local8);

    int a = localC;
    int b = local8;
    SetCursorPos(b, a);

    if ((*(unsigned char*)0x96dfe0 & 1) == 0) {
        *(unsigned int*)0x96dfe0 |= 1;
        sub_6A0926();
        void* h = LoadCursorA(0, (const char*)0x7f00);
        *(void**)0x96dfdc = h;
    }

    void* cur = *(void**)0x96dfdc;
    SetCursor(cur);

    void* v5 = this->unk16c;
    void* v6 = *(void**)((char*)v5 + 0x20);
    InvalidateRect(v6, 0, 1);

    this->unk192 = 0;
    this->unk59 = 0;
}
