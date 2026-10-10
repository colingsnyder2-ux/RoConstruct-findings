// from server: 35% by atomic.potato
extern "C" void __stdcall ImportedCall(void*, void*);

struct CMainFrame
{
    void* f(void*);
};

void* CMainFrame::f(void* arg)
{
    ImportedCall((char*)this + 0x44, 0);
    return arg;
}
