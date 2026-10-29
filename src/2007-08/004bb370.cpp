// from server: 21% by colin
struct RakPeer {
    int m_data[8];
    bool f(RakPeer* other, int* out);
};

extern "C" bool __stdcall sub_4b9a80(int* a, int* b);
extern "C" void __stdcall sub_4b99a0(int* a, int b);

bool RakPeer::f(RakPeer* other, int* out)
{
    int local[8];
    int i;
    for (i = 0; i < 8; ++i)
        local[i] = other->m_data[i];
    for (i = 0; i < 8; ++i)
        out[i] = m_data[i];

    int shift = 1;
    if (local[6] & 0x80000000)
        goto done;

    if (!sub_4b9a80(out, local))
        goto done;

    {
        int a = 7;
        while (a >= 0 && out[a] == 0)
            --a;
        int b = a;
        while (b >= 0 && local[b] == 0)
            --b;
        if (a != b) {
            int n = (a - b) << 5;
            sub_4b99a0(local, n);
            shift = n + 1;
        }
    }

    {
        int w0 = local[0], w1 = local[1], w2 = local[2], w3 = local[3];
        unsigned int w4 = local[4], w5 = local[5], w6 = local[6], w7 = local[7];
        unsigned int x0 = out[0], x1 = out[1], x2 = out[2], x3 = out[3];
        unsigned int x4 = out[4], x5 = out[5], x6 = out[6], x7 = out[7];

        for (;;) {
            if (w7 & 0x80000000) {
                for (;;) {
                    int k = 7;
                    while (k >= 0) {
                        if (out[k] > local[k])
                            goto shift_left;
                        if (out[k] < local[k])
                            goto after_shift_left;
                        --k;
                    }
                    if (shift == 0)
                        goto done;
                    goto sub_loop;
                }
            shift_left:
                {
                    unsigned int c;
                    c = w0 >> 31; w0 <<= 1;
                    c = w1 >> 31; w1 = (w1 << 1) | c;
                    c = w2 >> 31; w2 = (w2 << 1) | c;
                    c = w3 >> 31; w3 = (w3 << 1) | c;
                    c = w4 >> 31; w4 = (w4 << 1) | c;
                    c = w5 >> 31; w5 = (w5 << 1) | c;
                    c = w6 >> 31; w6 = (w6 << 1) | c;
                    c = w7 >> 31; w7 = (w7 << 1) | c;
                    ++shift;
                }
                continue;
            }
        after_shift_left:
            for (;;) {
                int k = 7;
                while (k >= 0) {
                    if (out[k] > local[k])
                        goto shift_right;
                    if (out[k] < local[k])
                        goto after_shift_right;
                    --k;
                }
                if (shift == 0)
                    goto done;
                goto sub_loop;
            }
        shift_right:
            {
                unsigned int c;
                c = w0 & 1; w0 >>= 1;
                c = w1 & 1; w1 = (w1 >> 1) | (c << 31);
                c = w2 & 1; w2 = (w2 >> 1) | (c << 31);
                c = w3 & 1; w3 = (w3 >> 1) | (c << 31);
                c = w4 & 1; w4 = (w4 >> 1) | (c << 31);
                c = w5 & 1; w5 = (w5 >> 1) | (c << 31);
                c = w6 & 1; w6 = (w6 >> 1) | (c << 31);
                c = w7 & 1; w7 = (w7 >> 1) | (c << 31);
                --shift;
            }
            continue;
        after_shift_right:
            --shift;
            for (;;) {
                int k = 7;
                while (k >= 0) {
                    if (out[k] > local[k])
                        goto sub_loop;
                    if (out[k] < local[k])
                        goto sub_loop;
                    --k;
                }
                if (shift == 0)
                    goto done;
                goto sub_loop;
            }
        sub_loop:
            {
                unsigned int borrow = 0;
                unsigned int t;
                t = out[0] - w0; borrow = (out[0] < w0);
                out[0] = t;
                t = out[1] - w1 - borrow; borrow = (out[1] < w1 + borrow) || (borrow && out[1] == w1 + borrow);
                out[1] = t;
                t = out[2] - w2 - borrow; borrow = (out[2] < w2 + borrow) || (borrow && out[2] == w2 + borrow);
                out[2] = t;
                t = out[3] - w3 - borrow; borrow = (out[3] < w3 + borrow) || (borrow && out[3] == w3 + borrow);
                out[3] = t;
                t = out[4] - w4 - borrow; borrow = (out[4] < w4 + borrow) || (borrow && out[4] == w4 + borrow);
                out[4] = t;
                t = out[5] - w5 - borrow; borrow = (out[5] < w5 + borrow) || (borrow && out[5] == w5 + borrow);
                out[5] = t;
                t = out[6] - w6 - borrow; borrow = (out[6] < w6 + borrow) || (borrow && out[6] == w6 + borrow);
                out[6] = t;
                t = out[7] - w7 - borrow; borrow = (out[7] < w7 + borrow) || (borrow && out[7] == w7 + borrow);
                out[7] = t;
            }
            {
                unsigned int c;
                c = w0 & 1; w0 >>= 1;
                c = w1 & 1; w1 = (w1 >> 1) | (c << 31);
                c = w2 & 1; w2 = (w2 >> 1) | (c << 31);
                c = w3 & 1; w3 = (w3 >> 1) | (c << 31);
                c = w4 & 1; w4 = (w4 >> 1) | (c << 31);
                c = w5 & 1; w5 = (w5 >> 1) | (c << 31);
                c = w6 & 1; w6 = (w6 >> 1) | (c << 31);
                c = w7 & 1; w7 = (w7 >> 1) | (c << 31);
                --shift;
            }
            if (shift != 0)
                goto sub_loop;
            goto done;
        }
    }

done:
    return true;
}
