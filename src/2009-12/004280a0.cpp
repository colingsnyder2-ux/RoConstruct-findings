// from server: 50% by atomic.potato
extern "C" void imported_call(void* object, void* argument);

struct CMainFrame
{
    CMainFrame* f(void* argument);
};

CMainFrame* CMainFrame::f(void* argument)
{
    imported_call((char*)this + 0x48, 0);
    return this;
}
