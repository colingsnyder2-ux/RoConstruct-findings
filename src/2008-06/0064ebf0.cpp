// from server: 45% by colin
struct ChatWidget {
    char pad0[0x10];
    void* vtbl10;
    void* vtbl14;
    char pad18[0x8];
    void* vtbl20;
    void* vtbl24;
    char pad28[0x1c];
    void* vtbl44;
    char pad48[0x1c];
    void* vtbl64;
    char pad68[0x1c];
    void* vtbl84;
    char pad88[0x1c];
    void* vtbla4;
    char pada8[0x1c];
    void* vtblc4;
    char padc8[0x68];
    void* vtbl130;
    char pad134[0x8];
    float field13c;
    float field140;
    char pad144[0x8];
    void* field14c;

    ChatWidget(int, int);
};

extern "C" void __stdcall sub_802460();
extern "C" void __stdcall sub_642370(int);
extern "C" void __stdcall sub_55af90(int);

extern float dword_819ba8;
extern float dword_82f85c;

ChatWidget::ChatWidget(int a, int b) {
    sub_642370(a);
    field14c = 0;
    *(void**)this = (void*)0x84b5f4;
    vtbl10 = (void*)0x84b5e4;
    vtbl14 = (void*)0x84b5dc;
    vtbl20 = (void*)0x84b5d4;
    vtbl24 = (void*)0x84b5c4;
    vtbl44 = (void*)0x84b5b4;
    vtbl64 = (void*)0x84b5a4;
    vtbl84 = (void*)0x84b594;
    vtbla4 = (void*)0x84b584;
    vtblc4 = (void*)0x84b574;
    vtbl130 = (void*)0x84b56c;
    sub_802460();
    sub_55af90(b);
    field13c = dword_819ba8;
    field140 = dword_82f85c;
}
