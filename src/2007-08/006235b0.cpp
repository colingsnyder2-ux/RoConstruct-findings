// from server: 79% by colin
struct ArrowPanel {
    char pad[0x140];
    int field140;
    int field144;
    void construct(int a, int b, int c, int d, int e);
};

extern "C" void __fastcall sub_61c140(void* self, int a, int b, int c);

void ArrowPanel::construct(int a, int b, int c, int d, int e)
{
    sub_61c140(this, a, b, c);
    field140 = d;
    *(int*)((char*)this + 0x00) = 0x7c4794;
    *(int*)((char*)this + 0x04) = 0x7c478c;
    *(int*)((char*)this + 0x10) = 0x7c4784;
    *(int*)((char*)this + 0x14) = 0x7c4774;
    *(int*)((char*)this + 0x2c) = 0x7c4764;
    *(int*)((char*)this + 0x44) = 0x7c4754;
    *(int*)((char*)this + 0x5c) = 0x7c4744;
    *(int*)((char*)this + 0x74) = 0x7c4734;
    *(int*)((char*)this + 0x8c) = 0x7c4724;
    *(int*)((char*)this + 0xe8) = 0x7c471c;
    field144 = e;
}
