// from server: 100% by tester
// roc 2011-06 004a0170  unit: RBX::DS::CVideoStreamFilter  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a0170
//
// 004a0170  8b442408             mov eax, dword ptr [esp + 8]
// 004a0174  85c0                 test eax, eax
// 004a0176  7508                 jne 0x4a0180
// 004a0178  b803400080           mov eax, 0x80004003
// 004a017d  c20800               ret 8
// 004a0180  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a0184  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 004a0187  8910                 mov dword ptr [eax], edx
// 004a0189  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004a018c  895004               mov dword ptr [eax + 4], edx
// 004a018f  8b5124               mov edx, dword ptr [ecx + 0x24]
// 004a0192  895008               mov dword ptr [eax + 8], edx
// 004a0195  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 004a0198  89480c               mov dword ptr [eax + 0xc], ecx
// 004a019b  33c0                 xor eax, eax
// 004a019d  c20800               ret 8

struct S_func_004b6080
{
    int __stdcall GetValue(void *p);
};

int __stdcall S_func_004b6080::GetValue(void *p)
{
    if (p == 0)
        return (int)0x80004003;

    unsigned char *source = (unsigned char *)this;
    unsigned char *destination = (unsigned char *)p;

    *(unsigned long *)(destination + 0) = *(unsigned long *)(source + 0x1c);
    *(unsigned long *)(destination + 4) = *(unsigned long *)(source + 0x20);
    *(unsigned long *)(destination + 8) = *(unsigned long *)(source + 0x24);
    *(unsigned long *)(destination + 0xc) = *(unsigned long *)(source + 0x28);
    return 0;
}
