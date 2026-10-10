// from server: 28% by colin
struct CXTPCompatibleDC {
    int DrawRect(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" void __stdcall CopyRect(int*, int*);

extern float g_float_797e9c;

int CXTPCompatibleDC::DrawRect(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20)
{
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;
    int local6;
    int local7;
    int local8;

    if (g_float_797e9c == *(float*)(a1 + 0x1c))
    {
        int ecx;
        if (*(int*)(a1 + 0x18) == -1)
            ecx = *(int*)(a1 + 0x14);
        else
            ecx = *(int*)(a1 + 0x18);

        int eax;
        if (*(int*)(a1 + 0xc) == -1)
            eax = *(int*)(a1 + 8);
        else
            eax = *(int*)(a1 + 0xc);

        int edx = a20;
        int edx2 = a19;
        int ecx2 = a18;
        int eax2 = a17;
        int eax3 = a16;
        int ecx3 = a15;
        return this->DrawRect(ecx3, eax3, eax2, ecx2, edx2, edx, ecx, eax, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }

    int ecx;
    if (*(int*)(a1 + 0x18) == -1)
        ecx = *(int*)(a1 + 0x14);
    else
        ecx = *(int*)(a1 + 0x18);

    int eax;
    if (*(int*)(a1 + 0xc) == -1)
        eax = *(int*)(a1 + 8);
    else
        eax = *(int*)(a1 + 0xc);

    int edi = this->DrawRect(ecx, eax, *(int*)(a1 + 0x1c), a20, a19, a18, a17, a16, a15, a14, a13, a12, a11, a10, a9, a8, a7, a6, a5, a4);

    if (a20 != 0)
    {
        CopyRect(&local1, &a20);
        int ecx2 = local1;
        int eax2 = ecx2 - local2;
        eax2 = eax2 - (eax2 >> 31);
        eax2 = eax2 >> 1;
        eax2 = -eax2;
        ecx2 = ecx2 + eax2;
        local1 = ecx2;

        int eax3;
        if (*(int*)(a1 + 0xc) == -1)
            eax3 = *(int*)(a1 + 8);
        else
            eax3 = *(int*)(a1 + 0xc);

        int edx = a20;
        int ecx3 = a19;
        this->DrawRect(ecx3, eax3, edi, a20, (int)&local1, a18, a17, a16, a15, a14, a13, a12, a11, a10, a9, a8, a7, a6, a5, a4);

        CopyRect(&local3, &a20);
        int ecx4 = local3;
        int eax4 = ecx4 - local4;
        eax4 = eax4 - (eax4 >> 31);
        eax4 = eax4 >> 1;
        eax4 = -eax4;
        ecx4 = ecx4 + eax4;
        local3 = ecx4;

        int eax5;
        if (*(int*)(a1 + 0x18) == -1)
            eax5 = *(int*)(a1 + 0x14);
        else
            eax5 = *(int*)(a1 + 0x18);

        int edx2 = a20;
        this->DrawRect(a18, eax5, edi, a20, (int)&local3, a17, a16, a15, a14, a13, a12, a11, a10, a9, a8, a7, a6, a5, a4, a3);
    }
    else
    {
        CopyRect(&local5, &a20);
        int ecx5 = local5;
        int eax6 = ecx5 - local6;
        eax6 = eax6 - (eax6 >> 31);
        eax6 = eax6 >> 1;
        eax6 = -eax6;
        ecx5 = ecx5 + eax6;
        local5 = ecx5;

        int eax7;
        if (*(int*)(a1 + 0xc) == -1)
            eax7 = *(int*)(a1 + 8);
        else
            eax7 = *(int*)(a1 + 0xc);

        int ebp = a20;
        int edx3 = a19;
        this->DrawRect(edx3, eax7, edi, 0, (int)&local5, a18, a17, a16, a15, a14, a13, a12, a11, a10, a9, a8, a7, a6, a5, a4);

        CopyRect(&local7, &a20);
        int edx4 = local7;
        int eax8 = edx4 - local8;
        eax8 = eax8 - (eax8 >> 31);
        eax8 = eax8 >> 1;
        eax8 = -eax8;
        edx4 = edx4 + eax8;
        local7 = edx4;

        int eax9;
        if (*(int*)(a1 + 0x18) == -1)
            eax9 = *(int*)(a1 + 0x14);
        else
            eax9 = *(int*)(a1 + 0x18);

        this->DrawRect(a18, eax9, edi, 0, (int)&local7, a17, a16, a15, a14, a13, a12, a11, a10, a9, a8, a7, a6, a5, a4, a3);
    }
    return 0;
}
