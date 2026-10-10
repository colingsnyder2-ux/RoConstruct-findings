// from server: 82% by colin
struct CXTPPropertyGridItemBool
{
    int OnEdit(int, int, int);
    int IsAllowEdit();
    int GetValue();
    int SetValue(int, int, int);
};

extern int __stdcall sub_6989A0(int, int, int);

int CXTPPropertyGridItemBool::OnEdit(int a, int b, int c)
{
    if (!sub_6989A0(a, b, c))
        return 0;

    if (*(int*)((char*)this + 0x110) != 0)
    {
        if (this->IsAllowEdit())
        {
            if (!this->GetValue())
            {
                this->SetValue(a, b, c);
            }
        }
    }

    return 1;
}
