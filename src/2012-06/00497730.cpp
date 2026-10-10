// from server: 57% by atomic.potato
struct CRobloxWnd
{
};

void __cdecl RenderJob(int a, void *p)
{
    if (a == 4)
    {
        *(unsigned int *)p = 0x00D70E30;
        *((unsigned char *)p + 4) = 0;
        *((unsigned char *)p + 5) = 0;
    }
}
