// from server: 40% by colin
struct S {
    void f(unsigned short type);
};

extern "C" void __cdecl sub_56C3B0(void*);
extern "C" void __cdecl sub_56C0A0(int, int, int, int);
extern "C" void __cdecl sub_492360(void*);

void S::f(unsigned short type)
{
    char buf[20];
    int state = -1;

    switch (type) {
    case 0:
        sub_56C3B0(buf);
        sub_56C0A0(*(int*)buf, 1, 0x78A05C, *(int*)((char*)this + 0x44));
        state = 0;
        sub_492360(buf);
        break;
    case 1:
        sub_56C3B0(buf);
        sub_56C0A0(*(int*)buf, 3, 0x78A05C, *(int*)((char*)this + 0x44));
        state = 1;
        sub_492360(buf);
        break;
    case 2:
        sub_56C3B0(buf);
        sub_56C0A0(*(int*)buf, 1, 0x78A05C, *(int*)((char*)this + 0x44));
        state = 2;
        sub_492360(buf);
        break;
    case 3:
        sub_56C3B0(buf);
        sub_56C0A0(*(int*)buf, 1, 0x78A05C, *(int*)((char*)this + 0x44));
        state = 3;
        sub_492360(buf);
        break;
    case 4:
        sub_56C3B0(buf);
        sub_56C0A0(*(int*)buf, 3, 0x78A05C, *(int*)((char*)this + 0x44));
        state = 4;
        sub_492360(buf);
        break;
    default:
        break;
    }
}
