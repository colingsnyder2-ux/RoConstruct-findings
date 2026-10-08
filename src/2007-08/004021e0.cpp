// from server: 91% by colin
// roc 2007-08 004021e0  unit: VCWorkspace::?$CComObject  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004021e0
//
// 004021e0  51                   push ecx
// 004021e1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004021e5  6a00                 push 0
// 004021e7  6a00                 push 0
// 004021e9  6a00                 push 0
// 004021eb  6a00                 push 0
// 004021ed  6a00                 push 0
// 004021ef  6a00                 push 0
// 004021f1  6a00                 push 0
// 004021f3  8d44241c             lea eax, [esp + 0x1c]
// 004021f7  50                   push eax
// 004021f8  6a00                 push 0
// 004021fa  6a00                 push 0
// 004021fc  6a00                 push 0
// 004021fe  51                   push ecx
// 004021ff  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00402207  ff1518d07700         call dword ptr [0x77d018]
// 0040220d  85c0                 test eax, eax
// 0040220f  7406                 je 0x402217
// 00402211  33c0                 xor eax, eax
// 00402213  59                   pop ecx
// 00402214  c20400               ret 4
// 00402217  33d2                 xor edx, edx
// 00402219  3b1424               cmp edx, dword ptr [esp]
// 0040221c  1bc0                 sbb eax, eax
// 0040221e  f7d8                 neg eax
// 00402220  59                   pop ecx
// 00402221  c20400               ret 4

extern "C" __declspec(dllimport) long __stdcall RegQueryInfoKeyA(
    void* hKey,
    char* lpClass,
    unsigned long* lpcbClass,
    unsigned long* lpReserved,
    unsigned long* lpcSubKeys,
    unsigned long* lpcbMaxSubKeyLen,
    unsigned long* lpcbMaxClassLen,
    unsigned long* lpcValues,
    unsigned long* lpcbMaxValueNameLen,
    unsigned long* lpcbMaxValueLen,
    unsigned long* lpcbSecurityDescriptor,
    void* lpftLastWriteTime);

struct VCWorkspaceCComObject {
    int method(int arg);
};

int VCWorkspaceCComObject::method(int arg)
{
    unsigned long p = 0;
    long result = RegQueryInfoKeyA(
        (void*)arg,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        (void*)&p);
    if (result != 0)
        return 0;
    unsigned long zero = 0;
    return zero < p;
}
