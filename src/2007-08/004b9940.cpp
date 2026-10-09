// from server: 18% by colin
// roc 2007-08 004b9940  unit: RakPeer  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9940
//
// 004b9940  55                   push ebp
// 004b9941  8bec                 mov ebp, esp
// 004b9943  51                   push ecx
// 004b9944  56                   push esi
// 004b9945  57                   push edi
// 004b9946  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004b994d  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004b9950  8b7d08               mov edi, dword ptr [ebp + 8]
// 004b9953  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004b9956  8b06                 mov eax, dword ptr [esi]
// 004b9958  33d2                 xor edx, edx
// 004b995a  0107                 add dword ptr [edi], eax
// 004b995c  8b4604               mov eax, dword ptr [esi + 4]
// 004b995f  114704               adc dword ptr [edi + 4], eax
// 004b9962  8b4608               mov eax, dword ptr [esi + 8]
// 004b9965  114708               adc dword ptr [edi + 8], eax
// 004b9968  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b996b  11470c               adc dword ptr [edi + 0xc], eax
// 004b996e  e322                 jecxz 0x4b9992
// 004b9970  42                   inc edx
// 004b9971  42                   inc edx
// 004b9972  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b9975  1104d7               adc dword ptr [edi + edx*8], eax
// 004b9978  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b997c  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004b9980  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b9984  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004b9988  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b998c  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004b9990  e2de                 loop 0x4b9970
// 004b9992  5f                   pop edi
// 004b9993  5e                   pop esi
// 004b9994  8be5                 mov esp, ebp
// 004b9996  5d                   pop ebp
// 004b9997  c3                   ret 

struct RakPeer {
    void add64(unsigned int* dst, const unsigned int* src, int count);
};

void RakPeer::add64(unsigned int* dst, const unsigned int* src, int count)
{
    unsigned int carry = 1;
    unsigned int i = 0;
    unsigned int lo, hi;

    lo = src[0];
    hi = src[1];
    dst[0] += lo;
    dst[1] += hi + (dst[0] < lo);

    lo = src[2];
    hi = src[3];
    dst[2] += lo;
    dst[3] += hi + (dst[2] < lo);

    if (count != 0) {
        do {
            i += 2;
            lo = src[i];
            hi = src[i + 1];
            dst[i] += lo;
            dst[i + 1] += hi + (dst[i] < lo);
        } while (--count);
    }
}
