// roc 2011-06 007c0e40  unit: RBX::GroupRunDragger  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c0e40
//
// 007c0e40  53                   push ebx
// 007c0e41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007c0e45  85db                 test ebx, ebx
// 007c0e47  743f                 je 0x7c0e88
// 007c0e49  56                   push esi
// 007c0e4a  57                   push edi
// 007c0e4b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007c0e4f  8b4f04               mov ecx, dword ptr [edi + 4]
// 007c0e52  33c0                 xor eax, eax
// 007c0e54  85c9                 test ecx, ecx
// 007c0e56  7e14                 jle 0x7c0e6c
// 007c0e58  8b37                 mov esi, dword ptr [edi]
// 007c0e5a  8bd6                 mov edx, esi
// 007c0e5c  8d642400             lea esp, [esp]
// 007c0e60  391a                 cmp dword ptr [edx], ebx
// 007c0e62  741f                 je 0x7c0e83
// 007c0e64  40                   inc eax
// 007c0e65  83c204               add edx, 4
// 007c0e68  3bc1                 cmp eax, ecx
// 007c0e6a  7cf4                 jl 0x7c0e60
// 007c0e6c  8b37                 mov esi, dword ptr [edi]
// 007c0e6e  8d048e               lea eax, [esi + ecx*4]
// 007c0e71  8d0c8e               lea ecx, [esi + ecx*4]
// 007c0e74  5f                   pop edi
// 007c0e75  5e                   pop esi
// 007c0e76  3bc1                 cmp eax, ecx
// 007c0e78  750e                 jne 0x7c0e88
// 007c0e7a  b801000000           mov eax, 1
// 007c0e7f  5b                   pop ebx
// 007c0e80  c20800               ret 8
// 007c0e83  8d0486               lea eax, [esi + eax*4]
// 007c0e86  ebe9                 jmp 0x7c0e71
// 007c0e88  33c0                 xor eax, eax
// 007c0e8a  5b                   pop ebx
// 007c0e8b  c20800               ret 8
// copied from an identical function in another client (function ?f@@YGHPAXPBUArray@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Array
{
    void** data;
    int count;
};

int __stdcall f(void* item, const Array* array)
{
    if (item)
    {
        void** found;
        int i = 0;

        for (; i < array->count; ++i)
        {
            if (array->data[i] == item)
            {
                found = array->data + i;
                goto searched;
            }
        }

        found = array->data + array->count;

    searched:
        if (found == array->data + array->count)
            return 1;
    }

    return 0;
}