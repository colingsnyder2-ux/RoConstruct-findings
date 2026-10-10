// from server: 79% by colin
struct SurfaceGetSet {
    int field0;
    int field4;
    int field8;
    void setValue(int instance, const float* value);
};

extern "C" int __fastcall sub_573890(int);

void SurfaceGetSet::setValue(int instance, const float* value) {
    int obj;
    if (instance != 0) {
        obj = instance - 4;
    } else {
        obj = 0;
    }
    int result = sub_573890(obj);
    int fn = field8;
    float v = *value;
    int arg = result + 8;
    ((void (__stdcall*)(int, float))fn)(arg, v);
}
