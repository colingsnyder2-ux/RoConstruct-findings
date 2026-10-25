// from server: 100% by tester
// roc 2008-06 00463160  unit: CCommonDialog  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463160
//
// 00463160  6aff                 push -1
// 00463162  681afa7b00           push 0x7bfa1a
// 00463167  64a100000000         mov eax, dword ptr fs:[0]
// 0046316d  50                   push eax
// 0046316e  64892500000000       mov dword ptr fs:[0], esp
// 00463175  51                   push ecx
// 00463176  68ec000000           push 0xec
// 0046317b  e8a0d72300           call 0x6a0920
// 00463180  83c404               add esp, 4
// 00463183  890424               mov dword ptr [esp], eax
// 00463186  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0046318e  85c0                 test eax, eax
// 00463190  7416                 je 0x4631a8
// 00463192  8bc8                 mov ecx, eax
// 00463194  e867edffff           call 0x461f00
// 00463199  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046319d  64890d00000000       mov dword ptr fs:[0], ecx
// 004631a4  83c410               add esp, 0x10
// 004631a7  c3                   ret 
// 004631a8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004631ac  33c0                 xor eax, eax
// 004631ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004631b5  83c410               add esp, 0x10
// 004631b8  c3                   ret 

// 0044edf0  6aff                 push -1
// 0044edf2  681afa7b00           push 0x7bfa1a
// 0044edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044edfd  50                   push eax
// 0044edfe  64892500000000       mov dword ptr fs:[0], esp
// 0044ee05  51                   push ecx
// 0044ee06  6884010000           push 0xec
// 0044ee0b  e8101b2500           call 0x6a0920
// 0044ee10  83c404               add esp, 4
// 0044ee13  890424               mov dword ptr [esp], eax
// 0044ee16  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0044ee1e  85c0                 test eax, eax
// 0044ee20  7416                 je 0x44ee38
// 0044ee22  8bc8                 mov ecx, eax
// 0044ee24  e837feffff           call 0x44ec60
// 0044ee29  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044ee2d  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ee34  83c410               add esp, 0x10
// 0044ee37  c3                   ret 
// 0044ee38  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044ee3c  33c0                 xor eax, eax
// 0044ee3e  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ee45  83c410               add esp, 0x10
// 0044ee48  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct CRobloxControlColorSelector
{
    char storage[0xec];
    CRobloxControlColorSelector();
};

CRobloxControlColorSelector* createColorSelector()
{
    return new CRobloxControlColorSelector;
}
