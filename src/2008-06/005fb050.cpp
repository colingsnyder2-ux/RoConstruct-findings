// from server: 73% by colin
struct UString_sink
{
    char pad0[0xc];
    int field_c;
    int field_10;
    int func(int);
};

extern "C" void __stdcall sub_005fa770(int*, int, int);

int UString_sink::func(int arg)
{
    int i;
    for (i = 0; i < 2; ++i)
    {
        int* p = (int*)arg;
        int (*fn)(int*, int) = (int (*)(int*, int))((*(int**)p)[4]);
        int* r = (int*)fn(p, i);
        if (r)
        {
            --r[2];
            int idx = r[1];
            int cnt = r[2];
            if (idx >= 0 && cnt == 0)
            {
                int* arr = (int*)this->field_c;
                int n = this->field_10;
                int val = arr[n - 1];
                arr[idx] = val;
                *(int*)(val + 4) = idx;
                int newn = this->field_10 - 1;
                sub_005fa770(&this->field_c, newn, 0);
                r[1] = -1;
            }
        }
    }
    return arg;
}
