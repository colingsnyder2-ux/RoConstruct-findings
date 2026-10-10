// from server: 66% by colin
struct ScoreHud {
    char pad0[4];
    int field4;
    int field8;
    int fieldC;
    char pad10[0xC];
    int field1C;
    char pad20[0x14];
    int field34;
    void construct(int arg);
};

extern "C" int __stdcall sub_4D8640(int);
extern "C" int __stdcall sub_61DD70(int);
extern "C" int __stdcall sub_61DDB0(int);

void ScoreHud::construct(int arg)
{
    field4 = 0;
    field8 = 0;
    fieldC = 0;

    int* p10 = (int*)((char*)this + 0x10);
    int r = sub_4D8640((int)p10);
    p10[1] = r;
    *(char*)(r + 0x21) = 1;
    r = p10[1];
    *(int*)(r + 4) = r;
    r = p10[1];
    *(int*)r = r;
    r = p10[1];
    *(int*)(r + 8) = r;
    p10[2] = 0;

    int* p1C = (int*)((char*)this + 0x1C);
    r = sub_61DD70((int)p1C);
    p1C[1] = r;
    *(char*)(r + 0x35) = 1;
    r = p1C[1];
    *(int*)(r + 4) = r;
    r = p1C[1];
    *(int*)r = r;
    r = p1C[1];
    *(int*)(r + 8) = r;
    p1C[2] = 0;

    int* p28 = (int*)((char*)this + 0x28);
    r = sub_61DDB0((int)p28);
    p28[1] = r;
    *(char*)(r + 0x1D) = 1;
    r = p28[1];
    *(int*)(r + 4) = r;
    r = p28[1];
    *(int*)r = r;
    r = p28[1];
    *(int*)(r + 8) = r;
    p28[2] = 0;

    field34 = arg;
}
