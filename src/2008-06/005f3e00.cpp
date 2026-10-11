// from server: 18% by colin
struct S {
    char pad[0x58];
    unsigned int flags;
    void sub_5f3d80();
    S();
};

S::S()
{
    *(unsigned int*)this = 0x840a14;
    unsigned char al = 1;
    *(unsigned char*)((char*)this + 0x58) = al;
    if ((*(unsigned int*)((char*)this + 0x58) & 0x10) != 0) {
        if ((al & (*(unsigned int*)((char*)this + 0x58) >> 4)) != 0) {
            sub_5f3d80();
        }
    }
}
