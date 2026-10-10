// from server: 54% by colin
struct CXTPImageManagerIconSet {
    void sub_6486B0(int);
    void sub_64B280(void*);
    void sub_64C480(void*);
    void sub_64C680();
    void sub_6496A0();
    int func(int, int, int, int);
};

int CXTPImageManagerIconSet::func(int a1, int a2, int a3, int a4) {
    int local8;
    int localC;
    sub_6486B0(1);
    sub_64B280(&localC);
    sub_64C480(&local8);
    *(int*)((char*)this + 0x2c) = localC;
    *(int*)((char*)this + 0x28) = local8;
    *(int*)((char*)this + 0xb0) = 0;
    if (*(int*)((char*)this + 0xb4) != 0) {
        sub_64C680();
    }
    sub_6496A0();
    return 1;
}
