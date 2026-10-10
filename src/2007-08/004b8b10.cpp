// from server: 88% by colin
struct RakPeer
{
    char pad[0x6fc];
    void func_004b8b10(const char* a, const char* b);
};

extern "C" void __stdcall sub_004c9fc0(char* a, const char* b, const char* c, int d);

void RakPeer::func_004b8b10(const char* a, const char* b)
{
    if (a != 0 && *a != 0 && b != 0)
    {
        sub_004c9fc0((char*)this + 0x6fc, a, b, 1);
    }
}
