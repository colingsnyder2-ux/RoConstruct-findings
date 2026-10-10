// from server: 70% by colin
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CRobloxTreeCtrl
{
    void* sub_665f90(void*, int);
    void sub_665c30(void*, int, int);
    int sub_666770(void*, int, int);
    int sub_666770_impl(void*, int, int);
};

int CRobloxTreeCtrl::sub_666770(void* arg1, int arg2, int arg3)
{
    int result = 0;
    int flag = (arg1 != 0) ? 2 : 0;
    void* item = sub_665f90(arg1, 4);
    if (item == 0)
        return result;
    do
    {
        int state = (int)sub_665f90(item, 0x23);
        if ((state & 2) != flag)
            sub_665c30(item, flag, 2);
        result |= state & 1;
        if (arg2 != 0 && (state & 0x20) != 0)
            result |= sub_666770_impl(item, arg2, arg3);
        item = (void*)SendMessageA(*(void**)((char*)this + 0x34), 0x110a, 1, (long)item);
    } while (item != 0);
    return result;
}
