// from server: 63% by tester
struct Material {
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int getBestTechnique(int lodIndex, int pass);
};

extern "C" int __cdecl _ftol2_sse(float);

int Material::getBestTechnique(int lodIndex, int pass) {
    int (*fn)(void);
    fn = *(int (**)(void))(*((int*)this) + 0x10);
    if (fn() == 0) {
        return 0;
    }
    int n = this->field_10;
    float f = (float)n * *(float*)((char*)&pass + 12);
    int idx = _ftol2_sse(f);
    int maxIdx = n - 1;
    if (idx <= 0) {
        idx = 0;
    } else if (idx >= maxIdx) {
        idx = maxIdx;
    }
    char* elem = (char*)this->field_c + idx * 0x2c;
    int (*fn2)(void);
    fn2 = *(int (**)(void))elem;
    int r = ((int (*)(void*))fn2)(elem);
    return (unsigned char)r ? (int)elem : 0;
}
