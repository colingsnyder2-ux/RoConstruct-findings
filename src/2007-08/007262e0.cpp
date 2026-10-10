// from server: 51% by colin
struct TimeSpan {
    int ticks;
};

struct Time {
    int seconds;
    int nanoseconds;
};

extern "C" void __stdcall sub_726780(int* out, int flag);

int __stdcall sub_7262e0(
    int a1, int a2, int a3, int a4,
    int a5, int a6, int a7, int a8,
    int* result)
{
    int local;
    sub_726780(&local, 1);

    int v_ecx = a5;
    int v_edi = a1;
    int v_eax = a7;
    int v_ebx = a3;
    int v_esi = a6;
    int v_edx = a2;

    if (v_ecx != v_edi) {
        if (v_esi > v_edx) goto L338;
        if (v_esi < v_edx) goto L31d;
        if (v_ecx <= v_edi) goto L31d;
        goto L338;
    }
    if (v_esi != v_edx) {
        if (v_esi > v_edx) goto L338;
        if (v_esi < v_edx) goto L31d;
        if (v_ecx <= v_edi) goto L31d;
        goto L338;
    }
    {
        int diff = v_eax - v_ebx;
        if (diff > 0) goto L338;
    }

L31d:
    *result = 0;
    return 0;

L338:
    if (v_ebx > v_eax) {
        v_eax += 1000000000;
        v_ecx -= 1;
        v_esi -= 1 + (v_ecx == -1 ? 1 : 0);
    }
    {
        int num = v_eax - v_ebx + 500000;
        int quotient = (int)(((long long)num * 0x431bde83) >> 0x32);
        quotient += (unsigned)quotient >> 31;
        int secs = v_ecx - v_edi;
        *result = quotient + secs * 1000;
    }
    return 0;
}
