// from server: 53% by atomic.potato
typedef unsigned int DWORD;

extern "C" int __cdecl sub_7EB880();
extern "C" int __cdecl sub_7EB8A0();
extern "C" void __cdecl __cpuid(int*, int);

int sub_7EB900()
{
    DWORD regs[2];
    regs[0] = 0;
    regs[1] = 0;

    if (sub_7EB880() >= 1)
    {
        if (sub_7EB8A0() != 0)
        {
            int cpuInfo[4];
            __cpuid(cpuInfo, 1);
            regs[1] = cpuInfo[3];
        }
    }

    if ((regs[1] & 0x10000000) == 0)
    {
        return 1;
    }

    int cpuInfo2[4];
    __cpuid(cpuInfo2, 1);
    regs[0] = cpuInfo2[1];
    return (regs[0] >> 16) & 0xff;
}
