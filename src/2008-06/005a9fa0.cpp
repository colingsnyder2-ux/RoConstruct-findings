// from server: 100% by tester
// roc 2008-06 005a9fa0  unit: RBX::VScriptContext::?$FactoryProduct  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9fa0
//
// 005a9fa0  a1d8b19500           mov eax, dword ptr [0x95b1d8]
// 005a9fa5  56                   push esi
// 005a9fa6  8b742408             mov esi, dword ptr [esp + 8]
// 005a9faa  57                   push edi
// 005a9fab  50                   push eax
// 005a9fac  6a01                 push 1
// 005a9fae  56                   push esi
// 005a9faf  e8fc750600           call 0x6115b0
// 005a9fb4  8b0dd8b19500         mov ecx, dword ptr [0x95b1d8]
// 005a9fba  51                   push ecx
// 005a9fbb  6a02                 push 2
// 005a9fbd  56                   push esi
// 005a9fbe  8bf8                 mov edi, eax
// 005a9fc0  e8eb750600           call 0x6115b0
// 005a9fc5  8b17                 mov edx, dword ptr [edi]
// 005a9fc7  33c9                 xor ecx, ecx
// 005a9fc9  3b10                 cmp edx, dword ptr [eax]
// 005a9fcb  0f94c1               sete cl
// 005a9fce  51                   push ecx
// 005a9fcf  56                   push esi
// 005a9fd0  e81b840600           call 0x6123f0
// 005a9fd5  83c420               add esp, 0x20
// 005a9fd8  5f                   pop edi
// 005a9fd9  b801000000           mov eax, 1
// 005a9fde  5e                   pop esi
// 005a9fdf  c3                   ret 

extern int typeTag;
extern "C" unsigned int* __cdecl getValue(void*, int, int);
extern "C" void __cdecl pushBoolean(void*, int);

int __cdecl compareValues(void* state)
{
    unsigned int* first = getValue(state, 1, typeTag);
    unsigned int* second = getValue(state, 2, typeTag);
    pushBoolean(state, *first == *second);
    return 1;
}
