// from server: 77% by tester
struct S
{
    void f();
};

extern "C" int __cdecl sub_5d8a10();
extern "C" int __cdecl sub_5d8b10();
extern "C" int __cdecl sub_5e7b90();
extern "C" int __cdecl sub_5e7ba0();
extern "C" void __cdecl sub_5dbe70();

void S::f()
{
    int a = sub_5d8a10();
    if (a)
    {
        int esi = a + 0x228;
        if (esi)
        {
            int b = sub_5d8b10();
            if (b)
            {
                int edi = b + 0x228;
                if (edi)
                {
                    int e = sub_5e7b90();
                    if (e)
                    {
                        int ecx;
                        for (;;)
                        {
                            ecx = *(int*)(e + 0xc);
                            if (esi == ecx)
                                ecx = *(int*)(e + 0x10);
                            if (ecx == edi)
                                break;
                            if (!sub_5e7ba0())
                                goto done;
                            e = sub_5e7b90();
                            if (!e)
                                goto done;
                        }
                        *(unsigned char*)((char*)this + 0x1e8) |= 4;
                        return;
                    }
                }
            }
        }
    }
done:
    if (*(unsigned char*)((char*)this + 0x1e8) & 4)
    {
        sub_5dbe70();
    }
}
