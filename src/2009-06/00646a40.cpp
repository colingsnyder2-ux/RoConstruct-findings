// from server: 65% by atomic.potato
extern "C" int __stdcall sub_719C7A(int, int, int, int, int);
extern "C" void __stdcall sub_719A4A(int, int);
extern "C" void (__stdcall *off_89E970)(int);
extern "C" void __stdcall sub_8AD350(int);
extern "C" void __stdcall sub_984BB0(int);

struct VSoundChannel {
    char pad[0x38];
    int field38;
    int field3C;
    int func(int);
};

int VSoundChannel::func(int a) {
    int r = sub_719C7A(a, 0, 0x9dbfc4, 0xa0e28c, 0);
    if (r == 0) {
        off_89E970((int)&a);
        sub_719A4A((int)&a, 0x984bb0);
    }
    int (*fp)(int) = (int (*)(int))field38;
    return fp(field3C + r);
}
