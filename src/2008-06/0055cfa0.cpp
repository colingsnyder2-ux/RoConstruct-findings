// from server: 100% by king_originala
// roc 2008-06 0055cfa0  unit: RBX::MD5HasherImpl  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055cfa0
//
// 0055cfa0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055cfa4  85c0                 test eax, eax
// 0055cfa6  7523                 jne 0x55cfcb
// 0055cfa8  8b442408             mov eax, dword ptr [esp + 8]
// 0055cfac  85c0                 test eax, eax
// 0055cfae  7440                 je 0x55cff0
// 0055cfb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055cfb4  8b11                 mov edx, dword ptr [ecx]
// 0055cfb6  8910                 mov dword ptr [eax], edx
// 0055cfb8  8b5104               mov edx, dword ptr [ecx + 4]
// 0055cfbb  895004               mov dword ptr [eax + 4], edx
// 0055cfbe  8b5108               mov edx, dword ptr [ecx + 8]
// 0055cfc1  895008               mov dword ptr [eax + 8], edx
// 0055cfc4  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055cfc7  89480c               mov dword ptr [eax + 0xc], ecx
// 0055cfca  c3                   ret 
// 0055cfcb  83f801               cmp eax, 1
// 0055cfce  7420                 je 0x55cff0
// 0055cfd0  56                   push esi
// 0055cfd1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055cfd5  8b0e                 mov ecx, dword ptr [esi]
// 0055cfd7  6828439400           push 0x944328
// 0055cfdc  ff1578288000         call dword ptr [0x802878]
// 0055cfe2  0fb6d0               movzx edx, al
// 0055cfe5  f7da                 neg edx
// 0055cfe7  1bd2                 sbb edx, edx
// 0055cfe9  23542408             and edx, dword ptr [esp + 8]
// 0055cfed  8916                 mov dword ptr [esi], edx
// 0055cfef  5e                   pop esi
// 0055cff0  c3                   ret 

extern const char target_type;
extern bool (__thiscall *type_equal)(const void *, const void *);

void manage(const unsigned int *source, unsigned int *destination, int operation)
{
    if (operation == 0)
    {
        if (destination)
        {
            destination[0] = source[0];
            destination[1] = source[1];
            destination[2] = source[2];
            destination[3] = source[3];
        }
    }
    else if (operation != 1)
    {
        destination[0] =
            type_equal((const void *)destination[0], &target_type)
            ? (unsigned int)source : 0;
    }
}
