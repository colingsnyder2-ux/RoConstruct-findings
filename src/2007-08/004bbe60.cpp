// from server: 26% by colin
struct RakPeer {
    void func(int a, int b, int c, int d);
};

extern "C" int __cdecl sub_4B9A80(int*, int*);
extern "C" void __cdecl sub_4B99A0(int*, int);
extern "C" void __cdecl sub_4B9C20(int*);

void RakPeer::func(int a, int b, int c, int d) {
    int local[8];
    int* src = (int*)a;
    int* dst = (int*)b;
    int* out = (int*)c;
    int i;
    int count = 0;

    for (i = 0; i < 8; ++i) {
        local[i] = src[i];
    }

    for (i = 0; i < 8; ++i) {
        dst[i] = ((int*)a)[i];
    }

    for (i = 0; i < 8; ++i) {
        out[i] = 0;
    }

    int flag = 1;

    if ((local[5] & 0x80000000) != 0) {
        goto check_again;
    }

    if (sub_4B9A80(local, dst) == 0) {
        goto check_again;
    }

    {
        int idx = 7;
        while (idx >= 0 && dst[idx] == 0) {
            --idx;
        }
        if (idx >= 0) {
            int j = idx;
            while (j >= 0 && local[j] == 0) {
                --j;
            }
            if (idx != j) {
                int shift = (idx - j) << 5;
                sub_4B99A0(local, shift);
                flag = shift + 1;
            }
        }
    }

check_again:
    if ((local[5] & 0x80000000) == 0) {
        int idx = 7;
        while (idx >= 0) {
            if (dst[idx] > local[idx]) {
                goto do_shift_left;
            }
            if (dst[idx] < local[idx]) {
                goto after_shift_left;
            }
            --idx;
        }
        goto after_shift_left;

do_shift_left:
        {
            unsigned int carry = 0;
            for (i = 0; i < 8; ++i) {
                unsigned int v = (unsigned int)local[i];
                unsigned int nv = (v << 1) | carry;
                carry = v >> 31;
                local[i] = (int)nv;
            }
            ++flag;
            if ((local[5] & 0x80000000) == 0) {
                goto check_again;
            }
        }
    }

after_shift_left:
    {
        int idx = 7;
        while (idx >= 0) {
            if (local[idx] > dst[idx]) {
                goto do_shift_right;
            }
            if (local[idx] < dst[idx]) {
                goto after_shift_right;
            }
            --idx;
        }
        goto after_shift_right;

do_shift_right:
        {
            unsigned int carry = 0;
            for (i = 7; i >= 0; --i) {
                unsigned int v = (unsigned int)local[i];
                unsigned int nv = (v >> 1) | (carry << 31);
                carry = v & 1;
                local[i] = (int)nv;
            }
            --flag;
            goto after_shift_left;
        }
    }

after_shift_right:
    if (sub_4B9A80(local, dst) != 0) {
        sub_4B9C20(local);
        flag = 0;
    }

    if (flag != 0) {
        while (flag != 0) {
            --flag;
            ++count;

            {
                int idx = 7;
                while (idx >= 0) {
                    if (local[idx] > dst[idx]) {
                        goto subtract;
                    }
                    if (local[idx] < dst[idx]) {
                        goto skip_subtract;
                    }
                    --idx;
                }
                goto skip_subtract;

subtract:
                {
                    unsigned int borrow = 0;
                    for (i = 0; i < 8; ++i) {
                        unsigned int a1 = (unsigned int)dst[i];
                        unsigned int b1 = (unsigned int)local[i];
                        unsigned int r = a1 - b1 - borrow;
                        borrow = (a1 < b1 + borrow) ? 1 : 0;
                        dst[i] = (int)r;
                    }
                }
                sub_4B99A0(out, count);
                out[0] |= 1;
                count = 0;
            }

skip_subtract:
            {
                unsigned int carry = 0;
                for (i = 7; i >= 0; --i) {
                    unsigned int v = (unsigned int)local[i];
                    unsigned int nv = (v >> 1) | (carry << 31);
                    carry = v & 1;
                    local[i] = (int)nv;
                }
            }
        }
    }

    sub_4B99A0(out, count);
}
