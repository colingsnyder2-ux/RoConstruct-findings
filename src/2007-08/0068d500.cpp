// from server: 76% by colin
// roc 2007-08 0068d500  unit: CXTPTabClientWnd::CSingleWorkspace  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068d500

struct CSingleWorkspace {
    void SetActive(int);
};

extern "C" int __cdecl sub_474f20();
extern "C" int __cdecl sub_68bde0();
extern "C" void __cdecl sub_62ff4a(void*, int);

void CSingleWorkspace::SetActive(int arg)
{
    if (*(int*)((char*)this + 0xc0) == arg)
        return;
    if (*(int*)((char*)this + 0xb4) != 0)
        return;
    if (*(int*)((char*)this + 0x80) != 0)
        return;

    if (sub_474f20() == 1)
    {
        int v = sub_68bde0();
        int* p;
        if (v != 0)
            p = (int*)(v - 0x58);
        else
            p = 0;
        if (p[8] != 0)
        {
            int w = sub_68bde0();
            int* q;
            if (w != 0)
                q = (int*)(w - 0x58);
            else
                q = 0;
            int flag = (arg != 0) ? 5 : 0;
            sub_62ff4a(q, flag);
        }
    }

    void** vt = *(void***)this;
    void (*fn)(void*) = (void (*)(void*))vt[0x13c / 4];
    *(int*)((char*)this + 0xc0) = arg;
    fn(this);

    void** vt2 = *(void***)((char*)this + 0x54);
    void (*fn2)(void*) = (void (*)(void*))vt2[2];
    fn2((char*)this + 0x54);
}
