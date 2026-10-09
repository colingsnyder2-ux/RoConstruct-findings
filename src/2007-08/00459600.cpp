// from server: 92% by colin
// roc 2007-08 00459600  unit: CRobloxWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459600
//
// 00459600  8b442408             mov eax, dword ptr [esp + 8]
// 00459604  83f802               cmp eax, 2
// 00459607  7519                 jne 0x459622
// 00459609  56                   push esi
// 0045960a  8b742408             mov esi, dword ptr [esp + 8]
// 0045960e  56                   push esi
// 0045960f  b928a08800           mov ecx, 0x88a028
// 00459614  ff1508e77700         call dword ptr [0x77e708]
// 0045961a  f6d8                 neg al
// 0045961c  1bc0                 sbb eax, eax
// 0045961e  23c6                 and eax, esi
// 00459620  5e                   pop esi
// 00459621  c3                   ret 
// 00459622  85c0                 test eax, eax
// 00459624  751d                 jne 0x459643
// 00459626  6a08                 push 8
// 00459628  e8c9681d00           call 0x62fef6
// 0045962d  83c404               add esp, 4
// 00459630  85c0                 test eax, eax
// 00459632  741e                 je 0x459652
// 00459634  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00459638  8b11                 mov edx, dword ptr [ecx]
// 0045963a  8910                 mov dword ptr [eax], edx
// 0045963c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0045963f  894804               mov dword ptr [eax + 4], ecx
// 00459642  c3                   ret 
// 00459643  8b542404             mov edx, dword ptr [esp + 4]
// 00459647  52                   push edx
// 00459648  e815661d00           call 0x62fc62
// 0045964d  83c404               add esp, 4
// 00459650  33c0                 xor eax, eax
// 00459652  c3                   ret 

struct type_info
{
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_88A028;

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_62FC62(void*);

void* func_00459600(void* self, int a, int b)
{
    if (b == 2)
    {
        if (type_info_88A028 == *(const type_info*)self)
            return self;
        return 0;
    }
    if (b == 0)
    {
        void* p = sub_62FEF6(8);
        if (p)
        {
            *(int*)p = *(int*)self;
            *(int*)((char*)p + 4) = *(int*)((char*)self + 4);
            return p;
        }
        return 0;
    }
    sub_62FC62(self);
    return 0;
}
