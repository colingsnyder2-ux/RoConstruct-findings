// roc 2007-08 00573920  unit: RBX::PartInstance  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573920
//
// 00573920  8bc1                 mov eax, ecx
// 00573922  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00573926  8b11                 mov edx, dword ptr [ecx]
// 00573928  8910                 mov dword ptr [eax], edx
// 0057392a  d94104               fld dword ptr [ecx + 4]
// 0057392d  d95804               fstp dword ptr [eax + 4]
// 00573930  53                   push ebx
// 00573931  d94108               fld dword ptr [ecx + 8]
// 00573934  56                   push esi
// 00573935  d95808               fstp dword ptr [eax + 8]
// 00573938  8d5838               lea ebx, [eax + 0x38]
// 0057393b  d9410c               fld dword ptr [ecx + 0xc]
// 0057393e  57                   push edi
// 0057393f  d9580c               fstp dword ptr [eax + 0xc]
// 00573942  8bfb                 mov edi, ebx
// 00573944  d94110               fld dword ptr [ecx + 0x10]
// 00573947  d95810               fstp dword ptr [eax + 0x10]
// 0057394a  d94114               fld dword ptr [ecx + 0x14]
// 0057394d  d95814               fstp dword ptr [eax + 0x14]
// 00573950  d94118               fld dword ptr [ecx + 0x18]
// 00573953  d95818               fstp dword ptr [eax + 0x18]
// 00573956  d9411c               fld dword ptr [ecx + 0x1c]
// 00573959  d9581c               fstp dword ptr [eax + 0x1c]
// 0057395c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0057395f  895020               mov dword ptr [eax + 0x20], edx
// 00573962  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00573965  895024               mov dword ptr [eax + 0x24], edx
// 00573968  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0057396b  895028               mov dword ptr [eax + 0x28], edx
// 0057396e  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00573971  89502c               mov dword ptr [eax + 0x2c], edx
// 00573974  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00573977  895030               mov dword ptr [eax + 0x30], edx
// 0057397a  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0057397d  895034               mov dword ptr [eax + 0x34], edx
// 00573980  8d5138               lea edx, [ecx + 0x38]
// 00573983  b909000000           mov ecx, 9
// 00573988  8bf2                 mov esi, edx
// 0057398a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0057398c  d94224               fld dword ptr [edx + 0x24]
// 0057398f  d95b24               fstp dword ptr [ebx + 0x24]
// 00573992  d94228               fld dword ptr [edx + 0x28]
// 00573995  d95b28               fstp dword ptr [ebx + 0x28]
// 00573998  d9422c               fld dword ptr [edx + 0x2c]
// 0057399b  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0057399e  5f                   pop edi
// 0057399f  5e                   pop esi
// 005739a0  5b                   pop ebx
// 005739a1  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??4Part@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
