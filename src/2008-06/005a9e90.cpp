// from server: 100% by tester
// roc 2008-06 005a9e90  unit: RBX::VScriptContext::?$FactoryProduct  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9e90
//
// 005a9e90  a1d4b19500           mov eax, dword ptr [0x95b1d4]
// 005a9e95  56                   push esi
// 005a9e96  8b742408             mov esi, dword ptr [esp + 8]
// 005a9e9a  57                   push edi
// 005a9e9b  50                   push eax
// 005a9e9c  6a01                 push 1
// 005a9e9e  56                   push esi
// 005a9e9f  e80c770600           call 0x6115b0
// 005a9ea4  8b0dd4b19500         mov ecx, dword ptr [0x95b1d4]
// 005a9eaa  51                   push ecx
// 005a9eab  6a02                 push 2
// 005a9ead  56                   push esi
// 005a9eae  8bf8                 mov edi, eax
// 005a9eb0  e8fb760600           call 0x6115b0
// 005a9eb5  8b17                 mov edx, dword ptr [edi]
// 005a9eb7  33c9                 xor ecx, ecx
// 005a9eb9  3b10                 cmp edx, dword ptr [eax]
// 005a9ebb  0f94c1               sete cl
// 005a9ebe  51                   push ecx
// 005a9ebf  56                   push esi
// 005a9ec0  e82b850600           call 0x6123f0
// 005a9ec5  83c420               add esp, 0x20
// 005a9ec8  5f                   pop edi
// 005a9ec9  b801000000           mov eax, 1
// 005a9ece  5e                   pop esi
// 005a9ecf  c3                   ret 

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
