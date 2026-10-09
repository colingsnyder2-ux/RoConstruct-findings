// from server: 31% by colin
// roc 2007-08 005e4470  unit: RBX::BoxSelectCommand  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e4470
//
// 005e4470  53                   push ebx
// 005e4471  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005e4477  55                   push ebp
// 005e4478  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005e447c  56                   push esi
// 005e447d  57                   push edi
// 005e447e  8bff                 mov edi, edi
// 005e4480  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e4484  85f6                 test esi, esi
// 005e4486  7406                 je 0x5e448e
// 005e4488  3b742420             cmp esi, dword ptr [esp + 0x20]
// 005e448c  7402                 je 0x5e4490
// 005e448e  ffd3                 call ebx
// 005e4490  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005e4494  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 005e4498  7423                 je 0x5e44bd
// 005e449a  85f6                 test esi, esi
// 005e449c  7502                 jne 0x5e44a0
// 005e449e  ffd3                 call ebx
// 005e44a0  3b7e04               cmp edi, dword ptr [esi + 4]
// 005e44a3  7502                 jne 0x5e44a7
// 005e44a5  ffd3                 call ebx
// 005e44a7  8b470c               mov eax, dword ptr [edi + 0xc]
// 005e44aa  50                   push eax
// 005e44ab  8bcd                 mov ecx, ebp
// 005e44ad  e89ef1f4ff           call 0x533650
// 005e44b2  8d4c2418             lea ecx, [esp + 0x18]
// 005e44b6  e8852d0400           call 0x627240
// 005e44bb  ebc3                 jmp 0x5e4480
// 005e44bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e44c1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e44c5  5f                   pop edi
// 005e44c6  5e                   pop esi
// 005e44c7  896804               mov dword ptr [eax + 4], ebp
// 005e44ca  5d                   pop ebp
// 005e44cb  8908                 mov dword ptr [eax], ecx
// 005e44cd  5b                   pop ebx
// 005e44ce  c3                   ret 

struct BoxSelectCommand {
    char pad[0x10];
    void selectAnd(const void*);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void BoxSelectCommand::selectAnd(const void* newItemsInBox)
{
    int* it = *(int**)newItemsInBox;
    int* end = *(int**)((char*)newItemsInBox + 4);
    while (it != end) {
        if (it == 0 || it == end) {
            _invalid_parameter_noinfo();
        }
        int* next = *(int**)((char*)it + 0xc);
        (void)next;
        it = *(int**)it;
    }
}
