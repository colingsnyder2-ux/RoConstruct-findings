// from server: 20% by colin
struct RakPeer
{
    void func(unsigned int a, unsigned int b, unsigned int c, unsigned int d);
};

extern "C" int __cdecl sub_4B9B20(unsigned int* a, unsigned int* b);
extern "C" void __cdecl sub_4B9B60(unsigned int* a, unsigned int b);
extern "C" void __cdecl sub_4B9BF0(unsigned int* a);
extern "C" void __cdecl sub_630B8C(unsigned int a, unsigned int b, unsigned int c);

void RakPeer::func(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
    unsigned int local[16];
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int m;
    unsigned int carry;
    unsigned int borrow;
    unsigned int* p;
    unsigned int* q;
    unsigned int count;

    for (i = 0; i < 16; ++i)
        local[i] = *(unsigned int*)(a + i * 4);

    for (i = 0; i < 16; ++i)
        *(unsigned int*)(b + i * 4) = *(unsigned int*)(c + i * 4);

    sub_630B8C(0, d, 0x40);

    count = 1;

    if ((local[15] & 0x80000000u) == 0)
    {
        if (sub_4B9B20(local, (unsigned int*)b))
        {
            i = 15;
            while (i >= 0)
            {
                if (*(unsigned int*)(b + 0x34 + i * 4) != 0)
                    break;
                --i;
            }

            if (i >= 0)
            {
                j = i;
                while (j >= 0 && local[j] == 0)
                    --j;

                if (i != j)
                {
                    sub_4B9B60(local, (i - j) * 32);
                    count = (i - j) * 32 + 1;
                }
            }

            if ((local[15] & 0x80000000u) == 0)
            {
                for (;;)
                {
                    i = 15;
                    while (i >= 0)
                    {
                        if (*(unsigned int*)(b + i * 4) > local[i])
                            break;
                        if (*(unsigned int*)(b + i * 4) < local[i])
                            goto done_cmp;
                        --i;
                    }
                    goto done_cmp;

                done_cmp:
                    if (i < 0)
                        break;

                    carry = 0;
                    for (j = 0; j < 16; ++j)
                    {
                        unsigned int v = local[j];
                        unsigned int shifted = (v << 1) | carry;
                        carry = v >> 31;
                        local[j] = shifted;
                    }
                    ++count;

                    if ((local[15] & 0x80000000u) != 0)
                        break;
                }
            }

            for (;;)
            {
                i = 15;
                while (i >= 0)
                {
                    if (local[i] > *(unsigned int*)(b + i * 4))
                        break;
                    if (local[i] < *(unsigned int*)(b + i * 4))
                        goto done_cmp2;
                    --i;
                }
                goto done_cmp2;

            done_cmp2:
                if (i < 0)
                    break;

                carry = 0;
                for (j = 15; j >= 0; --j)
                {
                    unsigned int v = local[j];
                    unsigned int shifted = (v >> 1) | (carry << 31);
                    carry = v & 1;
                    local[j] = shifted;
                }
                --count;

                if ((local[15] & 0x80000000u) != 0)
                    break;
            }
        }
    }

    if (sub_4B9B20(local, (unsigned int*)b))
    {
        sub_4B9BF0(local);
        count = 0;
    }

    while (count != 0)
    {
        --count;
        ++m;

        i = 15;
        while (i >= 0)
        {
            if (local[i] > *(unsigned int*)(d + i * 4))
                break;
            if (local[i] < *(unsigned int*)(d + i * 4))
                goto subtract;
            --i;
        }
        goto subtract;

    subtract:
        if (i >= 0)
        {
            p = local;
            q = (unsigned int*)d;
            borrow = 0;
            for (k = 0; k < 16; ++k)
            {
                unsigned int v = p[k];
                unsigned int r = q[k] - v - borrow;
                borrow = (q[k] < v + borrow) ? 1 : 0;
                q[k] = r;
            }

            sub_4B9B60((unsigned int*)d, m);
            m = 0;
            *(unsigned int*)d |= 1;
        }

        carry = 0;
        for (j = 15; j >= 0; --j)
        {
            unsigned int v = local[j];
            unsigned int shifted = (v >> 1) | (carry << 31);
            carry = v & 1;
            local[j] = shifted;
        }
    }

    sub_4B9B60((unsigned int*)d, m);
}
