// from server: 50% by tester
struct CXTPImageManagerIconSet {
    void func();
};

struct Inner {
    void sub_6EBD30(int*, int*, int*);
    void sub_6D7CF0();
};

struct Inner2 {
    void sub_6FFAB0(int, int);
};

extern "C" void __stdcall sub_6301E4(int);
extern "C" void __stdcall sub_62FC62(void*);
extern "C" void __stdcall sub_62FF20();

void CXTPImageManagerIconSet::func() {
    int flag;
    int a, b, c;
    int i;
    void* p;

    flag = (*(int*)((char*)this + 0x30) != 0) ? -1 : 0;
    if (flag != 0) {
        do {
            ((Inner*)((char*)this + 0x24))->sub_6EBD30(&a, &b, &c);
            sub_6301E4(c);
        } while (flag != 0);
    }
    ((Inner*)((char*)this + 0x24))->sub_6D7CF0();

    i = 0;
    while (i < *(int*)((char*)this + 0x48)) {
        if (i < 0 || i >= *(int*)((char*)this + 0x48)) {
            sub_62FF20();
        }
        p = *(void**)(*(int*)((char*)this + 0x44) + i * 4);
        if (p != 0) {
            ((Inner2*)p)->sub_6FFAB0(0, 0);
            sub_62FC62(p);
        }
        i++;
    }
    ((Inner2*)((char*)this + 0x40))->sub_6FFAB0(0, -1);
}
