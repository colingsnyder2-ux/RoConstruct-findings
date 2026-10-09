// from server: 18% by colin
// roc 2007-08 0066d530  unit: CXTPControls  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066d530
//
// 0066d530  6aff                 push -1
// 0066d532  680b0e7600           push 0x760e0b
// 0066d537  64a100000000         mov eax, dword ptr fs:[0]
// 0066d53d  50                   push eax
// 0066d53e  51                   push ecx
// 0066d53f  56                   push esi
// 0066d540  a188518b00           mov eax, dword ptr [0x8b5188]
// 0066d545  33c4                 xor eax, esp
// 0066d547  50                   push eax
// 0066d548  8d44240c             lea eax, [esp + 0xc]
// 0066d54c  64a300000000         mov dword ptr fs:[0], eax
// 0066d552  8bf1                 mov esi, ecx
// 0066d554  89742408             mov dword ptr [esp + 8], esi
// 0066d558  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0066d560  e85bf1ffff           call 0x66c6c0
// 0066d565  8d4e04               lea ecx, [esi + 4]
// 0066d568  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0066d570  e8cbf0ffff           call 0x66c640
// 0066d575  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066d579  64890d00000000       mov dword ptr fs:[0], ecx
// 0066d580  59                   pop ecx
// 0066d581  5e                   pop esi
// 0066d582  83c410               add esp, 0x10
// 0066d585  c3                   ret 

struct CXTPControls
{
    void f();
};

extern "C" void __stdcall sub_66C6C0();
extern "C" void __stdcall sub_66C640();

void CXTPControls::f()
{
    sub_66C6C0();
    sub_66C640();
}
