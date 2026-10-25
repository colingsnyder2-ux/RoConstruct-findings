// from server: 100% by king_originala
// roc 2008-06 005a9940  unit: RBX::VScriptContext::?$FactoryProduct  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9940
//
// 005a9940  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005a9945  56                   push esi
// 005a9946  57                   push edi
// 005a9947  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a994b  50                   push eax
// 005a994c  6a02                 push 2
// 005a994e  57                   push edi
// 005a994f  e85c7c0600           call 0x6115b0
// 005a9954  8b0dbcb19500         mov ecx, dword ptr [0x95b1bc]
// 005a995a  51                   push ecx
// 005a995b  6a01                 push 1
// 005a995d  57                   push edi
// 005a995e  8bf0                 mov esi, eax
// 005a9960  e84b7c0600           call 0x6115b0
// 005a9965  d906                 fld dword ptr [esi]
// 005a9967  8bc8                 mov ecx, eax
// 005a9969  d819                 fcomp dword ptr [ecx]
// 005a996b  83c418               add esp, 0x18
// 005a996e  dfe0                 fnstsw ax
// 005a9970  f6c444               test ah, 0x44
// 005a9973  7a21                 jp 0x5a9996
// 005a9975  d94604               fld dword ptr [esi + 4]
// 005a9978  d85904               fcomp dword ptr [ecx + 4]
// 005a997b  dfe0                 fnstsw ax
// 005a997d  f6c444               test ah, 0x44
// 005a9980  7a14                 jp 0x5a9996
// 005a9982  d94608               fld dword ptr [esi + 8]
// 005a9985  d85908               fcomp dword ptr [ecx + 8]
// 005a9988  dfe0                 fnstsw ax
// 005a998a  f6c444               test ah, 0x44
// 005a998d  7a07                 jp 0x5a9996
// 005a998f  b801000000           mov eax, 1
// 005a9994  eb02                 jmp 0x5a9998
// 005a9996  33c0                 xor eax, eax
// 005a9998  0fb6d0               movzx edx, al
// 005a999b  52                   push edx
// 005a999c  57                   push edi
// 005a999d  e84e8a0600           call 0x6123f0
// 005a99a2  83c408               add esp, 8
// 005a99a5  5f                   pop edi
// 005a99a6  b801000000           mov eax, 1
// 005a99ab  5e                   pop esi
// 005a99ac  c3                   ret 

extern const char* typeName;

extern "C" void* __cdecl checkUserdata(void* state, int index, const char* name);
extern "C" void __cdecl pushBoolean(void* state, int value);

#pragma float_control(precise, off, push)

int __cdecl compareValues(void* state)
{
    const float* second = static_cast<const float*>(checkUserdata(state, 2, typeName));
    const float* first = static_cast<const float*>(checkUserdata(state, 1, typeName));

    int equal = first[0] == second[0]
             && first[1] == second[1]
             && first[2] == second[2] ? 1 : 0;

    pushBoolean(state, static_cast<unsigned char>(equal));
    return 1;
}

#pragma float_control(pop)
