// from server: 13% by colin
// roc 2007-08 004b98e0  unit: RakPeer  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b98e0
//
// 004b98e0  55                   push ebp
// 004b98e1  8bec                 mov ebp, esp
// 004b98e3  51                   push ecx
// 004b98e4  56                   push esi
// 004b98e5  57                   push edi
// 004b98e6  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b98ed  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004b98f0  8b7d08               mov edi, dword ptr [ebp + 8]
// 004b98f3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004b98f6  8b06                 mov eax, dword ptr [esi]
// 004b98f8  33d2                 xor edx, edx
// 004b98fa  0107                 add dword ptr [edi], eax
// 004b98fc  8b4604               mov eax, dword ptr [esi + 4]
// 004b98ff  114704               adc dword ptr [edi + 4], eax
// 004b9902  8b4608               mov eax, dword ptr [esi + 8]
// 004b9905  114708               adc dword ptr [edi + 8], eax
// 004b9908  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b990b  11470c               adc dword ptr [edi + 0xc], eax
// 004b990e  e322                 jecxz 0x4b9932
// 004b9910  42                   inc edx
// 004b9911  42                   inc edx
// 004b9912  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b9915  1104d7               adc dword ptr [edi + edx*8], eax
// 004b9918  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b991c  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004b9920  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b9924  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004b9928  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b992c  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004b9930  e2de                 loop 0x4b9910
// 004b9932  5f                   pop edi
// 004b9933  5e                   pop esi
// 004b9934  8be5                 mov esp, ebp
// 004b9936  5d                   pop ebp
// 004b9937  c3                   ret 

struct RakPeer {
    void add64(unsigned int* dst, const unsigned int* src, unsigned int count);
};

void RakPeer::add64(unsigned int* dst, const unsigned int* src, unsigned int count)
{
    unsigned int carry = 0;
    dst[0] += src[0];
    dst[1] += src[1] + (dst[0] < src[0]);
    dst[2] += src[2] + (dst[1] < src[1] || (dst[1] == src[1] && (dst[0] < src[0])));
    dst[3] += src[3] + (dst[2] < src[2] || (dst[2] == src[2] && (dst[1] < src[1] || (dst[1] == src[1] && (dst[0] < src[0])))));

    unsigned int i = 0;
    while (i < count) {
        unsigned int a0 = src[i * 2 + 2];
        unsigned int a1 = src[i * 2 + 3];
        unsigned int a2 = src[i * 2 + 4];
        unsigned int a3 = src[i * 2 + 5];

        unsigned int d0 = dst[i * 2 + 2];
        unsigned int d1 = dst[i * 2 + 3];
        unsigned int d2 = dst[i * 2 + 4];
        unsigned int d3 = dst[i * 2 + 5];

        unsigned int c0 = (d0 + a0 < a0);
        unsigned int c1 = (d1 + a1 + c0 < a1) || (d1 + a1 + c0 == a1 && c0);
        unsigned int c2 = (d2 + a2 + c1 < a2) || (d2 + a2 + c1 == a2 && c1);

        dst[i * 2 + 2] = d0 + a0;
        dst[i * 2 + 3] = d1 + a1 + c0;
        dst[i * 2 + 4] = d2 + a2 + c1;
        dst[i * 2 + 5] = d3 + a3 + c2;

        i++;
    }
}
