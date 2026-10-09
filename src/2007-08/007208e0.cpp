// from server: 28% by colin
// roc 2007-08 007208e0  unit: CXTButtonThemeFactory  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007208e0
//
// 007208e0  6aff                 push -1
// 007208e2  6878b47600           push 0x76b478
// 007208e7  64a100000000         mov eax, dword ptr fs:[0]
// 007208ed  50                   push eax
// 007208ee  51                   push ecx
// 007208ef  56                   push esi
// 007208f0  a188518b00           mov eax, dword ptr [0x8b5188]
// 007208f5  33c4                 xor eax, esp
// 007208f7  50                   push eax
// 007208f8  8d44240c             lea eax, [esp + 0xc]
// 007208fc  64a300000000         mov dword ptr fs:[0], eax
// 00720902  8bf1                 mov esi, ecx
// 00720904  89742408             mov dword ptr [esp + 8], esi
// 00720908  c7062c237e00         mov dword ptr [esi], 0x7e232c
// 0072090e  8d4e74               lea ecx, [esi + 0x74]
// 00720911  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00720919  e842e8f7ff           call 0x69f160
// 0072091e  8bce                 mov ecx, esi
// 00720920  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00720928  e84310f7ff           call 0x691970
// 0072092d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00720931  64890d00000000       mov dword ptr fs:[0], ecx
// 00720938  59                   pop ecx
// 00720939  5e                   pop esi
// 0072093a  83c410               add esp, 0x10
// 0072093d  c3                   ret 

struct CXTButtonThemeFactory {
    void* vtable;
    char pad[0x70];
    void* field74;
    void destroy();
};

extern "C" void __stdcall sub_69F160(void*);
extern "C" void __stdcall sub_691970(void*);

void CXTButtonThemeFactory::destroy()
{
    this->vtable = (void*)0x7E232C;
    sub_69F160(&this->field74);
    sub_691970(this);
}
