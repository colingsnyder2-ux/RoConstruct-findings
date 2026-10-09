// from server: 48% by colin
// roc 2007-08 0062baf0  unit: RBX::GroupDragTool  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062baf0
//
// 0062baf0  53                   push ebx
// 0062baf1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0062baf5  85db                 test ebx, ebx
// 0062baf7  7441                 je 0x62bb3a
// 0062baf9  56                   push esi
// 0062bafa  57                   push edi
// 0062bafb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0062baff  8b4f04               mov ecx, dword ptr [edi + 4]
// 0062bb02  33c0                 xor eax, eax
// 0062bb04  85c9                 test ecx, ecx
// 0062bb06  7e16                 jle 0x62bb1e
// 0062bb08  8b37                 mov esi, dword ptr [edi]
// 0062bb0a  8bd6                 mov edx, esi
// 0062bb0c  8d642400             lea esp, [esp]
// 0062bb10  391a                 cmp dword ptr [edx], ebx
// 0062bb12  7421                 je 0x62bb35
// 0062bb14  83c001               add eax, 1
// 0062bb17  83c204               add edx, 4
// 0062bb1a  3bc1                 cmp eax, ecx
// 0062bb1c  7cf2                 jl 0x62bb10
// 0062bb1e  8b37                 mov esi, dword ptr [edi]
// 0062bb20  8d048e               lea eax, [esi + ecx*4]
// 0062bb23  8d0c8e               lea ecx, [esi + ecx*4]
// 0062bb26  3bc1                 cmp eax, ecx
// 0062bb28  5f                   pop edi
// 0062bb29  5e                   pop esi
// 0062bb2a  750e                 jne 0x62bb3a
// 0062bb2c  b801000000           mov eax, 1
// 0062bb31  5b                   pop ebx
// 0062bb32  c20800               ret 8
// 0062bb35  8d0486               lea eax, [esi + eax*4]
// 0062bb38  ebe9                 jmp 0x62bb23
// 0062bb3a  33c0                 xor eax, eax
// 0062bb3c  5b                   pop ebx
// 0062bb3d  c20800               ret 8

struct GroupDragTool {
    bool contains(void* item, int unused);
};

bool GroupDragTool::contains(void* item, int unused)
{
    if (item == 0)
        return false;

    int* vec = (int*)unused;
    int count = vec[1];
    int* begin = (int*)vec[0];

    int i = 0;
    if (count > 0) {
        int* p = begin;
        do {
            if (*p == (int)item)
                break;
            ++i;
            ++p;
        } while (i < count);
    }

    if (i != count)
        return true;

    return false;
}
