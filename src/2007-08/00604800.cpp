// from server: 42% by colin
struct SleepStage {
    unsigned char field0;
    int field4;
    int compute(int* p);
};

extern "C" float __stdcall sqrtf_helper(double);

int SleepStage::compute(int* p) {
    int* q = *(int**)((char*)p + 0x60);
    float a = *(float*)((char*)q + 8);
    float b = *(float*)((char*)q + 4);
    float c = *(float*)((char*)q + 0);
    float d = *(float*)((char*)q + 8);
    float e = *(float*)((char*)q + 4);
    float f = *(float*)((char*)q + 0);
    float g;
    if (a < b) {
        if (d < e) {
            g = f;
        } else {
            g = f * e;
        }
    } else {
        if (d < e) {
            g = f;
        } else {
            g = f * e;
        }
    }
    float h = sqrtf_helper((double)g);
    int i = (int)h;
    int j = *(int*)((char*)p + 0x14);
    this->field4 = j * i;
    this->field0 = (*(int*)((char*)p + 0x6c) != 0);
    return (int)this;
}
