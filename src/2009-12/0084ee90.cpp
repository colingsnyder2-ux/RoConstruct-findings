// roc 2009-12 0084ee90  unit: CXTPPropertyGrid  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084ee90
//
// 0084ee90  83ec10               sub esp, 0x10
// 0084ee93  53                   push ebx
// 0084ee94  55                   push ebp
// 0084ee95  8b6970               mov ebp, dword ptr [ecx + 0x70]
// 0084ee98  56                   push esi
// 0084ee99  57                   push edi
// 0084ee9a  6800e80000           push 0xe800
// 0084ee9f  83ec10               sub esp, 0x10
// 0084eea2  8bc4                 mov eax, esp
// 0084eea4  33d2                 xor edx, edx
// 0084eea6  8910                 mov dword ptr [eax], edx
// 0084eea8  33db                 xor ebx, ebx
// 0084eeaa  6800208050           push 0x50802000
// 0084eeaf  8d7170               lea esi, [ecx + 0x70]
// 0084eeb2  33ff                 xor edi, edi
// 0084eeb4  897804               mov dword ptr [eax + 4], edi
// 0084eeb7  895808               mov dword ptr [eax + 8], ebx
// 0084eeba  8bd3                 mov edx, ebx
// 0084eebc  6800880000           push 0x8800
// 0084eec1  89500c               mov dword ptr [eax + 0xc], edx
// 0084eec4  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 0084eeca  51                   push ecx
// 0084eecb  8bce                 mov ecx, esi
// 0084eecd  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0084eed1  ffd0                 call eax
// 0084eed3  e8c8f90100           call 0x86e8a0
// 0084eed8  8b10                 mov edx, dword ptr [eax]
// 0084eeda  681c250000           push 0x251c
// 0084eedf  8bc8                 mov ecx, eax
// 0084eee1  8b4210               mov eax, dword ptr [edx + 0x10]
// 0084eee4  56                   push esi
// 0084eee5  ffd0                 call eax
// 0084eee7  5f                   pop edi
// 0084eee8  5e                   pop esi
// 0084eee9  5d                   pop ebp
// 0084eeea  5b                   pop ebx
// 0084eeeb  83c410               add esp, 0x10
// 0084eeee  c3                   ret 
// copied from an identical function in another client (function ?CreateToolbar@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp