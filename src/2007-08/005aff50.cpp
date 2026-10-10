// from server: 73% by colin
struct GetSetImpl {
    int* begin;
    int* end;
    void clear();
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern int dword_8C5DC0;
extern int dword_8C5DC4;
extern int dword_8C5DC8;

void GetSetImpl::clear()
{
    int count;
    if (begin == 0) {
        count = 0;
    } else {
        count = (int)(((char*)end - (char*)begin) >> 2);
    }

    if ((dword_8C5DC8 & 1) == 0) {
        int v = dword_8C5DC0;
        dword_8C5DC8 |= 1;
        dword_8C5DC4 = v;
        dword_8C5DC0 = v + 1;
    }

    if ((unsigned)count > (unsigned)dword_8C5DC4) {
        if ((dword_8C5DC8 & 1) == 0) {
            int v = dword_8C5DC0;
            dword_8C5DC8 |= 1;
            dword_8C5DC4 = v;
            dword_8C5DC0 = v + 1;
        }

        int idx = dword_8C5DC4;
        if (begin == 0 || (unsigned)idx >= (unsigned)(((char*)end - (char*)begin) >> 2)) {
            _invalid_parameter_noinfo();
            idx = dword_8C5DC4;
        }

        int* p = begin + idx;
        if (*p != 0) {
            (*(void (__thiscall**)(int*, int))*(int*)*p)(p, 1);
        }

        if ((dword_8C5DC8 & 1) == 0) {
            int v = dword_8C5DC0;
            dword_8C5DC8 |= 1;
            dword_8C5DC4 = v;
            dword_8C5DC0 = v + 1;
        }

        int idx2 = dword_8C5DC4;
        if (begin == 0 || (unsigned)idx2 >= (unsigned)(((char*)end - (char*)begin) >> 2)) {
            _invalid_parameter_noinfo();
        }

        begin[idx2] = 0;
    }
}
