// from server: 43% by colin
struct UString_sink
{
    char pad0[0x14];
    int* field14;
    char pad18[0xC];
    int* field24;
    char pad28[0xC];
    int* field34;
    char pad38[0x8];
    int field40;
    char pad44[0x4];
    int field48;
    int field4C;
    int field50;

    int stream_buffer();
};

int UString_sink::stream_buffer()
{
    int* p14 = field14;
    int* p24 = field24;
    int diff = *p24 - *p14;
    if (diff > 0)
    {
        extern int __stdcall sub_77e520(int, int);
        sub_77e520(*p14, diff);
        int v4c = field4C;
        *field14 = v4c;
        *field24 = v4c;
        *field34 = field50 + v4c - v4c;
    }
    if (field48)
    {
        extern int __stdcall sub_77e604(int);
        sub_77e604(field48);
    }
    return 0;
}
