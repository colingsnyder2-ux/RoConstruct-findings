// from server: 87% by colin
struct CArray {
    char pad[0x20];
    int field20;
    int field24;
    int field28;
    int field2c;
    int field30;
    int field34;
    void sub_6f6040();
    void sub_6d2910(int, void*);
    void* func_6f60f0(void* arg);
};

void* CArray::func_6f60f0(void* arg)
{
    *(int*)((char*)arg + 0x2c) = field34;
    *(int*)((char*)arg + 0x28) = *(int*)(field34 + 0xb4);
    sub_6d2910(field28, arg);
    sub_6f6040();
    return arg;
}
