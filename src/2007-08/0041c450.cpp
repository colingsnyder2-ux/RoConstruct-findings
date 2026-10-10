// from server: 34% by colin
extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __cdecl sub_573620(void* p);
extern "C" int __cdecl sub_41c310(void* self, void* a, void* b);

struct VDHTMLWindow_SignalDesc
{
    int f(void* a, void* b);
};

int VDHTMLWindow_SignalDesc::f(void* a, void* b)
{
    void* p = malloc(0x11c);
    if (p)
        sub_573620(p);
    else
        p = 0;
    return sub_41c310(this, p, a);
}
