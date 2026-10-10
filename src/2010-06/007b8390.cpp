// from server: 76% by atomic.potato
struct CCommandBarCmdUI
{
    virtual void Update(int, int);
    void f();
};

void CCommandBarCmdUI::f()
{
    Update(1, 0);
}
