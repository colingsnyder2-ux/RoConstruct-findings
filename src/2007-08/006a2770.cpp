// from server: 72% by colin
struct CXTPDockBar
{
    char pad[0x58];
    struct Array
    {
        int* data;
        int size;
        int capacity;
    } arr;
    char pad2[0x6c - 0x58 - sizeof(Array)];
    void* field_6c;

    int func_006a2770(int a, int b);
};

extern "C" int __stdcall sub_006a17b0(int, int);
extern "C" void __stdcall sub_006d26b0(void*, int, int);
extern "C" void __stdcall sub_00632520(void*, int);
extern "C" void __stdcall sub_0062ff20();

int CXTPDockBar::func_006a2770(int a, int b)
{
    int result = sub_006a17b0(b, a);
    sub_006d26b0(&this->arr, result, 1);
    int idx = result - 1;
    if (idx >= 0 && idx < this->arr.size && this->arr.data[idx] == 0)
    {
        if (result >= 0 && result < this->arr.size && this->arr.data[result] == 0)
        {
            sub_006d26b0(&this->arr, result, 1);
        }
    }
    *(int*)((char*)b + 0x180) = 0;
    sub_00632520(this->field_6c, 1);
    return 0;
}
