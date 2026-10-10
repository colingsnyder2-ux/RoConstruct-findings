// from server: 72% by colin
struct ChangePropertyItem {
    int** begin;
    int** end;
    bool get(int** out);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern unsigned int g_8be954;
extern unsigned int g_8be950;
extern unsigned int g_8be728;

bool ChangePropertyItem::get(int** out) {
    *out = 0;
    unsigned int count;
    if (begin == 0) {
        count = 0;
    } else {
        count = (unsigned int)(((char*)end - (char*)begin) >> 2);
    }
    unsigned int idx;
    if ((g_8be954 & 1) == 0) {
        idx = g_8be728;
        g_8be954 |= 1;
        g_8be950 = idx;
        g_8be728 = idx + 1;
    } else {
        idx = g_8be950;
    }
    if (count > idx) {
        if ((g_8be954 & 1) == 0) {
            idx = g_8be728;
            g_8be954 |= 1;
            g_8be950 = idx;
            g_8be728 = idx + 1;
        }
        unsigned int n;
        if (begin == 0) {
            n = 0;
        } else {
            n = (unsigned int)(((char*)end - (char*)begin) >> 2);
        }
        if (idx >= n) {
            _invalid_parameter_noinfo();
        }
        int* p = begin[idx];
        if (p != 0) {
            *out = p + 1;
        }
    }
    return *out != 0;
}
