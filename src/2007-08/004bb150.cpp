// from server: 32% by tester
struct RakPeer
{
    int __cdecl func_004bb150(int a, int b, int c);
};

extern "C" int __cdecl func_004b9b20(int* a, int* b);
extern "C" int __cdecl func_004b9b60(int* a, int b);

int RakPeer::func_004bb150(int a, int b, int c)
{
    int local[16];
    int i;
    int result;
    int* src;
    int* dst;
    int count;
    int carry;
    int borrow;
    int temp;
    int* p;
    int* q;
    int j;

    src = (int*)b;
    dst = local;
    for (i = 0; i < 16; i++)
        dst[i] = src[i];

    src = (int*)a;
    dst = (int*)c;
    for (i = 0; i < 16; i++)
        dst[i] = src[i];

    result = 1;

    if ((local[15] & 0x80000000) == 0)
    {
        if (func_004b9b20(local, (int*)c))
        {
            i = 15;
            while (i >= 0)
            {
                if (local[i] != 0)
                    break;
                i--;
            }

            if (i >= 0)
            {
                j = i;
                while (j >= 0)
                {
                    if (local[j] != 0)
                        break;
                    j--;
                }

                if (i != j)
                {
                    func_004b9b60(local, (i - j) * 32);
                    result = (i - j) * 32 + 1;
                }
            }
        }
    }

    if ((local[15] & 0x80000000) == 0)
    {
        i = 15;
        while (i >= 0)
        {
            if (local[i] > ((int*)c)[i])
                break;
            if (local[i] < ((int*)c)[i])
                goto skip_shift;
            i--;
        }
        if (i < 0)
            goto skip_shift;

        carry = 0;
        for (i = 0; i < 16; i++)
        {
            temp = local[i];
            local[i] = (temp << 1) | carry;
            carry = (temp >> 31) & 1;
        }
        result++;
    }

skip_shift:
    while (1)
    {
        i = 15;
        while (i >= 0)
        {
            if (((int*)c)[i] > local[i])
                break;
            if (((int*)c)[i] < local[i])
                goto do_subtract;
            i--;
        }
        if (i < 0)
        {
            if (result == 0)
                break;
            goto do_subtract;
        }

        carry = 0;
        for (i = 15; i >= 0; i--)
        {
            temp = local[i];
            local[i] = (temp >> 1) | (carry << 31);
            carry = temp & 1;
        }
        result--;
        continue;

do_subtract:
        borrow = 0;
        for (i = 0; i < 16; i++)
        {
            temp = local[i] - ((int*)c)[i] - borrow;
            borrow = (local[i] < ((int*)c)[i] + borrow) ? 1 : 0;
            local[i] = temp;
        }
        result--;

        carry = 0;
        for (i = 15; i >= 0; i--)
        {
            temp = local[i];
            local[i] = (temp >> 1) | (carry << 31);
            carry = temp & 1;
        }
    }

    return result;
}
