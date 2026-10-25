// from server: 100% by king_originala
// roc 2008-06 006906d0  unit: Ogre::RbxSceneManagerFactory  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006906d0
//
// 006906d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006906d4  53                   push ebx
// 006906d5  56                   push esi
// 006906d6  57                   push edi
// 006906d7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006906db  3bf9                 cmp edi, ecx
// 006906dd  747a                 je 0x690759
// 006906df  55                   push ebp
// 006906e0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006906e4  3b442420             cmp eax, dword ptr [esp + 0x20]
// 006906e8  746e                 je 0x690758
// 006906ea  8b2f                 mov ebp, dword ptr [edi]
// 006906ec  8b30                 mov esi, dword ptr [eax]
// 006906ee  3bf5                 cmp esi, ebp
// 006906f0  744e                 je 0x690740
// 006906f2  8b06                 mov eax, dword ptr [esi]
// 006906f4  8b5004               mov edx, dword ptr [eax + 4]
// 006906f7  8bce                 mov ecx, esi
// 006906f9  ffd2                 call edx
// 006906fb  8ad8                 mov bl, al
// 006906fd  8b4500               mov eax, dword ptr [ebp]
// 00690700  8b5004               mov edx, dword ptr [eax + 4]
// 00690703  8bcd                 mov ecx, ebp
// 00690705  ffd2                 call edx
// 00690707  3ad8                 cmp bl, al
// 00690709  7422                 je 0x69072d
// 0069070b  8b06                 mov eax, dword ptr [esi]
// 0069070d  8b5004               mov edx, dword ptr [eax + 4]
// 00690710  8bce                 mov ecx, esi
// 00690712  ffd2                 call edx
// 00690714  84c0                 test al, al
// 00690716  7428                 je 0x690740
// 00690718  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0069071c  8b08                 mov ecx, dword ptr [eax]
// 0069071e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00690722  83c004               add eax, 4
// 00690725  890a                 mov dword ptr [edx], ecx
// 00690727  8944241c             mov dword ptr [esp + 0x1c], eax
// 0069072b  eb1e                 jmp 0x69074b
// 0069072d  d985c8000000         fld dword ptr [ebp + 0xc8]
// 00690733  d89ec8000000         fcomp dword ptr [esi + 0xc8]
// 00690739  dfe0                 fnstsw ax
// 0069073b  f6c441               test ah, 0x41
// 0069073e  74d8                 je 0x690718
// 00690740  8b07                 mov eax, dword ptr [edi]
// 00690742  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00690746  8901                 mov dword ptr [ecx], eax
// 00690748  83c704               add edi, 4
// 0069074b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0069074f  8344242404           add dword ptr [esp + 0x24], 4
// 00690754  3bf9                 cmp edi, ecx
// 00690756  7588                 jne 0x6906e0
// 00690758  5d                   pop ebp
// 00690759  8b542420             mov edx, dword ptr [esp + 0x20]
// 0069075d  8b1d50288000         mov ebx, dword ptr [0x802850]
// 00690763  2bcf                 sub ecx, edi
// 00690765  c1f902               sar ecx, 2
// 00690768  8bc1                 mov eax, ecx
// 0069076a  8d0c8500000000       lea ecx, [eax*4]
// 00690771  8d3411               lea esi, [ecx + edx]
// 00690774  85c0                 test eax, eax
// 00690776  7e09                 jle 0x690781
// 00690778  51                   push ecx
// 00690779  57                   push edi
// 0069077a  51                   push ecx
// 0069077b  52                   push edx
// 0069077c  ffd3                 call ebx
// 0069077e  83c410               add esp, 0x10
// 00690781  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00690785  8b542418             mov edx, dword ptr [esp + 0x18]
// 00690789  2bca                 sub ecx, edx
// 0069078b  c1f902               sar ecx, 2
// 0069078e  8d048d00000000       lea eax, [ecx*4]
// 00690795  8d3c30               lea edi, [eax + esi]
// 00690798  85c9                 test ecx, ecx
// 0069079a  7e09                 jle 0x6907a5
// 0069079c  50                   push eax
// 0069079d  52                   push edx
// 0069079e  50                   push eax
// 0069079f  56                   push esi
// 006907a0  ffd3                 call ebx
// 006907a2  83c410               add esp, 0x10
// 006907a5  8bc7                 mov eax, edi
// 006907a7  5f                   pop edi
// 006907a8  5e                   pop esi
// 006907a9  5b                   pop ebx
// 006907aa  c3                   ret 

extern "C" int (__cdecl *memmove_s)(void *, unsigned int,
                                   const void *, unsigned int);

struct Item {
    virtual void slot0();
    virtual bool flag();
    unsigned char padding[196];
    float value;
};

#pragma float_control(precise, off)

Item **__cdecl merge(Item **first1, Item **last1,
                     Item **first2, Item **last2, Item **result)
{
    while (first1 != last1 && first2 != last2) {
        Item *left = *first1;
        Item *right = *first2;

        bool takeRight = false;
        if (right != left) {
            if (right->flag() != left->flag())
                takeRight = right->flag();
            else
                takeRight = right->value < left->value;
        }

        if (takeRight)
            *result = *first2++;
        else
            *result = *first1++;
        ++result;
    }

    int (__cdecl *copy)(void *, unsigned int, const void *, unsigned int)
        = memmove_s;

    int count1 = last1 - first1;
    Item **next = result + count1;
    if (count1 > 0)
        copy(result, count1 * 4, first1, count1 * 4);

    int count2 = last2 - first2;
    Item **end = next + count2;
    if (count2 > 0)
        copy(next, count2 * 4, first2, count2 * 4);

    return end;
}
