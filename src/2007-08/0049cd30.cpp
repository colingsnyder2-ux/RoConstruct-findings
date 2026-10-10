// from server: 64% by colin
struct ClientProxy {
    char pad[0x1e2c];
    int f(int a, int b, int c);
};

extern "C" int __stdcall sub_004a63e0(int);
extern "C" int __stdcall sub_004b67d0(int, int, int, int);

int ClientProxy::f(int a, int b, int c)
{
    int* p = (int*)a;
    int v;
    if (p == 0)
        v = (int)((char*)p + 0xfc);
    else
        v = 0;
    int r = sub_004a63e0(v);
    sub_004b67d0(a, b, c, r);
    *(int*)((char*)this + 0) = 0x79c74c;
    *(int*)((char*)this + 4) = 0x79c740;
    *(int*)((char*)this + 0x10) = 0x79c738;
    *(int*)((char*)this + 0x14) = 0x79c728;
    *(int*)((char*)this + 0x2c) = 0x79c718;
    *(int*)((char*)this + 0x44) = 0x79c708;
    *(int*)((char*)this + 0x5c) = 0x79c6f8;
    *(int*)((char*)this + 0x74) = 0x79c6e8;
    *(int*)((char*)this + 0x8c) = 0x79c6d8;
    *(int*)((char*)this + 0xe8) = 0x79c6a8;
    *(int*)((char*)this + 0x1e20) = 0;
    *(int*)((char*)this + 0x1e24) = 0;
    *(int*)((char*)this + 0x1e28) = a;
    return (int)this;
}
