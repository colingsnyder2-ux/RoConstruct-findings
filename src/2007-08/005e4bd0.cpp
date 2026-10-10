// from server: 43% by colin
struct FilteredSelection;

struct FilteredSelection {
    int compare(const FilteredSelection& other);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" int __cdecl func_00533650(int a, int b);
extern "C" int __cdecl func_005e4470(
    FilteredSelection* self,
    int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
extern "C" void __cdecl func_00627240(void* p);

int __cdecl func_005e4bd0(
    FilteredSelection* self,
    int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int* p1 = (int*)a1;
    int* p2 = (int*)a2;
    int* p3 = (int*)a3;
    int* p4 = (int*)a4;

    while (true) {
        if (p1 != 0 && p1 != (int*)a5) {
            _invalid_parameter_noinfo();
        }
        if (p3 == (int*)a6) {
            break;
        }
        if (p2 != 0 && p2 != (int*)a7) {
            _invalid_parameter_noinfo();
        }
        if (p4 == (int*)a8) {
            break;
        }
        if (p1 == 0) {
            _invalid_parameter_noinfo();
        }
        if (p3 == (int*)p1[1]) {
            _invalid_parameter_noinfo();
        }
        if (p2 == 0) {
            _invalid_parameter_noinfo();
        }
        if (p4 == (int*)p2[1]) {
            _invalid_parameter_noinfo();
        }
        if (p3[3] < p4[3]) {
            if (p3 == (int*)p1[1]) {
                _invalid_parameter_noinfo();
            }
            func_00533650(p3[3], 0);
            func_00627240(&p3);
            continue;
        }
        if (p4 == (int*)p2[1]) {
            _invalid_parameter_noinfo();
        }
        if (p3 == (int*)p1[1]) {
            _invalid_parameter_noinfo();
        }
        if (p4[3] < p3[3]) {
            func_00627240(&p4);
            continue;
        }
        func_00627240(&p3);
        func_00627240(&p4);
    }

    return func_005e4470(self, a1, a2, a3, a4, a5, a6, a7, a8, 0, 0);
}
