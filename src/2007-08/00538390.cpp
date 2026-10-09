// from server: 82% by colin
// roc 2007-08 00538390  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538390
//
// 00538390  53                   push ebx
// 00538391  55                   push ebp
// 00538392  56                   push esi
// 00538393  57                   push edi
// 00538394  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00538398  8b7704               mov esi, dword ptr [edi + 4]
// 0053839b  33db                 xor ebx, ebx
// 0053839d  3b7708               cmp esi, dword ptr [edi + 8]
// 005383a0  7606                 jbe 0x5383a8
// 005383a2  ff15d8e67700         call dword ptr [0x77e6d8]
// 005383a8  8b6f08               mov ebp, dword ptr [edi + 8]
// 005383ab  396f04               cmp dword ptr [edi + 4], ebp
// 005383ae  7606                 jbe 0x5383b6
// 005383b0  ff15d8e67700         call dword ptr [0x77e6d8]
// 005383b6  3bf5                 cmp esi, ebp
// 005383b8  742b                 je 0x5383e5
// 005383ba  3b7708               cmp esi, dword ptr [edi + 8]
// 005383bd  7206                 jb 0x5383c5
// 005383bf  ff15d8e67700         call dword ptr [0x77e6d8]
// 005383c5  8b442418             mov eax, dword ptr [esp + 0x18]
// 005383c9  50                   push eax
// 005383ca  56                   push esi
// 005383cb  e810fbffff           call 0x537ee0
// 005383d0  83c408               add esp, 8
// 005383d3  03d8                 add ebx, eax
// 005383d5  3b7708               cmp esi, dword ptr [edi + 8]
// 005383d8  7206                 jb 0x5383e0
// 005383da  ff15d8e67700         call dword ptr [0x77e6d8]
// 005383e0  83c608               add esi, 8
// 005383e3  ebd1                 jmp 0x5383b6
// 005383e5  5f                   pop edi
// 005383e6  5e                   pop esi
// 005383e7  5d                   pop ebp
// 005383e8  8bc3                 mov eax, ebx
// 005383ea  5b                   pop ebx
// 005383eb  c3                   ret 

struct S {
    char pad[4];
    int* begin;
    int* end;
};

extern "C" void __stdcall _invalid_parameter_noinfo(void);

int __cdecl f(S* s, int arg);

int __cdecl f(S* s, int arg)
{
    int* first = s->begin;
    int total = 0;
    if (first > s->end)
        _invalid_parameter_noinfo();
    int* last = s->end;
    if (s->begin > last)
        _invalid_parameter_noinfo();
    while (first != last) {
        if (first >= s->end)
            _invalid_parameter_noinfo();
        total += f((S*)first, arg);
        if (first >= s->end)
            _invalid_parameter_noinfo();
        first += 2;
    }
    return total;
}
