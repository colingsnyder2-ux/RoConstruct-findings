// from server: 46% by colin
struct MyXTPCommandBars
{
    void sub_00634B00();
};

extern "C" void __stdcall sub_006301E4(void*);
extern "C" void __stdcall sub_006457E0(void*);
extern "C" void __stdcall sub_00634800(void*);
extern "C" void __stdcall sub_006A0950(void*);
extern "C" void __stdcall sub_0062FC62(void*);
extern "C" void* __stdcall sub_006ACD20();
extern "C" void __stdcall sub_006ACC90(void*);
extern "C" void __stdcall sub_0063BD90(void*);
extern "C" void __stdcall sub_00632D60(void*);
extern "C" void __stdcall sub_00632350(void*);
extern "C" void __stdcall sub_0063069A(void*);
extern "C" void __stdcall sub_0077DDBC(void*);

void MyXTPCommandBars::sub_00634B00()
{
    char* base = (char*)this;
    *(void**)base = (void*)0x7C51C4;

    if (*(void**)(base + 0x58))
    {
        sub_006301E4(*(void**)(base + 0x58));
        *(void**)(base + 0x58) = 0;
    }
    if (*(void**)(base + 0x20))
    {
        sub_006301E4(*(void**)(base + 0x20));
        *(void**)(base + 0x20) = 0;
    }
    sub_006457E0(*(void**)(base + 0x78));
    if (*(void**)(base + 0x78))
    {
        sub_006301E4(*(void**)(base + 0x78));
        *(void**)(base + 0x78) = 0;
    }
    sub_00634800(this);

    char* p = base + 0x90;
    int n = 4;
    do
    {
        if (*(void**)p)
        {
            void** obj = *(void***)p;
            void** vtbl = *(void***)obj;
            ((void (__stdcall*)(void*))vtbl[0x68 / 4])(obj);
            obj = *(void***)p;
            if (obj)
            {
                vtbl = *(void***)obj;
                ((void (__stdcall*)(void*, int))vtbl[1])(obj, 1);
            }
        }
        p += 4;
        --n;
    } while (n);

    void* v = *(void**)(base + 0x4C);
    if (v)
    {
        sub_006A0950(v);
        sub_0062FC62(v);
    }
    if (*(void**)(base + 0x50))
    {
        sub_006301E4(*(void**)(base + 0x50));
        *(void**)(base + 0x50) = 0;
    }
    if (*(void**)(base + 0x54))
    {
        sub_006301E4(*(void**)(base + 0x54));
        *(void**)(base + 0x54) = 0;
    }
    if (*(void**)(base + 0xA4))
    {
        sub_006301E4(*(void**)(base + 0xA4));
        *(void**)(base + 0xA4) = 0;
    }
    if (*(void**)(base + 0xB4))
    {
        sub_006301E4(*(void**)(base + 0xB4));
        *(void**)(base + 0xB4) = 0;
    }
    if (*(void**)(base + 0x74))
    {
        sub_006301E4(*(void**)(base + 0x74));
        *(void**)(base + 0x74) = 0;
    }

    void* r = sub_006ACD20();
    sub_006ACC90(r);

    if (*(void**)(base + 0xBC))
    {
        sub_0063BD90(*(void**)(base + 0xBC));
        if (*(void**)(base + 0xBC))
        {
            sub_006301E4(*(void**)(base + 0xBC));
            *(void**)(base + 0xBC) = 0;
        }
    }

    sub_00632D60(base + 0x7C);
    sub_0077DDBC(base + 0x70);
    sub_00632350(base + 0x2C);
    sub_0063069A(this);
}
