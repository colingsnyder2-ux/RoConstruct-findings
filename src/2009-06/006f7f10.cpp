// roc 2009-06 006f7f10  unit: RBX::GroupDragTool  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f7f10
//
// 006f7f10  53                   push ebx
// 006f7f11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006f7f15  85db                 test ebx, ebx
// 006f7f17  743f                 je 0x6f7f58
// 006f7f19  56                   push esi
// 006f7f1a  57                   push edi
// 006f7f1b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006f7f1f  8b4f04               mov ecx, dword ptr [edi + 4]
// 006f7f22  33c0                 xor eax, eax
// 006f7f24  85c9                 test ecx, ecx
// 006f7f26  7e14                 jle 0x6f7f3c
// 006f7f28  8b37                 mov esi, dword ptr [edi]
// 006f7f2a  8bd6                 mov edx, esi
// 006f7f2c  8d642400             lea esp, [esp]
// 006f7f30  391a                 cmp dword ptr [edx], ebx
// 006f7f32  741f                 je 0x6f7f53
// 006f7f34  40                   inc eax
// 006f7f35  83c204               add edx, 4
// 006f7f38  3bc1                 cmp eax, ecx
// 006f7f3a  7cf4                 jl 0x6f7f30
// 006f7f3c  8b37                 mov esi, dword ptr [edi]
// 006f7f3e  8d048e               lea eax, [esi + ecx*4]
// 006f7f41  8d0c8e               lea ecx, [esi + ecx*4]
// 006f7f44  5f                   pop edi
// 006f7f45  5e                   pop esi
// 006f7f46  3bc1                 cmp eax, ecx
// 006f7f48  750e                 jne 0x6f7f58
// 006f7f4a  b801000000           mov eax, 1
// 006f7f4f  5b                   pop ebx
// 006f7f50  c20800               ret 8
// 006f7f53  8d0486               lea eax, [esi + eax*4]
// 006f7f56  ebe9                 jmp 0x6f7f41
// 006f7f58  33c0                 xor eax, eax
// 006f7f5a  5b                   pop ebx
// 006f7f5b  c20800               ret 8
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