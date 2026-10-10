// from server: 52% by colin
struct AIChaseController {
    void construct();
    void sub_5B02A0(int, int);
    void sub_5B0170();
    char pad[0x100];
};

void AIChaseController::construct()
{
    *(int*)((char*)this + 0x00) = 0x7b624c;
    *(int*)((char*)this + 0x04) = 0x7b6244;
    *(int*)((char*)this + 0x10) = 0x7b623c;
    *(int*)((char*)this + 0x14) = 0x7b622c;
    *(int*)((char*)this + 0x2c) = 0x7b621c;
    *(int*)((char*)this + 0x44) = 0x7b620c;
    *(int*)((char*)this + 0x5c) = 0x7b61fc;
    *(int*)((char*)this + 0x74) = 0x7b61ec;
    *(int*)((char*)this + 0x8c) = 0x7b61dc;
    *(int*)((char*)this + 0xe8) = 0x7b61c4;

    sub_5B02A0(0, 0);
    sub_5B02A0(1, 0);

    extern void __cdecl sub_630AF7(void*, int, int, void*);
    sub_630AF7((char*)this + 0xfc, 8, 2, (void*)0x492360);

    sub_5B0170();
}
