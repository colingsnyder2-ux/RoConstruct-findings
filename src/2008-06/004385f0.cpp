// from server: 66% by colin
struct XItem {
    int f(int);
};

extern "C" int __cdecl sub_6A0C68();
extern "C" int __cdecl sub_6C0E80();
extern "C" int __stdcall sub_6FC0B0(int);
extern "C" int __stdcall sub_6FA560(int);
extern "C" int __stdcall InterlockedIncrement(int*);

int XItem::f(int a) {
    int r = sub_6A0C68();
    if (r != -1) {
        return 0;
    }
    sub_6FC0B0(6);
    int* p = (int*)(sub_6C0E80() + 4);
    InterlockedIncrement(p);
    int q = sub_6C0E80();
    sub_6FA560(q);
    return 0;
}
