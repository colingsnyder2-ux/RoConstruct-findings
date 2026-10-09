// from server: 100% by colin
// roc 2007-08 00401a10  unit: VCWorkspace::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401a10
//
// 00401a10  8b442408             mov eax, dword ptr [esp + 8]
// 00401a14  8b08                 mov ecx, dword ptr [eax]
// 00401a16  3b0d20027900         cmp ecx, dword ptr [0x790220]
// 00401a1c  7532                 jne 0x401a50
// 00401a1e  8b5004               mov edx, dword ptr [eax + 4]
// 00401a21  3b1524027900         cmp edx, dword ptr [0x790224]
// 00401a27  7527                 jne 0x401a50
// 00401a29  8b4808               mov ecx, dword ptr [eax + 8]
// 00401a2c  3b0d28027900         cmp ecx, dword ptr [0x790228]
// 00401a32  751c                 jne 0x401a50
// 00401a34  8b500c               mov edx, dword ptr [eax + 0xc]
// 00401a37  3b152c027900         cmp edx, dword ptr [0x79022c]
// 00401a3d  7511                 jne 0x401a50
// 00401a3f  b801000000           mov eax, 1
// 00401a44  33c9                 xor ecx, ecx
// 00401a46  85c0                 test eax, eax
// 00401a48  0f94c1               sete cl
// 00401a4b  8bc1                 mov eax, ecx
// 00401a4d  c20800               ret 8
// 00401a50  33c0                 xor eax, eax
// 00401a52  33c9                 xor ecx, ecx
// 00401a54  85c0                 test eax, eax
// 00401a56  0f94c1               sete cl
// 00401a59  8bc1                 mov eax, ecx
// 00401a5b  c20800               ret 8

struct VCWorkspace_CComObject
{
    int __stdcall compare(const int* other);
};

int VCWorkspace_CComObject::compare(const int* other)
{
    int result;
    if (other[0] == *(int*)0x790220 &&
        other[1] == *(int*)0x790224 &&
        other[2] == *(int*)0x790228 &&
        other[3] == *(int*)0x79022c)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    return result == 0;
}
