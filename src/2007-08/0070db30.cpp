// from server: 26% by colin
extern "C" {
    void __stdcall sub_738808(int, int, int);
    void __stdcall sub_70cbf0();
    void __stdcall sub_70d1e0();
    void __stdcall sub_6305da();
    void __stdcall sub_738718();
}

struct CXTColorLum {
    char pad[0x7a4];
    void construct(int);
};

void CXTColorLum::construct(int arg)
{
    sub_738808(0x30, 0, 0x2461);
    *(int*)((char*)this + 0) = 0x7ddeb4;
    sub_70cbf0();
    *(char*)((char*)this + 0x88) = 0;
    sub_70d1e0();
    *(char*)((char*)this + 0x110) = 1;
    sub_6305da();
    *(int*)((char*)this + 0x1a0) = 0x7cc674;
    sub_6305da();
    *(int*)((char*)this + 0x1f4) = 0x7cc674;
    sub_6305da();
    *(int*)((char*)this + 0x248) = 0x7cc674;
    sub_6305da();
    *(int*)((char*)this + 0x29c) = 0x7cc674;
    sub_6305da();
    *(int*)((char*)this + 0x2f0) = 0x7cc674;
    sub_6305da();
    *(int*)((char*)this + 0x344) = 0x7cc674;
    sub_6305da();
    *(int*)((char*)this + 0x398) = 0x7dd964;
    sub_6305da();
    *(int*)((char*)this + 0x3ec) = 0x7dd964;
    sub_6305da();
    *(int*)((char*)this + 0x440) = 0x7dd964;
    sub_6305da();
    *(int*)((char*)this + 0x494) = 0x7dd964;
    sub_6305da();
    *(int*)((char*)this + 0x4e8) = 0x7dd964;
    sub_6305da();
    *(int*)((char*)this + 0x53c) = 0x7dd964;
    sub_6305da();
    *(int*)((char*)this + 0x590) = 0x7c5c1c;
    sub_6305da();
    *(int*)((char*)this + 0x5e4) = 0x7c5c1c;
    sub_6305da();
    *(int*)((char*)this + 0x638) = 0x7c5c1c;
    sub_6305da();
    *(int*)((char*)this + 0x68c) = 0x7c5c1c;
    sub_6305da();
    *(int*)((char*)this + 0x6e0) = 0x7c5c1c;
    sub_6305da();
    *(int*)((char*)this + 0x734) = 0x7c5c1c;
    sub_738718();
    *(int*)((char*)this + 0x7a0) = arg;
    *(int*)((char*)this + 0x788) = 0;
    *(int*)((char*)this + 0x78c) = 0;
    *(int*)((char*)this + 0x790) = 0;
    *(int*)((char*)this + 0x794) = 0;
    *(int*)((char*)this + 0x798) = 0;
    *(int*)((char*)this + 0x79c) = 0;
}
