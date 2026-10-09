// from server: 19% by colin
// roc 2007-08 004b9ac0  unit: RakPeer  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9ac0
//
// 004b9ac0  55                   push ebp
// 004b9ac1  8bec                 mov ebp, esp
// 004b9ac3  51                   push ecx
// 004b9ac4  56                   push esi
// 004b9ac5  57                   push edi
// 004b9ac6  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004b9acd  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004b9ad0  8b7d08               mov edi, dword ptr [ebp + 8]
// 004b9ad3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004b9ad6  8b06                 mov eax, dword ptr [esi]
// 004b9ad8  33d2                 xor edx, edx
// 004b9ada  2907                 sub dword ptr [edi], eax
// 004b9adc  8b4604               mov eax, dword ptr [esi + 4]
// 004b9adf  194704               sbb dword ptr [edi + 4], eax
// 004b9ae2  8b4608               mov eax, dword ptr [esi + 8]
// 004b9ae5  194708               sbb dword ptr [edi + 8], eax
// 004b9ae8  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9aeb  19470c               sbb dword ptr [edi + 0xc], eax
// 004b9aee  e322                 jecxz 0x4b9b12
// 004b9af0  42                   inc edx
// 004b9af1  42                   inc edx
// 004b9af2  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b9af5  1904d7               sbb dword ptr [edi + edx*8], eax
// 004b9af8  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b9afc  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004b9b00  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b9b04  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004b9b08  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b9b0c  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004b9b10  e2de                 loop 0x4b9af0
// 004b9b12  5f                   pop edi
// 004b9b13  5e                   pop esi
// 004b9b14  8be5                 mov esp, ebp
// 004b9b16  5d                   pop ebp
// 004b9b17  c3                   ret 

struct RakPeer {
    void sub_4b9ac0(unsigned int* a, unsigned int* b);
};

void RakPeer::sub_4b9ac0(unsigned int* a, unsigned int* b)
{
    unsigned int count = 1;
    unsigned int i = 0;
    unsigned int borrow = 0;
    unsigned int lo, hi;

    lo = a[0];
    hi = b[0];
    if (hi > lo) borrow = 1;
    b[0] = lo - hi;

    lo = a[1];
    hi = b[1];
    {
        unsigned int t = lo - hi - borrow;
        if (hi + borrow > lo) borrow = 1; else borrow = 0;
        b[1] = t;
    }

    lo = a[2];
    hi = b[2];
    {
        unsigned int t = lo - hi - borrow;
        if (hi + borrow > lo) borrow = 1; else borrow = 0;
        b[2] = t;
    }

    lo = a[3];
    hi = b[3];
    {
        unsigned int t = lo - hi - borrow;
        if (hi + borrow > lo) borrow = 1; else borrow = 0;
        b[3] = t;
    }

    if (count == 0) {
        do {
            i += 2;
            lo = a[i];
            hi = b[i];
            {
                unsigned int t = lo - hi - borrow;
                if (hi + borrow > lo) borrow = 1; else borrow = 0;
                b[i] = t;
            }
            lo = a[i + 1];
            hi = b[i + 1];
            {
                unsigned int t = lo - hi - borrow;
                if (hi + borrow > lo) borrow = 1; else borrow = 0;
                b[i + 1] = t;
            }
            lo = a[i + 2];
            hi = b[i + 2];
            {
                unsigned int t = lo - hi - borrow;
                if (hi + borrow > lo) borrow = 1; else borrow = 0;
                b[i + 2] = t;
            }
            lo = a[i + 3];
            hi = b[i + 3];
            {
                unsigned int t = lo - hi - borrow;
                if (hi + borrow > lo) borrow = 1; else borrow = 0;
                b[i + 3] = t;
            }
            count--;
        } while (count != 0);
    }
}
