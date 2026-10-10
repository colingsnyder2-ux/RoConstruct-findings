// from server: 94% by atomic.potato
extern "C" void __stdcall f420be0(void*, void*, int);

struct CRobloxTreeCtrlNode
{
    void __stdcall f(void*, int);
};

void __stdcall CRobloxTreeCtrlNode::f(void* out, int value)
{
    if (value != 4)
    {
        f420be0(this, out, value);
        return;
    }

    *(unsigned int*)out = 0x00b7d280;
    ((unsigned char*)out)[4] = 0;
    ((unsigned char*)out)[5] = 0;
}
