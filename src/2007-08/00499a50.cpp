// from server: 48% by colin
struct Client {
    char pad[0x2c];
    unsigned int field_2c;
    int field_30;
    int field_34;
    int field_38;
    bool func_00499a50(int arg);
};

extern "C" int __stdcall sub_4a34b0(int, int);
extern "C" void __stdcall sub_49f820(int);
extern "C" void __stdcall sub_4a05c0(int, int);
extern "C" void __stdcall sub_4a0590(int, int);
extern "C" void __stdcall sub_49f930(int);
extern "C" void __stdcall sub_630a1e();

bool Client::func_00499a50(int arg)
{
    if (arg <= this->field_2c)
        return true;

    if (!sub_4a34b0((int)(this + 0x34), 0x88f6f0))
        return false;

    int diff = arg - this->field_30 - this->field_2c + 0x64;
    if (diff <= 0)
        return false;

    char buf[0x100];
    sub_49f820((int)buf);
    sub_4a05c0((int)buf, 0x4e);
    sub_4a0590((int)buf, diff);

    int v1 = *(int*)((char*)this + 0x38);
    int v2 = *(int*)((char*)this - 4);
    int v3 = *(int*)v2;
    int v4 = *(int*)(v3 + 0x34);
    sub_630a1e();
    ((void (__stdcall*)(int, int, int, int, int, int, int))v4)((int)buf, 1, 2, 0, *(int*)((char*)this + 0x34), v1, 0);

    this->field_30 += diff;
    sub_49f930((int)buf);
    return false;
}
