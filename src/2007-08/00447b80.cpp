// from server: 31% by colin
// roc 2007-08 00447b80  unit: CRenderSettings  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00447b80
//
// 00447b80  6aff                 push -1
// 00447b82  6858f97300           push 0x73f958
// 00447b87  64a100000000         mov eax, dword ptr fs:[0]
// 00447b8d  50                   push eax
// 00447b8e  51                   push ecx
// 00447b8f  56                   push esi
// 00447b90  a188518b00           mov eax, dword ptr [0x8b5188]
// 00447b95  33c4                 xor eax, esp
// 00447b97  50                   push eax
// 00447b98  8d44240c             lea eax, [esp + 0xc]
// 00447b9c  64a300000000         mov dword ptr fs:[0], eax
// 00447ba2  8bf1                 mov esi, ecx
// 00447ba4  89742408             mov dword ptr [esp + 8], esi
// 00447ba8  8d8efc000000         lea ecx, [esi + 0xfc]
// 00447bae  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00447bb6  ff15ace67700         call dword ptr [0x77e6ac]
// 00447bbc  8bce                 mov ecx, esi
// 00447bbe  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00447bc6  e835dbffff           call 0x445700
// 00447bcb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00447bcf  64890d00000000       mov dword ptr fs:[0], ecx
// 00447bd6  59                   pop ecx
// 00447bd7  5e                   pop esi
// 00447bd8  83c410               add esp, 0x10
// 00447bdb  c3                   ret 

struct CRenderSettings {
    void sub_445700();
    void destroy();
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_73F958();

void CRenderSettings::destroy()
{
    sub_77E6AC((char*)this + 0xfc);
    sub_445700();
}
