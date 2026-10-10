// from server: 58% by colin
struct EnumPropDescriptor {
    char pad0[4];
    int field4;
    int field8;
    int fieldC;
    char pad10[4];
    int field14;
    int field18;

    void remove(int* arg);
};

extern "C" void __stdcall sub_57B180(int, int);

void EnumPropDescriptor::remove(int* arg)
{
    int idx = arg[1];
    if (idx >= 0) {
        int* arr = *(int**)((char*)this + 8);
        int count = *(int*)((char*)this + 0xC);
        int val = arr[count - 1];
        arr[idx] = val;
        *(int*)(val + 4) = idx;
        int newCount = *(int*)((char*)this + 0xC) - 1;
        sub_57B180(newCount, 0);
        arg[1] = -1;
    }
    int idx2 = arg[2];
    if (idx2 >= 0) {
        int* arr2 = *(int**)((char*)this + 0x14);
        int count2 = *(int*)((char*)this + 0x18);
        int val2 = arr2[count2 - 1];
        arr2[idx2] = val2;
        *(int*)(val2 + 8) = idx2;
        int newCount2 = *(int*)((char*)this + 0x18) - 1;
        sub_57B180(newCount2, 0);
        arg[2] = -1;
    }
    arg[3] = 0;
}
