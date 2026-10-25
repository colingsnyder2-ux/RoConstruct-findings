// from server: 100% by tester
// roc 2008-06 00401980  unit: VCWorkspace::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401980
//
// 00401980  8b442408             mov eax, dword ptr [esp + 8]
// 00401984  8b08                 mov ecx, dword ptr [eax]
// 00401986  3b0db8648100         cmp ecx, dword ptr [0x8164b8]
// 0040198c  7532                 jne 0x4019c0
// 0040198e  8b5004               mov edx, dword ptr [eax + 4]
// 00401991  3b15bc648100         cmp edx, dword ptr [0x8164bc]
// 00401997  7527                 jne 0x4019c0
// 00401999  8b4808               mov ecx, dword ptr [eax + 8]
// 0040199c  3b0dc0648100         cmp ecx, dword ptr [0x8164c0]
// 004019a2  751c                 jne 0x4019c0
// 004019a4  8b500c               mov edx, dword ptr [eax + 0xc]
// 004019a7  3b15c4648100         cmp edx, dword ptr [0x8164c4]
// 004019ad  7511                 jne 0x4019c0
// 004019af  b801000000           mov eax, 1
// 004019b4  33c9                 xor ecx, ecx
// 004019b6  85c0                 test eax, eax
// 004019b8  0f94c1               sete cl
// 004019bb  8bc1                 mov eax, ecx
// 004019bd  c20800               ret 8
// 004019c0  33c0                 xor eax, eax
// 004019c2  33c9                 xor ecx, ecx
// 004019c4  85c0                 test eax, eax
// 004019c6  0f94c1               sete cl
// 004019c9  8bc1                 mov eax, ecx
// 004019cb  c20800               ret 8

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
