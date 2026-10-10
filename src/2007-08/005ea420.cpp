// from server: 49% by colin
struct FlagStandService {
    void construct(void*);
};

extern "C" void __stdcall sub_5EA230(void*, void*, int);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_4181B0(void*, void*);
extern "C" void __stdcall sub_728830(void*);

void FlagStandService::construct(void* arg)
{
    int* self = (int*)this;
    self[0] = 0;
    self[1] = 0;

    int* src = (int*)arg;
    int v0 = src[0];
    int v1 = src[1];
    int v2 = src[2];
    int v3 = src[3];
    int v4 = src[4];
    int v5 = src[5];

    int tmp[6];
    tmp[0] = v0;
    tmp[1] = v1;
    tmp[2] = v2;
    tmp[3] = v3;
    tmp[4] = v4;
    tmp[5] = v5;

    self[2] = 0;
    self[3] = 0;
    self[4] = 0;

    sub_5EA230((char*)this + 8, tmp, 0);

    void* p = sub_62FEF6(0x20);
    if (p) {
        ((int*)p)[1] = 0;
        ((int*)p)[2] = 0;
        ((int*)p)[3] = 0;
        ((int*)p)[5] = 0;
        ((int*)p)[6] = 0;
        ((char*)p)[0x1c] = 0;
    } else {
        p = 0;
    }

    sub_4181B0(this, p);
    sub_728830(this);
}
