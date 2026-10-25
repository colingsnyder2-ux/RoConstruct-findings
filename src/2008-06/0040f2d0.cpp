// from server: 100% by tester
// roc 2008-06 0040f2d0  unit: VCBrowserViewExternal::?$CComContainedObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f2d0
//
// 0040f2d0  8b442408             mov eax, dword ptr [esp + 8]
// 0040f2d4  8b08                 mov ecx, dword ptr [eax]
// 0040f2d6  3b0dd8648100         cmp ecx, dword ptr [0x8164d8]
// 0040f2dc  7532                 jne 0x40f310
// 0040f2de  8b5004               mov edx, dword ptr [eax + 4]
// 0040f2e1  3b15dc648100         cmp edx, dword ptr [0x8164dc]
// 0040f2e7  7527                 jne 0x40f310
// 0040f2e9  8b4808               mov ecx, dword ptr [eax + 8]
// 0040f2ec  3b0de0648100         cmp ecx, dword ptr [0x8164e0]
// 0040f2f2  751c                 jne 0x40f310
// 0040f2f4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040f2f7  3b15e4648100         cmp edx, dword ptr [0x8164e4]
// 0040f2fd  7511                 jne 0x40f310
// 0040f2ff  b801000000           mov eax, 1
// 0040f304  33c9                 xor ecx, ecx
// 0040f306  85c0                 test eax, eax
// 0040f308  0f94c1               sete cl
// 0040f30b  8bc1                 mov eax, ecx
// 0040f30d  c20800               ret 8
// 0040f310  33c0                 xor eax, eax
// 0040f312  33c9                 xor ecx, ecx
// 0040f314  85c0                 test eax, eax
// 0040f316  0f94c1               sete cl
// 0040f319  8bc1                 mov eax, ecx
// 0040f31b  c20800               ret 8

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
