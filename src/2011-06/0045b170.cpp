// from server: 100% by tester
// roc 2011-06 0045b170  unit: VCRoblox3D::?$CComObject  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045b170
//
// 0045b170  8b442408             mov eax, dword ptr [esp + 8]
// 0045b174  85c0                 test eax, eax
// 0045b176  7508                 jne 0x45b180
// 0045b178  b803400080           mov eax, 0x80004003
// 0045b17d  c20800               ret 8
// 0045b180  8b0d74dba600         mov ecx, dword ptr [0xa6db74]
// 0045b186  8908                 mov dword ptr [eax], ecx
// 0045b188  8b1578dba600         mov edx, dword ptr [0xa6db78]
// 0045b18e  895004               mov dword ptr [eax + 4], edx
// 0045b191  8b0d7cdba600         mov ecx, dword ptr [0xa6db7c]
// 0045b197  894808               mov dword ptr [eax + 8], ecx
// 0045b19a  8b1580dba600         mov edx, dword ptr [0xa6db80]
// 0045b1a0  89500c               mov dword ptr [eax + 0xc], edx
// 0045b1a3  33c0                 xor eax, eax
// 0045b1a5  c20800               ret 8

struct S_00401b70 {
    long __stdcall f(void* p);
};

long __stdcall S_00401b70::f(void* p)
{
    if (p == 0)
        return (long)0x80004003;
    *(unsigned long*)((char*)p + 0) = *(unsigned long*)0x784c04;
    *(unsigned long*)((char*)p + 4) = *(unsigned long*)0x784c08;
    *(unsigned long*)((char*)p + 8) = *(unsigned long*)0x784c0c;
    *(unsigned long*)((char*)p + 12) = *(unsigned long*)0x784c10;
    return 0;
}
