// from server: 100% by king_originala
// roc 2008-06 0066cc70  unit: RBX::GroupDragTool  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066cc70
//
// 0066cc70  53                   push ebx
// 0066cc71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0066cc75  85db                 test ebx, ebx
// 0066cc77  743f                 je 0x66ccb8
// 0066cc79  56                   push esi
// 0066cc7a  57                   push edi
// 0066cc7b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0066cc7f  8b4f04               mov ecx, dword ptr [edi + 4]
// 0066cc82  33c0                 xor eax, eax
// 0066cc84  85c9                 test ecx, ecx
// 0066cc86  7e14                 jle 0x66cc9c
// 0066cc88  8b37                 mov esi, dword ptr [edi]
// 0066cc8a  8bd6                 mov edx, esi
// 0066cc8c  8d642400             lea esp, [esp]
// 0066cc90  391a                 cmp dword ptr [edx], ebx
// 0066cc92  741f                 je 0x66ccb3
// 0066cc94  40                   inc eax
// 0066cc95  83c204               add edx, 4
// 0066cc98  3bc1                 cmp eax, ecx
// 0066cc9a  7cf4                 jl 0x66cc90
// 0066cc9c  8b37                 mov esi, dword ptr [edi]
// 0066cc9e  8d048e               lea eax, [esi + ecx*4]
// 0066cca1  8d0c8e               lea ecx, [esi + ecx*4]
// 0066cca4  5f                   pop edi
// 0066cca5  5e                   pop esi
// 0066cca6  3bc1                 cmp eax, ecx
// 0066cca8  750e                 jne 0x66ccb8
// 0066ccaa  b801000000           mov eax, 1
// 0066ccaf  5b                   pop ebx
// 0066ccb0  c20800               ret 8
// 0066ccb3  8d0486               lea eax, [esi + eax*4]
// 0066ccb6  ebe9                 jmp 0x66cca1
// 0066ccb8  33c0                 xor eax, eax
// 0066ccba  5b                   pop ebx
// 0066ccbb  c20800               ret 8

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
