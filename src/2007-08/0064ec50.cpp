// from server: 93% by colin
// roc 2007-08 0064ec50  unit: CXTPToolBar::CControlButtonCustomize  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ec50
//
// 0064ec50  56                   push esi
// 0064ec51  57                   push edi
// 0064ec52  8bf9                 mov edi, ecx
// 0064ec54  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 0064ec5a  33f6                 xor esi, esi
// 0064ec5c  e8af5affff           call 0x644710
// 0064ec61  85c0                 test eax, eax
// 0064ec63  7e32                 jle 0x64ec97
// 0064ec65  eb09                 jmp 0x64ec70
// 0064ec67  8da42400000000       lea esp, [esp]
// 0064ec6e  8bff                 mov edi, edi
// 0064ec70  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 0064ec76  56                   push esi
// 0064ec77  e8a45affff           call 0x644720
// 0064ec7c  83b8d000000002       cmp dword ptr [eax + 0xd0], 2
// 0064ec83  7417                 je 0x64ec9c
// 0064ec85  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 0064ec8b  83c601               add esi, 1
// 0064ec8e  e87d5affff           call 0x644710
// 0064ec93  3bf0                 cmp esi, eax
// 0064ec95  7cd9                 jl 0x64ec70
// 0064ec97  5f                   pop edi
// 0064ec98  33c0                 xor eax, eax
// 0064ec9a  5e                   pop esi
// 0064ec9b  c3                   ret 
// 0064ec9c  5f                   pop edi
// 0064ec9d  b801000000           mov eax, 1
// 0064eca2  5e                   pop esi
// 0064eca3  c3                   ret 

struct CXTPToolBar_CControlButtonCustomize {
    char pad0[0xfc];
    void* m_pList;
    int f();
};

extern "C" int __fastcall sub_00644710(void* self);
extern "C" void* __fastcall sub_00644720(void* self, int index);

int CXTPToolBar_CControlButtonCustomize::f()
{
    int count = sub_00644710(m_pList);
    int i = 0;
    if (count > 0) {
        do {
            void* p = sub_00644720(m_pList, i);
            if (*(int*)((char*)p + 0xd0) == 2)
                return 1;
            i++;
        } while (i < sub_00644710(m_pList));
    }
    return 0;
}
