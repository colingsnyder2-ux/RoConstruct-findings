// from server: 43% by colin
struct RBX_ImageButton {
    char pad[0x100];
    int field_100;
    char field_104;
    void construct(int a, int b);
};

void RBX_ImageButton::construct(int a, int b)
{
    ((void (__thiscall*)(RBX_ImageButton*))0x600750)(this);
    field_100 = a;
    *(int*)this = 0x7c3eec;
    *(int*)((char*)this + 4) = 0x7c3ee4;
    *(int*)((char*)this + 0x10) = 0x7c3edc;
    *(int*)((char*)this + 0x14) = 0x7c3ecc;
    *(int*)((char*)this + 0x2c) = 0x7c3ebc;
    *(int*)((char*)this + 0x44) = 0x7c3eac;
    *(int*)((char*)this + 0x5c) = 0x7c3e9c;
    *(int*)((char*)this + 0x74) = 0x7c3e8c;
    *(int*)((char*)this + 0x8c) = 0x7c3e7c;
    *(int*)((char*)this + 0xe8) = 0x7c3e74;
    field_104 = 0;
    ((void (__thiscall*)(RBX_ImageButton*, int))0x541bf0)(this, b);
}
