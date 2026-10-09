// from server: 28% by colin
// roc 2007-08 00696830  unit: CXTPToolTipContext::COffice2007ToolTip  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696830
//
// 00696830  6aff                 push -1
// 00696832  68d8347600           push 0x7634d8
// 00696837  64a100000000         mov eax, dword ptr fs:[0]
// 0069683d  50                   push eax
// 0069683e  51                   push ecx
// 0069683f  56                   push esi
// 00696840  a188518b00           mov eax, dword ptr [0x8b5188]
// 00696845  33c4                 xor eax, esp
// 00696847  50                   push eax
// 00696848  8d44240c             lea eax, [esp + 0xc]
// 0069684c  64a300000000         mov dword ptr fs:[0], eax
// 00696852  8bf1                 mov esi, ecx
// 00696854  89742408             mov dword ptr [esp + 8], esi
// 00696858  8d8e30010000         lea ecx, [esi + 0x130]
// 0069685e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00696866  e835840700           call 0x70eca0
// 0069686b  8bce                 mov ecx, esi
// 0069686d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00696875  e8a6fbffff           call 0x696420
// 0069687a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069687e  64890d00000000       mov dword ptr fs:[0], ecx
// 00696885  59                   pop ecx
// 00696886  5e                   pop esi
// 00696887  83c410               add esp, 0x10
// 0069688a  c3                   ret 

struct CXTPToolTipContext_COffice2007ToolTip {
    void f();
};

extern "C" void __stdcall sub_70ECA0(void*);
extern "C" void __stdcall sub_696420(void*);

void CXTPToolTipContext_COffice2007ToolTip::f()
{
    sub_70ECA0((char*)this + 0x130);
    sub_696420(this);
}
