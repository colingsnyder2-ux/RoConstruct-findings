// from server: 75% by colin
struct XTPPaintThemes_CXTPNativeXPTheme {
    void sub_6c2b90(void*);
};

extern "C" int __fastcall sub_6c26c0(void*);
extern "C" int __fastcall sub_63d710(void*, void*);
extern "C" void __fastcall sub_63cd70(void*, int);
extern "C" void __fastcall sub_63d2a0(void*, void*);

void XTPPaintThemes_CXTPNativeXPTheme::sub_6c2b90(void* arg)
{
    void* p = *(void**)((char*)arg + 0xfc);
    if (!sub_6c26c0(this))
        goto fail;
    if (!p)
        goto fail;
    if (*(int*)((char*)arg + 0xf8) != 2)
        goto fail;
    if (*(int*)((char*)p + 0xfc) == 5)
        goto fail;
    if (!sub_63d710(this, p))
        goto fail;
    if (*(int*)((char*)p + 0xf4) != 0)
        goto fail;
    {
        int (__fastcall *fn)(void*);
        fn = *(int (__fastcall **)(void*))((*(int**)arg)[0x6c / 4]);
        if (fn(arg))
            goto success;
        fn = *(int (__fastcall **)(void*))((*(int**)arg)[0xb4 / 4]);
        if (fn(arg))
            goto success;
        fn = *(int (__fastcall **)(void*))((*(int**)arg)[0x78 / 4]);
        if (!fn(arg))
            goto fail;
    }
success:
    sub_63cd70(this, 0xe);
    return;
fail:
    sub_63d2a0(this, arg);
}
