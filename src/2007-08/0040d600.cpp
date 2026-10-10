// from server: 98% by colin
struct ChatEnter {
    void construct();
};

extern "C" void __fastcall sub_0063025c(void*);

void ChatEnter::construct()
{
    sub_0063025c(this);
    *(int*)((char*)this + 0x88) = 0;
    *(int*)this = 0x78661c;
    *(int*)((char*)this + 0x8c) = 0;
    *(int*)((char*)this + 0x90) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x94) = 0x7864e0;
    *(int*)((char*)this + 0x9c) = 0;
    *(int*)((char*)this + 0xa0) = 0;
    *(int*)((char*)this + 0xa4) = 0;
}
