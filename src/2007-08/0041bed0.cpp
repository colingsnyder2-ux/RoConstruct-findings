// from server: 26% by colin
extern "C" void __stdcall func_0052c940(int, int);

void func_0041bed0()
{
    if (*(unsigned char*)0x8bb468 & 1)
    {
        *(int*)0x8bb464;
        return;
    }
    *(unsigned int*)0x8bb468 |= 1;
    func_0052c940(-1, 0x89fe9c);
    *(int*)0x8bb464 = 0;
}
