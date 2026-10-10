// from server: 93% by colin
struct RakPeer {
    char pad[0x714];
    int field_714;
    void func_004b8e90(int, int, int);
};

extern "C" int __stdcall sub_004c48e0(int, int, int, int, int);

void RakPeer::func_004b8e90(int a, int b, int c)
{
    int v = field_714;
    char buf[2];
    buf[0] = 0;
    buf[1] = 1;
    sub_004c48e0(*(int*)(v + c * 4), (int)buf, 2, a, b);
}
