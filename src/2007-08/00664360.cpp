// from server: 25% by colin
struct VCXTPReportRows {
    char pad0[0x20];
    void* p20;
    char pad24[0x8];
    int count34;
    char pad38[0x4];
    int arr2c_size;
    int* arr2c_data;
    int arr2c_cap;
    void f(int, int);
};

extern "C" void __stdcall sub_62ff20();
extern "C" void __stdcall sub_657410(void*);
extern "C" void __stdcall sub_663b40(int, int);
extern "C" void __stdcall sub_6641e0();

void VCXTPReportRows::f(int a, int b)
{
    int i;
    int n;
    int* p;
    int v;

    n = this->count34;
    i = 0;
    if (n <= 0)
        goto L41f;

    {
        int idx = n - 1;
        if (idx < 0 || idx >= this->arr2c_size)
            goto L3bf;
        p = (int*)((char*)this->arr2c_data + idx * 8);
        if (*p != a)
            goto L3b9;
        *p = b + 1;
        sub_657410(this->p20);
        return;
    }

L3b9:
    if (*p >= a)
        goto L3c4;
    i = n;
    goto L41f;

L3bf:
    sub_62ff20();
    goto L3c4;

L3c4:
    if (n <= 0)
        goto L41f;
    if (i < 0 || i >= this->arr2c_size)
        goto L3bf;
    p = (int*)((char*)this->arr2c_data + i * 8);
    if (i >= this->arr2c_size)
        goto L3bf;
    {
        int* q = (int*)((char*)this->arr2c_data + i * 8 + 4);
        int x = *p;
        if (x > a)
            goto L3fb;
        if (*q > b)
            goto L438;
    L3fb:
        if (*q == a)
            goto L442;
        {
            int t = b + 1;
            if (x == t)
                goto L4a0;
            if (x > b)
                goto L41b;
            i++;
            if (i < n)
                goto L3c4;
            goto L41b;
        }
    L442:
        *q = b + 1;
        {
            int j = i + 1;
            if (j >= n)
                goto L48a;
            if (j < 0 || j >= this->arr2c_size)
                goto L3bf;
            if (this->arr2c_data[j * 2] != b + 1)
                goto L48a;
            if (j < 0 || j >= this->arr2c_size)
                goto L3bf;
            *q = this->arr2c_data[j * 2 + 1];
            sub_663b40(j, 1);
        }
    L48a:
        sub_657410(this->p20);
        return;
    L4a0:
        *p = a;
        sub_657410(this->p20);
        return;
    }

L41b:
    sub_6641e0();
    sub_657410(this->p20);
    return;

L41f:
    sub_6641e0();
    sub_657410(this->p20);
    return;

L438:
    sub_657410(this->p20);
    return;
}
