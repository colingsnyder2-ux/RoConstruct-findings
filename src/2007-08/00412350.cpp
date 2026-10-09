// from server: 98% by colin
// roc 2007-08 00412350  unit: VCContent::?$CComContainedObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412350
//
// 00412350  8b442408             mov eax, dword ptr [esp + 8]
// 00412354  8b08                 mov ecx, dword ptr [eax]
// 00412356  3b0d00027900         cmp ecx, dword ptr [0x790200]
// 0041235c  7532                 jne 0x412390
// 0041235e  8b5004               mov edx, dword ptr [eax + 4]
// 00412361  3b1504027900         cmp edx, dword ptr [0x790204]
// 00412367  7527                 jne 0x412390
// 00412369  8b4808               mov ecx, dword ptr [eax + 8]
// 0041236c  3b0d08027900         cmp ecx, dword ptr [0x790208]
// 00412372  751c                 jne 0x412390
// 00412374  8b500c               mov edx, dword ptr [eax + 0xc]
// 00412377  3b150c027900         cmp edx, dword ptr [0x79020c]
// 0041237d  7511                 jne 0x412390
// 0041237f  b801000000           mov eax, 1
// 00412384  33c9                 xor ecx, ecx
// 00412386  85c0                 test eax, eax
// 00412388  0f94c1               sete cl
// 0041238b  8bc1                 mov eax, ecx
// 0041238d  c20800               ret 8
// 00412390  33c0                 xor eax, eax
// 00412392  33c9                 xor ecx, ecx
// 00412394  85c0                 test eax, eax
// 00412396  0f94c1               sete cl
// 00412399  8bc1                 mov eax, ecx
// 0041239b  c20800               ret 8

struct VCContent {};
int __stdcall CompareContent(void* unused, const void* other);

extern const unsigned int g_content0;
extern const unsigned int g_content1;
extern const unsigned int g_content2;
extern const unsigned int g_content3;

int __stdcall CompareContent(void* unused, const void* other) {
    const unsigned int* p = (const unsigned int*)other;
    int result;
    if (p[0] == g_content0 &&
        p[1] == g_content1 &&
        p[2] == g_content2 &&
        p[3] == g_content3) {
        result = 1;
    } else {
        result = 0;
    }
    return !result;
}
