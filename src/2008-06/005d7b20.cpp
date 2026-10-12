// from server: 67% by colin
struct GetSetImpl {
    int get;
    int set;
    void invoke(int, int);
};

void GetSetImpl::invoke(int a, int b)
{
    int* p = (int*)a;
    if (p)
        p = (int*)((char*)p - 0x14);
    else
        p = 0;
    int idx = *(int*)b;
    int off = *(int*)((char*)this + 0x20);
    int base = *(int*)((char*)p + 0x150);
    int val = *(int*)(base + off);
    val += *(int*)((char*)this + 0x1c);
    int fn = *(int*)((char*)this + 0x18);
    int arg = val + (int)p + 0x150;
    ((void (__stdcall*)(int))fn)(arg);
}
