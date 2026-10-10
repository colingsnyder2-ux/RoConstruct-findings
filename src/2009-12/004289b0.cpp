// from server: 93% by atomic.potato
struct CMainFrame
{
    unsigned char padding[0xfc];
    unsigned char value;

    void function(void *argument);
};

struct VTable
{
    void (__thiscall *function)(void *, unsigned char);
};

void CMainFrame::function(void *argument)
{
    VTable *table = *(VTable **)argument;
    table->function(argument, value);
}
