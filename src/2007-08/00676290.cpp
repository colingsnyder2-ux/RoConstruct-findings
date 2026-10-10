// from server: 54% by colin
struct CXTPCustomizeCommandsListBox
{
    void func_00676290(int* param);
};

extern "C" int __stdcall sub_7383BE(int);
extern "C" void __stdcall sub_6321D0();
extern "C" void __stdcall CopyRect(void*, const void*);

void CXTPCustomizeCommandsListBox::func_00676290(int* param)
{
    int local[6];
    int v;
    int* p;
    int eax_val;
    int ebx_val;
    int edi_val;
    int esi_val;
    int* obj;

    eax_val = sub_7383BE(param[6]);
    CopyRect(local, param + 7);
    ebx_val = param[11];
    if (ebx_val != 0)
    {
        edi_val = *(int*)((char*)this + 0x54);
        esi_val = param[4] & 1;
        sub_6321D0();
        p = (int*)edi_val;
        obj = (int*)eax_val;
        v = *(int*)((char*)obj + 0x70);
        ((void (__stdcall*)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))v)(
            esi_val, 1, edi_val, local[0], local[1], local[2], local[3], ebx_val, eax_val, 0, 0, 0, 0, 0, 0, 0, 0);
    }
}
