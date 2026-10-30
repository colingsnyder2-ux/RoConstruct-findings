// roc 2010-06 007667b0  unit: RBX::FilterStairs  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007667b0
//
// 007667b0  53                   push ebx
// 007667b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007667b5  85db                 test ebx, ebx
// 007667b7  743f                 je 0x7667f8
// 007667b9  56                   push esi
// 007667ba  57                   push edi
// 007667bb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007667bf  8b4f04               mov ecx, dword ptr [edi + 4]
// 007667c2  33c0                 xor eax, eax
// 007667c4  85c9                 test ecx, ecx
// 007667c6  7e14                 jle 0x7667dc
// 007667c8  8b37                 mov esi, dword ptr [edi]
// 007667ca  8bd6                 mov edx, esi
// 007667cc  8d642400             lea esp, [esp]
// 007667d0  391a                 cmp dword ptr [edx], ebx
// 007667d2  741f                 je 0x7667f3
// 007667d4  40                   inc eax
// 007667d5  83c204               add edx, 4
// 007667d8  3bc1                 cmp eax, ecx
// 007667da  7cf4                 jl 0x7667d0
// 007667dc  8b37                 mov esi, dword ptr [edi]
// 007667de  8d048e               lea eax, [esi + ecx*4]
// 007667e1  8d0c8e               lea ecx, [esi + ecx*4]
// 007667e4  5f                   pop edi
// 007667e5  5e                   pop esi
// 007667e6  3bc1                 cmp eax, ecx
// 007667e8  750e                 jne 0x7667f8
// 007667ea  b801000000           mov eax, 1
// 007667ef  5b                   pop ebx
// 007667f0  c20800               ret 8
// 007667f3  8d0486               lea eax, [esi + eax*4]
// 007667f6  ebe9                 jmp 0x7667e1
// 007667f8  33c0                 xor eax, eax
// 007667fa  5b                   pop ebx
// 007667fb  c20800               ret 8
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