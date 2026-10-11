// from server: 23% by colin
struct S {
    char pad[0x138];
    int f(int);
};

int S::f(int)
{
    *(int*)((char*)this + 0x10) = 0x846dbc;
    *(int*)((char*)this + 0x14) = 0x846db4;
    *(int*)((char*)this + 0x20) = 0x846dac;
    *(int*)((char*)this + 0x24) = 0x846d9c;
    *(int*)((char*)this + 0x44) = 0x846d8c;
    *(int*)((char*)this + 0x64) = 0x846d7c;
    *(int*)((char*)this + 0x84) = 0x846d6c;
    *(int*)((char*)this + 0xa4) = 0x846d5c;
    *(int*)((char*)this + 0xc4) = 0x846d4c;
    *(int*)((char*)this + 0x130) = 0x846d30;
    *(int*)((char*)this + 0x138) = 0x846d24;
    return (int)this;
}
