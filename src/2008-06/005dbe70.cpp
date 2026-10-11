// from server: 43% by colin
struct S
{
    void f(float a);
};

extern "C" void __stdcall sub_0040db00(void*);
extern "C" void* __stdcall sub_0056b620(void*);
extern "C" void __stdcall sub_004b5950(void*, void*);

void S::f(float a)
{
    float v = *(float*)((char*)this + 0x1ac);
    if (a > v)
    {
        if (a <= v)
        {
            goto skip;
        }
    }
    else
    {
        if (a < v)
        {
            goto skip;
        }
    }
    if (a == *(float*)((char*)this + 0x1a8))
    {
        goto end;
    }
    *(float*)((char*)this + 0x1a8) = a;
    sub_0040db00((void*)0x97a460);
    if (*(float*)((char*)this + 0x1a8) == 0.0f)
    {
        goto end;
    }
    {
        unsigned char al = *(unsigned char*)((char*)this + 0x1e8);
        if (al & 2)
        {
            goto end;
        }
        al |= 2;
        *(unsigned char*)((char*)this + 0x1e8) = al;
    }
    {
        void* p = sub_0056b620((void*)0x97a37c);
        if (!p)
        {
            goto end;
        }
        sub_004b5950((char*)p + 0x10, &a);
    }
    return;
skip:
    if (a == v)
    {
        goto end;
    }
    goto check;
check:
    if (a == *(float*)((char*)this + 0x1a8))
    {
        goto end;
    }
    *(float*)((char*)this + 0x1a8) = a;
    sub_0040db00((void*)0x97a460);
    if (*(float*)((char*)this + 0x1a8) == 0.0f)
    {
        goto end;
    }
    {
        unsigned char al = *(unsigned char*)((char*)this + 0x1e8);
        if (al & 2)
        {
            goto end;
        }
        al |= 2;
        *(unsigned char*)((char*)this + 0x1e8) = al;
    }
    {
        void* p = sub_0056b620((void*)0x97a37c);
        if (!p)
        {
            goto end;
        }
        sub_004b5950((char*)p + 0x10, &a);
    }
end:
    return;
}
