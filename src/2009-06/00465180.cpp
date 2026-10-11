// from server: 76% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct T4_00465180 {
    int m_a;
    int m_b;
};

extern "C" type_info type_info_009e6960;

void f_00465180(T4_00465180* out, int arg, int type)
{
    if (type == 0 || type == 1) {
        if (out != 0) {
            T4_00465180* src = (T4_00465180*)arg;
            out->m_a = src->m_a;
            out->m_b = src->m_b;
        }
        return;
    }
    if (type == 2)
        return;
    if (type == 3) {
        T4_00465180* p = (T4_00465180*)arg;
        int* dst = (int*)p;
        bool eq = (*(type_info**)dst)->operator==(type_info_009e6960);
        int v = eq ? 0 : -1;
        *dst = v & out->m_a;
        return;
    }
    out->m_a = (int)&type_info_009e6960;
    out->m_b = 0;
}
