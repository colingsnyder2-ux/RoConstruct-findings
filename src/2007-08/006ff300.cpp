// from server: 67% by colin
struct CAutoHidePanelTabManager
{
    void* vtable;
    int field_4;
    int field_8;
    char pad_0C[0x48];
    int field_54;
    int field_58;
    int field_5C;

    int RemoveTab(int index);
void sub_006fe810(int);
};

extern "C" void __stdcall sub_006d26b0(int, int);
extern "C" void __stdcall sub_006301e4(void*);
extern "C" void __stdcall sub_0062ff20(void*);


int CAutoHidePanelTabManager::RemoveTab(int index)
{
    if (index < 0)
        return 0;
    if (index >= this->field_5C)
        return 0;

    if (index >= this->field_5C)
    {
        sub_0062ff20((void*)((char*)this + 0x54));
        return 0;
    }

    int* arr = (int*)((char*)this + 0x54);
    int item = *(int*)(arr[1] + index * 4);

    int wasCurrent = 0;
    if (this->field_4 == item)
        wasCurrent = 1;
    if (this->field_8 == item)
        this->field_8 = 0;

    sub_006d26b0(index, 1);

    void** vt = *(void***)item;
    typedef void (__stdcall *Fn1)(void*);
    ((Fn1)vt[0x5C / 4])((void*)item);

    sub_006301e4((void*)item);

    if (wasCurrent)
        sub_006fe810(index);

    void** vt2 = *(void***)this;
    typedef void (__stdcall *Fn2)(void*);
    ((Fn2)vt2[0x1C / 4])(this);

    return 1;
}
