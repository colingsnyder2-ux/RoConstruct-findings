// from server: 69% by colin
struct VCamera {
    void sub_5995F0(float*, float*, float*);
    void sub_5993F0(float);
    void sub_599C10(float, float, float);
    void* sub_599480();
    void sub_599D90(float);
};

void VCamera::sub_599D90(float a) {
    float f0, f1, f2;
    if (a == 0.0f) return;
    sub_5995F0(&f0, &f1, &f2);
    float t = f0 + a;
    sub_5993F0(t);
    sub_599C10(f1, f2, t);
    void* p = sub_599480();
    if (p) {
        void** vt = *(void***)p;
        ((void(__thiscall*)(void*))vt[3])(p);
    }
}
