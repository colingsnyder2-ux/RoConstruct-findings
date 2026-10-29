// roc 2009-12 007bed80  unit: RBX::FilterStairs  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bed80
//
// 007bed80  53                   push ebx
// 007bed81  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007bed85  85db                 test ebx, ebx
// 007bed87  743f                 je 0x7bedc8
// 007bed89  56                   push esi
// 007bed8a  57                   push edi
// 007bed8b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007bed8f  8b4f04               mov ecx, dword ptr [edi + 4]
// 007bed92  33c0                 xor eax, eax
// 007bed94  85c9                 test ecx, ecx
// 007bed96  7e14                 jle 0x7bedac
// 007bed98  8b37                 mov esi, dword ptr [edi]
// 007bed9a  8bd6                 mov edx, esi
// 007bed9c  8d642400             lea esp, [esp]
// 007beda0  391a                 cmp dword ptr [edx], ebx
// 007beda2  741f                 je 0x7bedc3
// 007beda4  40                   inc eax
// 007beda5  83c204               add edx, 4
// 007beda8  3bc1                 cmp eax, ecx
// 007bedaa  7cf4                 jl 0x7beda0
// 007bedac  8b37                 mov esi, dword ptr [edi]
// 007bedae  8d048e               lea eax, [esi + ecx*4]
// 007bedb1  8d0c8e               lea ecx, [esi + ecx*4]
// 007bedb4  5f                   pop edi
// 007bedb5  5e                   pop esi
// 007bedb6  3bc1                 cmp eax, ecx
// 007bedb8  750e                 jne 0x7bedc8
// 007bedba  b801000000           mov eax, 1
// 007bedbf  5b                   pop ebx
// 007bedc0  c20800               ret 8
// 007bedc3  8d0486               lea eax, [esi + eax*4]
// 007bedc6  ebe9                 jmp 0x7bedb1
// 007bedc8  33c0                 xor eax, eax
// 007bedca  5b                   pop ebx
// 007bedcb  c20800               ret 8
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