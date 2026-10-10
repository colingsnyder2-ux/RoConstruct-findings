// from server: 34% by colin
struct CXTPImageManagerIconSet {
    void func();
};

extern "C" void __stdcall sub_6ebd30(int*, int*, int*);
extern "C" void __stdcall sub_6301e4(int);
extern "C" void __stdcall sub_6d7cf0(int);
extern "C" void __stdcall sub_64ae10(int);
extern "C" void __stdcall sub_62fc62(int);
extern "C" void __stdcall sub_6ffab0(int, int, int);
extern "C" void __stdcall sub_62ff20();

void CXTPImageManagerIconSet::func() {
    int* self = (int*)this;
    int flag = -(self[0x30 / 4] != 0);
    if (flag != 0) {
        int* esi = (int*)((char*)this + 0x24);
        do {
            int a, b, c;
            sub_6ebd30(&a, &b, &c);
            sub_6301e4(c);
        } while (flag != 0);
    }
    sub_6d7cf0((int)((char*)this + 0x24));
    int i = 0;
    if (self[0x48 / 4] > 0) {
        do {
            if (i < 0 || i >= self[0x48 / 4]) {
                sub_62ff20();
            }
            int* arr = (int*)self[0x44 / 4];
            int ebx = arr[i];
            if (ebx != 0) {
                sub_64ae10(ebx);
                sub_62fc62(ebx);
            }
            i++;
        } while (i < self[0x48 / 4]);
    }
    sub_6ffab0((int)((char*)this + 0x40), 0, -1);
}
