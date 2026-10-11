// from server: 53% by atomic.potato
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile*);
extern "C" char __stdcall sub_5FCFC0(void*, int, int, int, int);

struct G3DTexture {
    void* vtable;
    char pad1[4];
    char flag;
    char pad2[2];
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    char pad3[0x1C];
    int field38;
    int field3C;
    int field40;
    int field44;
    void* construct(int a, int b, int c, int d, int e);
};

void* G3DTexture::construct(int a, int b, int c, int d, int e)
{
    InterlockedIncrement((long*)0xa3a1bc);
    this->vtable = (void*)0x8afff4;
    this->flag = 1;
    this->field8 = 0;
    this->fieldC = *(int*)0x8ef840;
    this->field10 = e;
    this->vtable = (void*)0x8bea84;
    char r = sub_5FCFC0((void*)0x9faab8, a, b, c, d);
    this->field18 = r ? 0x9faab8 : 0;
    this->field38 = 0;
    this->field3C = 0;
    this->field40 = 0;
    this->field44 = 0;

    return this;
}
