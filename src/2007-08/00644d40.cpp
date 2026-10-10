// from server: 31% by colin
struct CXTPCommandBar
{
    int field_0;
    char pad_4[0x1c];
    void* field_20;
    char pad_24[0xd0];
    int field_f4;
    int field_fc;
    char pad_100[0x48];
    int field_148;
    char pad_14c[0x20];
    int field_16c;

    int method_644d40(int a2, int a3, int a4, int a5, int a6);
};

extern "C" int __stdcall GetClientRect(void*, void*);
extern "C" int __stdcall SetRect(void*, int, int, int, int);
extern "C" int __stdcall SetRectEmpty(void*);

int sub_644710();
int sub_644720(int);
void sub_45d9e0(void*, int, int, int, int);

int CXTPCommandBar::method_644d40(int a2, int a3, int a4, int a5, int a6)
{
    int count;
    int i;
    int flag;
    int best;
    int bestDist;
    int found;
    int rect[4];
    int other[4];
    int result;
    int tmp;

    flag = 0;
    if (this->field_fc == 2 || this->field_fc == 3 || this->field_f4 == 2)
        flag = 1;

    count = sub_644710();
    best = -1;
    bestDist = 0;
    found = 0;

    for (i = 0; i < count; i++)
    {
        void* item = (void*)sub_644720(i);
        int* vtbl = *(int**)item;
        int (*fn1)(void*) = (int (*)(void*))vtbl[0x80 / 4];
        int (*fn2)(void*) = (int (*)(void*))vtbl[0x128 / 4];

        if (!fn1(item))
            continue;
        if (!fn2(item))
            continue;

        rect[0] = *(int*)((char*)item + 0xc0);
        rect[1] = *(int*)((char*)item + 0xc4);
        rect[2] = *(int*)((char*)item + 0xc8);
        rect[3] = *(int*)((char*)item + 0xcc);

        if (this->field_16c != 0)
        {
            if (flag == 0)
            {
                int v = a2;
                if (v >= rect[1] && v <= rect[3])
                {
                    goto do_check;
                }
            }
            else
            {
                int v = a3;
                if (v >= rect[0] && v <= rect[2])
                {
                    goto do_check;
                }
            }
            continue;
        }

        if (*(int*)((char*)item + 0x94) == 0)
        {
            goto do_check;
        }

        if (flag == 0)
        {
            if (a2 > rect[1])
                continue;
        }
        else
        {
            if (a3 < rect[0])
                continue;
        }

    do_check:
        if (flag)
        {
            if (best != -1)
            {
                int mid = (rect[0] + rect[2]) / 2;
                int d = mid - a3;
                if (d < 0) d = -d;
                if (bestDist <= d)
                    goto after_best;
            }
            {
                int mid = (rect[0] + rect[2]) / 2;
                int d = mid - a3;
                if (d < 0) d = -d;
                bestDist = d;
                result = (mid < a3) ? 1 : 0;
                found = 1;
                if (result)
                {
                    if (i < count - 1)
                    {
                        void* next = (void*)sub_644720(i + 1);
                        if (*(int*)((char*)next + 0x98) == 0)
                        {
                            sub_45d9e0((void*)a6, rect[0], rect[1], rect[2], rect[3] + 6);
                            this->field_148 = i;
                            continue;
                        }
                    }
                    SetRect((void*)a6, rect[0], rect[1], rect[2], rect[3] - 6);
                }
                else
                {
                    SetRect((void*)a6, rect[0], rect[1], rect[2] + 6, rect[3]);
                }
                this->field_148 = i;
                continue;
            }
        after_best:
            {
                int mid = (rect[0] + rect[2]) / 2;
                int d = mid - a3;
                if (d < 0) d = -d;
                if (bestDist <= d)
                    continue;
            }
        }
        else
        {
            if (best != -1)
            {
                int mid = (rect[1] + rect[3]) / 2;
                int d = mid - a2;
                if (d < 0) d = -d;
                if (bestDist <= d)
                    goto after_best2;
            }
            {
                int mid = (rect[1] + rect[3]) / 2;
                int d = mid - a2;
                if (d < 0) d = -d;
                bestDist = d;
                result = (mid < a2) ? 1 : 0;
                found = 1;
                if (result)
                {
                    if (i < count - 1)
                    {
                        void* next = (void*)sub_644720(i + 1);
                        if (*(int*)((char*)next + 0x98) == 0)
                        {
                            if (*(int*)((char*)next + 0x94) == 0)
                            {
                                sub_45d9e0((void*)a6, rect[0], rect[1], rect[2], rect[3] + 6);
                                this->field_148 = i;
                                continue;
                            }
                        }
                    }
                    SetRect((void*)a6, rect[0], rect[1], rect[2], rect[3] - 6);
                }
                else
                {
                    SetRect((void*)a6, rect[0], rect[1], rect[2] + 6, rect[3]);
                }
                this->field_148 = i;
                continue;
            }
        after_best2:
            {
                int mid = (rect[1] + rect[3]) / 2;
                int d = mid - a2;
                if (d < 0) d = -d;
                if (bestDist <= d)
                    continue;
            }
        }
    }

    if (found)
    {
        GetClientRect(this->field_20, other);
        if (*(int*)(*(int**)this + 0x18c / 4) == 0)
        {
            SetRect((void*)a6, other[0] + 2, other[1] + 2, other[2] - 2, other[3] - 2);
            a5 = 1;
        }
        else
        {
            SetRectEmpty((void*)a6);
            a5 = -1;
            this->field_148 = 0;
        }
    }
    else
    {
        a5 = *(int*)((char*)this + 0x80);
    }

    return a5;
}
