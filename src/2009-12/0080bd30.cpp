// from server: 74% by atomic.potato
extern "C" int __cdecl sub_7f41de(int, int, int);
extern "C" void __cdecl sub_80a3d0(int);

int sub_80bd30(unsigned short value)
{
    int eax = (unsigned int)value;
    eax = sub_7f41de(eax, 2, eax);
    sub_80a3d0(eax);
    return eax;
}
