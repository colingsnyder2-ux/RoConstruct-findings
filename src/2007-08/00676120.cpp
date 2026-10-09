// from server: 28% by colin
// roc 2007-08 00676120  unit: CXTPGroupLine  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00676120
//
// 00676120  6aff                 push -1
// 00676122  6809187600           push 0x761809
// 00676127  64a100000000         mov eax, dword ptr fs:[0]
// 0067612d  50                   push eax
// 0067612e  51                   push ecx
// 0067612f  56                   push esi
// 00676130  a188518b00           mov eax, dword ptr [0x8b5188]
// 00676135  33c4                 xor eax, esp
// 00676137  50                   push eax
// 00676138  8d44240c             lea eax, [esp + 0xc]
// 0067613c  64a300000000         mov dword ptr fs:[0], eax
// 00676142  8bf1                 mov esi, ecx
// 00676144  89742408             mov dword ptr [esp + 8], esi
// 00676148  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067614b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00676153  e88ca0fbff           call 0x6301e4
// 00676158  8bce                 mov ecx, esi
// 0067615a  ff15bcdd7700         call dword ptr [0x77ddbc]
// 00676160  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00676164  64890d00000000       mov dword ptr fs:[0], ecx
// 0067616b  59                   pop ecx
// 0067616c  5e                   pop esi
// 0067616d  83c410               add esp, 0x10
// 00676170  c3                   ret 

struct CXTPGroupLine {
    void Destroy();
};

extern void __cdecl sub_6301E4(void*);
extern void (__thiscall* sub_77DDBC)(CXTPGroupLine*);

void CXTPGroupLine::Destroy()
{
    sub_6301E4(*(void**)((char*)this + 4));
    sub_77DDBC(this);
}
