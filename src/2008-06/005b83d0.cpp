// from server: 37% by tester
struct PropDesc {
    int m_value;
    int m_getter;
    int m_setter;
    int m_attributes;
    int m_seenAttributes;
};

struct PropDescIter {
    int* m_ptr;
    int* m_end;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Holder {
    int m_a;
    int m_b;
    int m_c;
    int m_d;
    int m_e;
    int m_f;
    PropDescIter* m_iter;
};

void __fastcall sub_409f60(PropDescIter* p);

void __fastcall func(Holder* h, int a, int b, int c, int d)
{
    PropDescIter* it = h->m_iter;
    int* cur = it->m_ptr;
    int* end = it->m_end;
    int* savedCur = cur;
    int* savedEnd = end;

    while (true) {
        int* p = h->m_iter->m_ptr;
        int* e = h->m_iter->m_end;
        if (cur != 0 && cur != p) {
            _invalid_parameter_noinfo();
        }
        if (end == e) {
            break;
        }
        (*(int*)a)++;
        if (cur == 0) {
            _invalid_parameter_noinfo();
            if (end == *(int**)((char*)cur + 0x18)) {
                _invalid_parameter_noinfo();
            }
            int* q = *(int**)((char*)end + 0x2c);
            if (*(int*)((char*)q + 8) == 0) {
                (*(int*)b)++;
            }
            sub_409f60(h->m_iter);
            end = h->m_iter->m_end;
            cur = h->m_iter->m_ptr;
        } else {
            cur = *(int**)cur;
        }
    }
}
