// from server: 44% by colin
struct S {
    char pad[0x104];
    int field104;
    int field108;
    int field10c;
    int field110;
    int field114;
    int field118;
    int f();
};

extern "C" void __stdcall sub_533850();
extern "C" void __stdcall sub_4958F0(void*);
extern "C" void __stdcall sub_40DB50(void*, void*, void*, void*);
extern "C" void __stdcall sub_62FC62(void*);
extern "C" void __stdcall sub_541BF0(void*, void*);
extern "C" void* __stdcall sub_77E698(const char*);
extern "C" void __stdcall sub_77E6AC(void*);

int S::f()
{
    sub_533850();
    *(int*)((char*)this + 0xe8) = 0x7a532c;
    *(int*)((char*)this + 0xf0) = 0;
    *(int*)((char*)this + 0xf4) = 0;
    *(int*)((char*)this + 0xf8) = 0;
    *(int*)((char*)this + 0xfc) = 0;
    *(int*)((char*)this + 0x100) = 0x794a20;
    *(int*)((char*)this + 0x00) = 0x7a53cc;
    *(int*)((char*)this + 0x04) = 0x7a53c0;
    *(int*)((char*)this + 0x10) = 0x7a53b8;
    *(int*)((char*)this + 0x14) = 0x7a53a8;
    *(int*)((char*)this + 0x2c) = 0x7a5398;
    *(int*)((char*)this + 0x44) = 0x7a5388;
    *(int*)((char*)this + 0x5c) = 0x7a5378;
    *(int*)((char*)this + 0x74) = 0x7a5368;
    *(int*)((char*)this + 0x8c) = 0x7a5358;
    *(int*)((char*)this + 0xe8) = 0x7a5348;
    *(int*)((char*)this + 0x100) = 0x7a533c;

    int local10 = 0;
    int local14 = 0;
    int local18 = 0;
    sub_4958F0(&local10);

    int ebx = local10;
    if (ebx == 0) {
        sub_40DB50((void*)ebx, (void*)local14, (void*)local18, (void*)this);
        sub_62FC62((void*)ebx);
    }

    *(int*)((char*)this + 0x110) = 0;
    *(int*)((char*)this + 0x114) = 0;
    *(int*)((char*)this + 0x118) = 0;

    sub_77E698("Selection");
    sub_541BF0(this, &local10);
    sub_77E6AC(&local10);

    return (int)this;
}
