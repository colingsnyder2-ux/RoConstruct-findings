// from server: 94% by atomic.potato
extern "C" int __stdcall sub_00983144(int, int);

struct CRobloxWnd_PartDropTarget
{
    int thunk();
};

int CRobloxWnd_PartDropTarget::thunk()
{
    return sub_00983144(0, 0);
}
