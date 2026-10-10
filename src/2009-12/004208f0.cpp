// from server: 60% by atomic.potato
struct CRobloxTreeCtrlNode
{
    void __cdecl f(int *value, int count);
};

void CRobloxTreeCtrlNode::f(int *value, int count)
{
    if (count == 4)
    {
        *(int *)value = 0x00b04288;
        *((unsigned char *)value + 4) = 0;
        *((unsigned char *)value + 5) = 0;
    }
}
