// from server: 61% by atomic.potato
struct CStatusCmdUI;

extern "C" int __stdcall func_009e79f0(CStatusCmdUI*, int);

struct CStatusCmdUI
{
    int Update(int);
};

int CStatusCmdUI::Update(int value)
{
    int result;
    int owner = *(int*)((char*)this + 0x14);
    *(int*)((char*)this + 0x18) = 1;
    if (owner != 0)
    {
        result = func_009e79f0((CStatusCmdUI*)owner, *(int*)((char*)this + 8));
        if (result != 0)
            return result;
    }
    return 0;
}
