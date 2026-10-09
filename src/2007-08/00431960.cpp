// from server: 31% by colin
// roc 2007-08 00431960  unit: CDataModelPropGrid  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00431960
//
// 00431960  6aff                 push -1
// 00431962  6898db7300           push 0x73db98
// 00431967  64a100000000         mov eax, dword ptr fs:[0]
// 0043196d  50                   push eax
// 0043196e  51                   push ecx
// 0043196f  56                   push esi
// 00431970  a188518b00           mov eax, dword ptr [0x8b5188]
// 00431975  33c4                 xor eax, esp
// 00431977  50                   push eax
// 00431978  8d44240c             lea eax, [esp + 0xc]
// 0043197c  64a300000000         mov dword ptr fs:[0], eax
// 00431982  8bf1                 mov esi, ecx
// 00431984  89742408             mov dword ptr [esp + 8], esi
// 00431988  33c9                 xor ecx, ecx
// 0043198a  3bf1                 cmp esi, ecx
// 0043198c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00431990  7406                 je 0x431998
// 00431992  8d8edc010000         lea ecx, [esi + 0x1dc]
// 00431998  e8535afdff           call 0x4073f0
// 0043199d  8bce                 mov ecx, esi
// 0043199f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004319a7  e824f4ffff           call 0x430dd0
// 004319ac  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004319b0  64890d00000000       mov dword ptr fs:[0], ecx
// 004319b7  59                   pop ecx
// 004319b8  5e                   pop esi
// 004319b9  83c410               add esp, 0x10
// 004319bc  c3                   ret 

struct CDataModelPropGrid {
    void destroy();
};

void CDataModelPropGrid::destroy() {
    extern void __stdcall sub_4073F0(void*);
    extern void __stdcall sub_430DD0(void*);
    if (this != 0) {
        sub_4073F0((char*)this + 0x1dc);
    }
    sub_430DD0(this);
}
