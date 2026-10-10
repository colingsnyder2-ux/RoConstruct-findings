// from server: 86% by atomic.potato
struct CCommandBarCmdUI
{
    int Update();
};

int CCommandBarCmdUI::Update()
{
    typedef int (__thiscall *Function)(CCommandBarCmdUI *, int, int);
    Function function = *(Function *)(*(CCommandBarCmdUI **)this + 0x1F4);
    return function(this, 1, 0);
}
