// from server: 79% by colin
// roc 2007-08 00654590  unit: CInstanceRecord::CNameItem  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00654590
//
// 00654590  51                   push ecx
// 00654591  53                   push ebx
// 00654592  55                   push ebp
// 00654593  56                   push esi
// 00654594  8bf1                 mov esi, ecx
// 00654596  8b06                 mov eax, dword ptr [esi]
// 00654598  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0065459e  57                   push edi
// 0065459f  ffd2                 call edx
// 006545a1  33ff                 xor edi, edi
// 006545a3  85c0                 test eax, eax
// 006545a5  89442410             mov dword ptr [esp + 0x10], eax
// 006545a9  7e2e                 jle 0x6545d9
// 006545ab  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006545af  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006545b3  8b06                 mov eax, dword ptr [esi]
// 006545b5  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006545bb  57                   push edi
// 006545bc  8bce                 mov ecx, esi
// 006545be  ffd2                 call edx
// 006545c0  53                   push ebx
// 006545c1  55                   push ebp
// 006545c2  83c020               add eax, 0x20
// 006545c5  50                   push eax
// 006545c6  ff1594ed7700         call dword ptr [0x77ed94]
// 006545cc  85c0                 test eax, eax
// 006545ce  7514                 jne 0x6545e4
// 006545d0  83c701               add edi, 1
// 006545d3  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 006545d7  7cda                 jl 0x6545b3
// 006545d9  5f                   pop edi
// 006545da  5e                   pop esi
// 006545db  5d                   pop ebp
// 006545dc  83c8ff               or eax, 0xffffffff
// 006545df  5b                   pop ebx
// 006545e0  59                   pop ecx
// 006545e1  c20800               ret 8
// 006545e4  8bc7                 mov eax, edi
// 006545e6  5f                   pop edi
// 006545e7  5e                   pop esi
// 006545e8  5d                   pop ebp
// 006545e9  5b                   pop ebx
// 006545ea  59                   pop ecx
// 006545eb  c20800               ret 8

struct CNameItem {
    int f(int x, int y);
};

extern "C" int __stdcall PtInRect(const void* r, int x, int y);

int CNameItem::f(int x, int y)
{
    int count = (*(int (__thiscall **)(CNameItem*))(*(int*)this + 0xb4))(this);
    int i = 0;
    if (count > 0) {
        do {
            void* p = (*(void* (__thiscall **)(CNameItem*, int))(*(int*)this + 0xb8))(this, i);
            if (PtInRect((char*)p + 0x20, x, y))
                return i;
            i++;
        } while (i < count);
    }
    return -1;
}
