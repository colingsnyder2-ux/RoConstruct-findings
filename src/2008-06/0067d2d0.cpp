// from server: 48% by colin
// roc 2008-06 0067d2d0  unit: Ogre::RbxEntity  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067d2d0
//
// 0067d2d0  53                   push ebx
// 0067d2d1  55                   push ebp
// 0067d2d2  56                   push esi
// 0067d2d3  8bf1                 mov esi, ecx
// 0067d2d5  57                   push edi
// 0067d2d6  8bbee4000000         mov edi, dword ptr [esi + 0xe4]
// 0067d2dc  3bbee8000000         cmp edi, dword ptr [esi + 0xe8]
// 0067d2e2  7606                 jbe 0x67d2ea
// 0067d2e4  ff1590288000         call dword ptr [0x802890]
// 0067d2ea  8b9ed8000000         mov ebx, dword ptr [esi + 0xd8]
// 0067d2f0  8baee8000000         mov ebp, dword ptr [esi + 0xe8]
// 0067d2f6  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 0067d2fc  7606                 jbe 0x67d304
// 0067d2fe  ff1590288000         call dword ptr [0x802890]
// 0067d304  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0067d30a  85db                 test ebx, ebx
// 0067d30c  7404                 je 0x67d312
// 0067d30e  3bd8                 cmp ebx, eax
// 0067d310  7406                 je 0x67d318
// 0067d312  ff1590288000         call dword ptr [0x802890]
// 0067d318  3bfd                 cmp edi, ebp
// 0067d31a  0f8487000000         je 0x67d3a7
// 0067d320  85db                 test ebx, ebx
// 0067d322  7537                 jne 0x67d35b
// 0067d324  ff1590288000         call dword ptr [0x802890]
// 0067d32a  33c0                 xor eax, eax
// 0067d32c  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0067d32f  7206                 jb 0x67d337
// 0067d331  ff1590288000         call dword ptr [0x802890]
// 0067d337  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0067d33b  392f                 cmp dword ptr [edi], ebp
// 0067d33d  7424                 je 0x67d363
// 0067d33f  85db                 test ebx, ebx
// 0067d341  751c                 jne 0x67d35f
// 0067d343  ff1590288000         call dword ptr [0x802890]
// 0067d349  33c0                 xor eax, eax
// 0067d34b  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0067d34e  7206                 jb 0x67d356
// 0067d350  ff1590288000         call dword ptr [0x802890]
// 0067d356  83c704               add edi, 4
// 0067d359  eb95                 jmp 0x67d2f0
// 0067d35b  8b03                 mov eax, dword ptr [ebx]
// 0067d35d  ebcd                 jmp 0x67d32c
// 0067d35f  8b03                 mov eax, dword ptr [ebx]
// 0067d361  ebe8                 jmp 0x67d34b
// 0067d363  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 0067d369  8d4f04               lea ecx, [edi + 4]
// 0067d36c  2bc1                 sub eax, ecx
// 0067d36e  c1f802               sar eax, 2
// 0067d371  85c0                 test eax, eax
// 0067d373  7e11                 jle 0x67d386
// 0067d375  03c0                 add eax, eax
// 0067d377  03c0                 add eax, eax
// 0067d379  50                   push eax
// 0067d37a  51                   push ecx
// 0067d37b  50                   push eax
// 0067d37c  57                   push edi
// 0067d37d  ff1550288000         call dword ptr [0x802850]
// 0067d383  83c410               add esp, 0x10
// 0067d386  8386e8000000fc       add dword ptr [esi + 0xe8], -4
// 0067d38d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 0067d393  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 0067d399  7704                 ja 0x67d39f
// 0067d39b  3bf8                 cmp edi, eax
// 0067d39d  760c                 jbe 0x67d3ab
// 0067d39f  ff1590288000         call dword ptr [0x802890]
// 0067d3a5  eb04                 jmp 0x67d3ab
// 0067d3a7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0067d3ab  85ed                 test ebp, ebp
// 0067d3ad  740b                 je 0x67d3ba
// 0067d3af  8b4500               mov eax, dword ptr [ebp]
// 0067d3b2  8b10                 mov edx, dword ptr [eax]
// 0067d3b4  6a01                 push 1
// 0067d3b6  8bcd                 mov ecx, ebp
// 0067d3b8  ffd2                 call edx
// 0067d3ba  5f                   pop edi
// 0067d3bb  5e                   pop esi
// 0067d3bc  5d                   pop ebp
// 0067d3bd  5b                   pop ebx
// 0067d3be  c20400               ret 4

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void *__cdecl memmove_s(void *, unsigned int, const void *, unsigned int);

struct RbxEntity {
    char pad[0xd8];
    int *begin;
    char pad2[0x8];
    int *end;
    char pad3[0x4];
    int *cap;
    void erase(int *);
};

void RbxEntity::erase(int *pos)
{
    int *first = begin;
    int *last = end;
    if (first > last)
        _invalid_parameter_noinfo();
    int *cur = begin;
    if (end < begin)
        _invalid_parameter_noinfo();
    int *b = begin;
    if (first != 0 && first != b)
        _invalid_parameter_noinfo();
    if (pos != last) {
        int *p = pos;
        while (p != last) {
            if (p == 0)
                _invalid_parameter_noinfo();
            if (*p == *(int *)0x14)
                break;
            if (p == 0)
                _invalid_parameter_noinfo();
            p++;
        }
        if (p != last) {
            int *next = p + 1;
            int count = (int)((end - next) >> 2);
            if (count > 0)
                memmove_s(p, count * 4, next, count * 4);
            end -= 1;
            if (begin > p || p > end)
                _invalid_parameter_noinfo();
        }
    }
    int *arg = *(int **)0x14;
    if (arg != 0) {
        void (***vt)(void *, int) = (void (***)(void *, int))arg;
        (**vt)(arg, 1);
    }
}
