// from server: 87% by colin
struct CXTPFrameWndBase {
    void OnFrameSize(int* p);
};

void CXTPFrameWndBase::OnFrameSize(int* p)
{
    int flags;
    int* q;
    int v;

    flags = (p[2] == 0) ? 1 : 0;
    flags |= 0x14;
    if (p[2] == 0 && *(int*)((char*)this + 0x180) == 0)
        flags |= 2;

    *(int*)((char*)this + 0xc4) = p[5];

    if (p[15] != 0) {
        if (((int (__stdcall*)(void))*(void**)(*(int*)this + 0x188))() != 0) {
            *(int*)((char*)this + 0x1d0) = p[16];
            *(int*)((char*)this + 0x1d4) = p[17];
            *(int*)((char*)this + 0x1d8) = p[18];
            *(int*)((char*)this + 0x1dc) = p[19];
        }
    }

    q = *(int**)((char*)this + 0x184);
    q[5] = p[6];
    q = *(int**)((char*)this + 0x184);
    q[6] = p[7];
    q[7] = p[8];
    q[8] = p[9];
    q[9] = p[10];
    q = *(int**)((char*)this + 0x184);
    q[10] = p[12];
    q[11] = p[13];

    v = (p[1] == 0) ? 0x80 : 0x40;
    v |= flags;

    ((void (__stdcall*)(int, int, int, int, int, int))0x63002e)(0, p[3], p[4], 0, 0, v);

    *(int*)((char*)this + 0xd8) = p[1];

    if (p[2] != 0) {
        ((void (__stdcall*)(void))*(void**)(*(int*)this + 0x17c))();
    }
}
