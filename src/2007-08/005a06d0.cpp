// from server: 44% by colin
struct SpawnerService {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    void construct(int* src);
};

extern "C" void __stdcall sub_5A04B0(int* a, int* b);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __stdcall sub_4181B0(void* p);
extern "C" void __stdcall sub_728830();

void SpawnerService::construct(int* src)
{
    int v0 = src[0];
    int v1 = src[1];
    int v2 = src[2];
    int v3 = src[3];
    int v4 = src[4];
    int v5 = src[5];

    this->field0 = 0;
    this->field4 = 0;

    int local[6];
    local[0] = v0;
    local[1] = v1;
    local[2] = v2;
    local[3] = v3;
    local[4] = v4;
    local[5] = v5;

    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;

    sub_5A04B0(local, (int*)&this->field8);

    void* p = sub_62FEF6(0x20);
    if (p != 0) {
        *(int*)((char*)p + 4) = 0;
        *(int*)((char*)p + 8) = 0;
        *(int*)((char*)p + 0xC) = 0;
        *(int*)((char*)p + 0x14) = 0;
        *(int*)((char*)p + 0x18) = 0;
        *(char*)((char*)p + 0x1C) = 0;
    } else {
        p = 0;
    }

    sub_4181B0(p);
    sub_728830();
}
