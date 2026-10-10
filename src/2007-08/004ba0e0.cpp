// from server: 36% by colin
struct RakPeer {
    void SendBuffered(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13);
};

void RakPeer::SendBuffered(
    unsigned int a1,
    unsigned int a2,
    unsigned int a3,
    unsigned int a4,
    unsigned int a5,
    unsigned int a6,
    unsigned int a7,
    unsigned int a8,
    unsigned int a9,
    unsigned int a10,
    unsigned int a11,
    unsigned int a12,
    unsigned int a13)
{
    struct Local {
        unsigned int x;
        unsigned int y;
        unsigned int z;
    };

    Local l;
    l.x = a2;
    l.y = a3;
    l.z = a4;

    if (a1 != 0) {
        unsigned int v1 = *(unsigned int*)a1;
        unsigned int v2 = *(unsigned int*)(a1 + 0xc);
        void (__stdcall *fn)(unsigned int, unsigned int, Local, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
        fn = *(void (__stdcall **)(unsigned int, unsigned int, Local, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int*)this + 0x60);
        fn(v1, v2, l, a5, a6, a7, a8, a9, a10, a11, a12, a13, a1);
    } else {
        void (__stdcall *fn)(unsigned int, unsigned int, Local, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
        fn = *(void (__stdcall **)(unsigned int, unsigned int, Local, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int*)this + 0x60);
        fn(0, 0, l, a5, a6, a7, a8, a9, a10, a11, a12, a13, a1);
    }
}
