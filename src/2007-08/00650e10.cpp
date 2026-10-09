// from server: 75% by colin
// roc 2007-08 00650e10  unit: CXTPCommandBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00650e10
//
// 00650e10  57                   push edi
// 00650e11  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00650e15  85ff                 test edi, edi
// 00650e17  7507                 jne 0x650e20
// 00650e19  83c8ff               or eax, 0xffffffff
// 00650e1c  5f                   pop edi
// 00650e1d  c21000               ret 0x10
// 00650e20  8b442410             mov eax, dword ptr [esp + 0x10]
// 00650e24  53                   push ebx
// 00650e25  56                   push esi
// 00650e26  8b742410             mov esi, dword ptr [esp + 0x10]
// 00650e2a  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00650e2d  3bc2                 cmp eax, edx
// 00650e2f  7d35                 jge 0x650e66
// 00650e31  85c0                 test eax, eax
// 00650e33  7c0c                 jl 0x650e41
// 00650e35  3bc2                 cmp eax, edx
// 00650e37  7d08                 jge 0x650e41
// 00650e39  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00650e3c  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00650e3f  eb02                 jmp 0x650e43
// 00650e41  33c9                 xor ecx, ecx
// 00650e43  8b9984000000         mov ebx, dword ptr [ecx + 0x84]
// 00650e49  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 00650e4f  750e                 jne 0x650e5f
// 00650e51  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 00650e57  3b8ff8000000         cmp ecx, dword ptr [edi + 0xf8]
// 00650e5d  740a                 je 0x650e69
// 00650e5f  83c001               add eax, 1
// 00650e62  3bc2                 cmp eax, edx
// 00650e64  7ccb                 jl 0x650e31
// 00650e66  83c8ff               or eax, 0xffffffff
// 00650e69  5e                   pop esi
// 00650e6a  5b                   pop ebx
// 00650e6b  5f                   pop edi
// 00650e6c  c21000               ret 0x10

struct CXTPCommandBar
{
    int Find(void* p, int start, int unused1, int unused2);
};

int CXTPCommandBar::Find(void* p, int start, int unused1, int unused2)
{
    if (p == 0)
        return -1;

    int count = *(int*)((char*)this + 0x2c);
    int i = start;
    while (i < count)
    {
        void* item;
        if (i >= 0 && i < count)
            item = *(void**)(*(int*)((char*)this + 0x28) + i * 4);
        else
            item = 0;

        if (*(int*)((char*)item + 0x84) == *(int*)((char*)p + 0x84) &&
            *(int*)((char*)item + 0xf8) == *(int*)((char*)p + 0xf8))
            return i;

        i++;
    }
    return -1;
}
