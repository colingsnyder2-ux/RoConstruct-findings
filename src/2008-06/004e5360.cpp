// from server: 100% by colin
// roc 2008-06 004e5360  unit: seg_004e0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5360
//
// 004e5360  6aff                 push -1
// 004e5362  683bf47b00           push 0x7bf43b
// 004e5367  64a100000000         mov eax, dword ptr fs:[0]
// 004e536d  50                   push eax
// 004e536e  64892500000000       mov dword ptr fs:[0], esp
// 004e5375  51                   push ecx
// 004e5376  6a30                 push 0x30
// 004e5378  e8a3b51b00           call 0x6a0920
// 004e537d  83c404               add esp, 4
// 004e5380  890424               mov dword ptr [esp], eax
// 004e5383  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e538b  85c0                 test eax, eax
// 004e538d  741b                 je 0x4e53aa
// 004e538f  8bc8                 mov ecx, eax
// 004e5391  e86affffff           call 0x4e5300
// 004e5396  a354279700           mov dword ptr [0x972754], eax
// 004e539b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e539f  64890d00000000       mov dword ptr fs:[0], ecx
// 004e53a6  83c410               add esp, 0x10
// 004e53a9  c3                   ret 
// 004e53aa  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e53ae  33c0                 xor eax, eax
// 004e53b0  a354279700           mov dword ptr [0x972754], eax
// 004e53b5  64890d00000000       mov dword ptr fs:[0], ecx
// 004e53bc  83c410               add esp, 0x10
// 004e53bf  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S {
    char storage[48];
    S();
};

extern S* globalInstance;

void __cdecl initializeInstance()
{
    globalInstance = new S;
}
