// from server: 54% by atomic.potato
struct CBitmapDC
{
    char pad108[0x108];
    int first;
    char pad10c[0x20];
    int second;
    char pad130[0x14];

    int f();
};

extern "C" int BitmapDCCheck(void*);

int CBitmapDC::f()
{
    if (BitmapDCCheck((char*)this + 0x108))
        return 1;
    return !BitmapDCCheck((char*)this + 0x12c);
}
