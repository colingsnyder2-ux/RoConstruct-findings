// from server: 30% by colin
// roc 2007-08 0069ae30  unit: CXTPPropertyGridView  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ae30
//
// 0069ae30  6aff                 push -1
// 0069ae32  6818257400           push 0x742518
// 0069ae37  64a100000000         mov eax, dword ptr fs:[0]
// 0069ae3d  50                   push eax
// 0069ae3e  51                   push ecx
// 0069ae3f  56                   push esi
// 0069ae40  a188518b00           mov eax, dword ptr [0x8b5188]
// 0069ae45  33c4                 xor eax, esp
// 0069ae47  50                   push eax
// 0069ae48  8d44240c             lea eax, [esp + 0xc]
// 0069ae4c  64a300000000         mov dword ptr fs:[0], eax
// 0069ae52  8bf1                 mov esi, ecx
// 0069ae54  89742408             mov dword ptr [esp + 8], esi
// 0069ae58  8d4e58               lea ecx, [esi + 0x58]
// 0069ae5b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0069ae63  c701084a7900         mov dword ptr [ecx], 0x794a08
// 0069ae69  e81248d8ff           call 0x41f680
// 0069ae6e  8bce                 mov ecx, esi
// 0069ae70  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0069ae78  e86357f9ff           call 0x6305e0
// 0069ae7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069ae81  64890d00000000       mov dword ptr fs:[0], ecx
// 0069ae88  59                   pop ecx
// 0069ae89  5e                   pop esi
// 0069ae8a  83c410               add esp, 0x10
// 0069ae8d  c3                   ret 

struct CXTPPropertyGridView {
    char pad[0x58];
    void* field_58;
    void destroy();
};

extern "C" void __stdcall sub_41F680(void*);
extern "C" void __stdcall sub_6305E0(void*);

void CXTPPropertyGridView::destroy()
{
    field_58 = (void*)0x794A08;
    sub_41F680((char*)this + 0x58);
    sub_6305E0(this);
}
