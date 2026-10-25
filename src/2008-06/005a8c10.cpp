// from server: 100% by king_originala
// roc 2008-06 005a8c10  unit: RBX::ScriptContext  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8c10
//
// 005a8c10  a1dcb19500           mov eax, dword ptr [0x95b1dc]
// 005a8c15  56                   push esi
// 005a8c16  8b742408             mov esi, dword ptr [esp + 8]
// 005a8c1a  57                   push edi
// 005a8c1b  50                   push eax
// 005a8c1c  6a01                 push 1
// 005a8c1e  56                   push esi
// 005a8c1f  e88c890600           call 0x6115b0
// 005a8c24  8b0ddcb19500         mov ecx, dword ptr [0x95b1dc]
// 005a8c2a  51                   push ecx
// 005a8c2b  6a02                 push 2
// 005a8c2d  56                   push esi
// 005a8c2e  8bf8                 mov edi, eax
// 005a8c30  e87b890600           call 0x6115b0
// 005a8c35  8b17                 mov edx, dword ptr [edi]
// 005a8c37  33c9                 xor ecx, ecx
// 005a8c39  3b10                 cmp edx, dword ptr [eax]
// 005a8c3b  0f94c1               sete cl
// 005a8c3e  51                   push ecx
// 005a8c3f  56                   push esi
// 005a8c40  e8ab970600           call 0x6123f0
// 005a8c45  83c420               add esp, 0x20
// 005a8c48  5f                   pop edi
// 005a8c49  b801000000           mov eax, 1
// 005a8c4e  5e                   pop esi
// 005a8c4f  c3                   ret 

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
