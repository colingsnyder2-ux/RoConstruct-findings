// from server: 100% by colin
// roc 2008-06 005dd7d0  unit: RBX::Message  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd7d0
//
// 005dd7d0  8b0d0c258000         mov ecx, dword ptr [0x80250c]
// 005dd7d6  d901                 fld dword ptr [ecx]
// 005dd7d8  d9442404             fld dword ptr [esp + 4]
// 005dd7dc  dde1                 fucom st(1)
// 005dd7de  dfe0                 fnstsw ax
// 005dd7e0  ddd9                 fstp st(1)
// 005dd7e2  f6c444               test ah, 0x44
// 005dd7e5  7b31                 jnp 0x5dd818
// 005dd7e7  d901                 fld dword ptr [ecx]
// 005dd7e9  d9e0                 fchs 
// 005dd7eb  dde9                 fucomp st(1)
// 005dd7ed  dfe0                 fnstsw ax
// 005dd7ef  f6c444               test ah, 0x44
// 005dd7f2  7b24                 jnp 0x5dd818
// 005dd7f4  a11c258000           mov eax, dword ptr [0x80251c]
// 005dd7f9  d900                 fld dword ptr [eax]
// 005dd7fb  dde9                 fucomp st(1)
// 005dd7fd  dfe0                 fnstsw ax
// 005dd7ff  f6c444               test ah, 0x44
// 005dd802  7b14                 jnp 0x5dd818
// 005dd804  8b0d20258000         mov ecx, dword ptr [0x802520]
// 005dd80a  d901                 fld dword ptr [ecx]
// 005dd80c  dae9                 fucompp 
// 005dd80e  dfe0                 fnstsw ax
// 005dd810  f6c444               test ah, 0x44
// 005dd813  7b05                 jnp 0x5dd81a
// 005dd815  33c0                 xor eax, eax
// 005dd817  c3                   ret 
// 005dd818  ddd8                 fstp st(0)
// 005dd81a  b801000000           mov eax, 1
// 005dd81f  c3                   ret 

// from server: 79% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern float* _FInf;
extern float* _FNan;
extern float* _FSnan;

int f(float value)
{
    return value == *_FInf ||
           value == -*_FInf ||
           value == *_FNan ||
           value == *_FSnan;
}
