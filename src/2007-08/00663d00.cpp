// from server: 85% by colin
struct VCXTPReportRows_CXTPHeapObjectT
{
    int func_00663d00(int);
};

int VCXTPReportRows_CXTPHeapObjectT::func_00663d00(int arg)
{
    int i = 0;
    if (*(int*)((char*)this + 0x28) > 0)
    {
        do
        {
            if (i < 0 || i >= *(int*)((char*)this + 0x28))
                break;
            int obj = *(int*)(*(int*)((char*)this + 0x24) + i * 4);
            int v = (*(int (__thiscall**)(int))(*(int*)obj + 0x60))(obj);
            if (v == arg)
            {
                if (i < 0 || i >= *(int*)((char*)this + 0x28))
                    break;
                return *(int*)(*(int*)((char*)this + 0x24) + i * 4);
            }
            if (i < 0 || i >= *(int*)((char*)this + 0x28))
                break;
            obj = *(int*)(*(int*)((char*)this + 0x24) + i * 4);
            if ((*(int (__thiscall**)(int))(*(int*)obj + 0xc0))(obj) != 0)
            {
                if (i < 0 || i >= *(int*)((char*)this + 0x28))
                    break;
                obj = *(int*)(*(int*)((char*)this + 0x24) + i * 4);
                int inner = (*(int (__thiscall**)(int))(*(int*)obj + 0xb8))(obj);
                if ((*(int (__thiscall**)(int, int))(*(int*)inner + 0x80))(inner, arg) != 0)
                    return 0;
            }
            i++;
        } while (i < *(int*)((char*)this + 0x28));
    }
    return 0;
}
