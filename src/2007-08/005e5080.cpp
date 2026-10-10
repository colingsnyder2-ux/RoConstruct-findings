// from server: 58% by colin
struct FilteredSelection {
    char pad[0x0c];
    int vec_begin;
    int vec_end;
    int vec_cap;
    void removeFilteredSelection(int* p);
};

extern "C" void __stdcall _invalid_parameter_noinfo(void);
extern "C" void __cdecl sub_464EC0(int* dst, int* src);
extern "C" void __cdecl sub_55F7F0(int* out, int* a, int* b);

void FilteredSelection::removeFilteredSelection(int* p)
{
    int* src = p;
    int v = *src;
    int tmp = v;
    if (v != 0) {
        sub_464EC0(&this->vec_begin, &tmp);
    }
    int target = src[2];
    if (target != 0) {
        int* begin = &this->vec_begin;
        int cap = begin[2];
        if (begin[1] > cap) {
            _invalid_parameter_noinfo();
        }
        int cur = begin[1];
        if (cur > begin[2]) {
            _invalid_parameter_noinfo();
        }
        int* it = (int*)cur;
        int* end = (int*)cap;
        while (it != end) {
            if (*it == target) break;
            ++it;
        }
        int cap2 = begin[2];
        if (begin[1] > cap2) {
            _invalid_parameter_noinfo();
        }
        if (begin != 0) {
            if (begin == 0) {
                _invalid_parameter_noinfo();
            }
        } else {
            _invalid_parameter_noinfo();
        }
        if (it != (int*)cap2) {
            int* out = (int*)&tmp;
            sub_55F7F0(out, (int*)begin, (int*)it);
        }
    }
}
