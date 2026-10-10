// from server: 55% by colin
extern "C" __declspec(dllimport) void __stdcall free(void*);

extern "C" void __cdecl __security_check_cookie(unsigned int cookie);

extern unsigned int __security_cookie;

void __cdecl sub_0051EB10(void* a1, void (__cdecl *a2)(void*, void*), void* a3, void* a4)
{
    unsigned char buf[0x26c];
    unsigned int cookie;

    cookie = __security_cookie;
    *(unsigned int*)(buf + 0x26c) = cookie ^ (unsigned int)&buf;

    if (a1 != 0)
    {
        if (a2 != 0)
        {
            *(void**)(buf + 0x248) = a4;
            a2(a1, buf);
            __security_check_cookie(*(unsigned int*)(buf + 0x26c) ^ (unsigned int)&buf);
            return;
        }
        free(a1);
    }

    __security_check_cookie(*(unsigned int*)(buf + 0x26c) ^ (unsigned int)&buf);
}
