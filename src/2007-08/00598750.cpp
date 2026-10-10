// from server: 38% by colin
struct AIController {
    char pad0[0xc];
    int field_c;
    char pad10[0x80];
    int field_8c;
    void construct();
    AIController();
};

extern "C" void __stdcall sub_597e90();
extern "C" int __stdcall sub_58e400();

AIController::AIController()
{
    construct();
    *(int*)((char*)this + 0x00) = 0x7b12f4;
    *(int*)((char*)this + 0x04) = 0x7b12e8;
    *(int*)((char*)this + 0x10) = 0x7b12e0;
    *(int*)((char*)this + 0x14) = 0x7b12d0;
    *(int*)((char*)this + 0x2c) = 0x7b12c0;
    *(int*)((char*)this + 0x44) = 0x7b12b0;
    *(int*)((char*)this + 0x5c) = 0x7b12a0;
    *(int*)((char*)this + 0x74) = 0x7b1290;
    *(int*)((char*)this + 0x8c) = 0x7b1280;
    field_c = sub_58e400();
}
