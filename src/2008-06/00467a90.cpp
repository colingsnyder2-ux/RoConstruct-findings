// from server: 50% by atomic.potato
struct DxUserInput
{
    char pad0[0x192];
    bool m_flag;
    int f(int a, int b);
};

extern "C" int __stdcall sub_5CEB00(int a, int b);

int DxUserInput::f(int a, int b)
{
    if (m_flag)
    {
        return sub_5CEB00(a, b);
    }
    *(int*)a = 0;
    return 0;
}
