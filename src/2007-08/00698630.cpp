// from server: 46% by colin
struct CXTPPropertyGridItem
{
    void Reset(int);
};

extern "C" void __stdcall sub_77D434(void*, void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" int __stdcall sub_77ECDC(void*, int, int);

extern "C" int __stdcall sub_5B4D40(void*);
extern "C" void* __stdcall sub_6F7190(void*, int);

void CXTPPropertyGridItem::Reset(int)
{
    char buf[8];

    sub_77D434(&buf, (char*)this + 0xa0);
    if (*(void**)((char*)this + 0xd4))
        sub_77D434(&buf, *(void**)((char*)this + 0xd4));

    void** vtbl = *(void***)this;
    void (__stdcall *fn)(void*, void*) = (void (__stdcall *)(void*, void*))vtbl[0xd8 / 4];
    fn(this, (char*)this + 0xa0);

    int n = sub_5B4D40(*(void**)((char*)this + 0xcc)) - 1;
    while (n >= 0)
    {
        void* item = sub_6F7190(*(void**)((char*)this + 0xcc), n);
        void** ivtbl = *(void***)item;
        void (__stdcall *ifn)(void*) = (void (__stdcall *)(void*))ivtbl[0x148 / 4];
        ifn(item);
        n--;
    }

    void* h = *(void**)((char*)this + 0xb4);
    if (h && *(void**)((char*)h + 0x20))
        sub_77ECDC(*(void**)((char*)h + 0x20), 0, 0);

    sub_77DDBC(&buf);
}
