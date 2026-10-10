// from server: 92% by colin
struct BodyMover {
    void func_005ef900(int, int);
};

extern "C" int __fastcall sub_00450ec0(void*);
extern "C" void __fastcall sub_00432530(void*, void*);
extern "C" void __fastcall sub_0057aa50(void*, int, int);
extern "C" void __fastcall sub_005ef860(void*);

void BodyMover::func_005ef900(int a, int b)
{
    char* ebx;
    if (this)
        ebx = (char*)this + 0xf0;
    else
        ebx = 0;

    if (a) {
        int eax = sub_00450ec0((void*)a);
        if (eax)
            sub_00432530((void*)(eax + 0x100), ebx);
    }

    sub_0057aa50(this, b, a);
    sub_005ef860(this);
}
