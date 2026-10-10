// from server: 45% by colin
struct P8Player {
    char pad0[0xe8];
    char padE8[0x10];
    char padF8[4];
    void destroy();
    void sub_5aff50();
    void sub_5bd150();
    void sub_5402b0();
};

void P8Player::destroy()
{
    *(int*)((char*)this + 0x00) = 0x7b60bc;
    *(int*)((char*)this + 0x04) = 0x7b60b4;
    *(int*)((char*)this + 0x10) = 0x7b60ac;
    *(int*)((char*)this + 0x14) = 0x7b609c;
    *(int*)((char*)this + 0x2c) = 0x7b608c;
    *(int*)((char*)this + 0x44) = 0x7b607c;
    *(int*)((char*)this + 0x5c) = 0x7b606c;
    *(int*)((char*)this + 0x74) = 0x7b605c;
    *(int*)((char*)this + 0x8c) = 0x7b604c;
    *(int*)((char*)this + 0xe8) = 0x7b6034;

    void* p = *(void**)((char*)this + 0xf8);
    if (p) {
        (*(void(__thiscall**)(void*, int))*(void**)p)(p, 1);
    }
    *(void**)((char*)this + 0xf8) = 0;

    sub_5bd150();
    sub_5402b0();
}
