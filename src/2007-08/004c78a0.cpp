// from server: 69% by colin
struct RakPeer {
    char pad0[4];
    int m_count;
    char* m_data;
    void f(int);
};

extern "C" void __stdcall sub_4c6ed0(int*, int*);
extern "C" int __stdcall sub_4c5b10(int*, int*);
extern "C" void __stdcall sub_4c5e60(int, int, int);
extern "C" void __stdcall sub_4c5fb0(int);

void RakPeer::f(int value)
{
    if (m_count == 0) {
        int tmp[2];
        tmp[0] = value;
        tmp[1] = value;
        int out;
        sub_4c6ed0(&out, tmp);
        return;
    }

    int idx;
    int found = sub_4c5b10(&idx, &value);
    if (found == m_count) {
        int* entry = (int*)(m_data + found * 8 - 4);
        int cur = *entry + 1;
        if (value == cur) {
            *entry = *entry + 1;
            return;
        }
        if (value > cur) {
            int tmp[2];
            tmp[0] = value;
            tmp[1] = value;
            int out;
            sub_4c6ed0(&out, tmp);
            return;
        }
    } else {
        int* entry = (int*)(m_data + found * 8);
        int lo = *entry;
        int hi = lo - 1;
        if (value < hi) {
            sub_4c5e60(found, value, value);
            return;
        }
        if (value == hi) {
            *entry = *entry - 1;
            if (found > 0) {
                int* prev = (int*)(m_data + found * 8 - 4);
                int pcur = *prev + 1;
                if (pcur == *(int*)(m_data + found * 8)) {
                    *(int*)(m_data + found * 8 - 4) = *(int*)(m_data + found * 8 + 4);
                    sub_4c5fb0(found);
                    return;
                }
            }
        } else {
            if (value < lo || value > *(int*)(m_data + found * 8 + 4)) {
                int nxt = *(int*)(m_data + found * 8 + 4) + 1;
                if (value == nxt) {
                    *(int*)(m_data + found * 8 + 4) = *(int*)(m_data + found * 8 + 4) + 1;
                    if (found < m_count - 1) {
                        int* next = (int*)(m_data + found * 8);
                        int ncur = *(int*)(m_data + found * 8 + 4) + 1;
                        if (*(int*)(m_data + found * 8 + 8) == ncur) {
                            *(int*)(m_data + found * 8 + 8) = *(int*)(m_data + found * 8);
                            sub_4c5fb0(found);
                        }
                    }
                }
            }
        }
    }
}
