// from server: 47% by colin
struct CSelectionPropGrid {
    void sub_439600(int);
};

extern "C" void __stdcall sub_4213a0_impl(void*, int*);
extern "C" void __stdcall invalid_parameter_noinfo();

void CSelectionPropGrid::sub_439600(int arg) {
    int local;
    sub_4213a0_impl((char*)this + 4, &local);
    int* p = (int*)local;
    int* end = (int*)p[0xb4];
    if ((unsigned int)p[0xb0] > (unsigned int)end) {
        invalid_parameter_noinfo();
    }
    int* it = (int*)p[0xb0];
    if ((unsigned int)it > (unsigned int)p[0xb4]) {
        invalid_parameter_noinfo();
    }
    while (it != end) {
        int v = *it;
        sub_439600(v);
        it++;
    }
}
