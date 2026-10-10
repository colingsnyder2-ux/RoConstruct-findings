// from server: 38% by colin
struct CXTCaptionButton {
    void dtor_body();
    int field_0;
    char pad[0x50];
    int field_54;
    char pad2[0x44];
    int field_9c;
};

void CXTCaptionButton::dtor_body()
{
    *(int*)this = 0x7deccc;
    *(int*)((char*)this + 0x54) = 0x7decb8;
    ((void (__thiscall*)(CXTCaptionButton*))0x714ae0)(this);
    if (field_9c) {
        ((void (__thiscall*)(int))0x6301e4)(field_9c);
        field_9c = 0;
    }
    ((void (__thiscall*)(char*))0x691c20)((char*)this + 0x54);
    ((void (__thiscall*)(CXTCaptionButton*))0x7384de)(this);
}
