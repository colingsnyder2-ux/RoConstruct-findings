// from server: 65% by colin
// roc 2007-08 004215e0  unit: CSelectionTreeCtrl  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004215e0
//
// 004215e0  53                   push ebx
// 004215e1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004215e5  55                   push ebp
// 004215e6  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004215ea  56                   push esi
// 004215eb  8b742418             mov esi, dword ptr [esp + 0x18]
// 004215ef  57                   push edi
// 004215f0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004215f4  3bf7                 cmp esi, edi
// 004215f6  7430                 je 0x421628
// 004215f8  8b06                 mov eax, dword ptr [esi]
// 004215fa  83ec08               sub esp, 8
// 004215fd  8bcc                 mov ecx, esp
// 004215ff  8901                 mov dword ptr [ecx], eax
// 00421601  8b4604               mov eax, dword ptr [esi + 4]
// 00421604  85c0                 test eax, eax
// 00421606  89642420             mov dword ptr [esp + 0x20], esp
// 0042160a  894104               mov dword ptr [ecx + 4], eax
// 0042160d  740c                 je 0x42161b
// 0042160f  83c004               add eax, 4
// 00421612  b901000000           mov ecx, 1
// 00421617  f00fc108             lock xadd dword ptr [eax], ecx
// 0042161b  53                   push ebx
// 0042161c  ffd5                 call ebp
// 0042161e  83c608               add esi, 8
// 00421621  83c40c               add esp, 0xc
// 00421624  3bf7                 cmp esi, edi
// 00421626  75d0                 jne 0x4215f8
// 00421628  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042162c  8b542430             mov edx, dword ptr [esp + 0x30]
// 00421630  5f                   pop edi
// 00421631  8928                 mov dword ptr [eax], ebp
// 00421633  5e                   pop esi
// 00421634  895804               mov dword ptr [eax + 4], ebx
// 00421637  5d                   pop ebp
// 00421638  895008               mov dword ptr [eax + 8], edx
// 0042163b  5b                   pop ebx
// 0042163c  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CSelectionTreeCtrl
{
    char* unk0;
    char* unk4;
    char* unk8;
    void InsertRange(char* first, char* last, char* out, int a, int b);
};

void CSelectionTreeCtrl::InsertRange(char* first, char* last, char* out, int a, int b)
{
    while (first != last)
    {
        char* p = first;
        char* q = *(char**)(first + 4);
        if (q != 0)
        {
            _InterlockedExchangeAdd((volatile long*)(q + 4), 1);
        }
        ((void (__stdcall*)(int))a)(b);
        first += 8;
    }
    *(char**)out = (char*)a;
    *(int*)(out + 4) = b;
    *(int*)(out + 8) = 0;
}
