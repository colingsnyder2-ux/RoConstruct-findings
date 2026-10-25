// from server: 100% by tester
// roc 2008-06 00437740  unit: CStandardOutputView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437740
//
// 00437740  6aff                 push -1
// 00437742  681afa7b00           push 0x7bfa1a
// 00437747  64a100000000         mov eax, dword ptr fs:[0]
// 0043774d  50                   push eax
// 0043774e  64892500000000       mov dword ptr fs:[0], esp
// 00437755  51                   push ecx
// 00437756  684c010000           push 0x14c
// 0043775b  e8c0912600           call 0x6a0920
// 00437760  83c404               add esp, 4
// 00437763  890424               mov dword ptr [esp], eax
// 00437766  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0043776e  85c0                 test eax, eax
// 00437770  7416                 je 0x437788
// 00437772  8bc8                 mov ecx, eax
// 00437774  e827fcffff           call 0x4373a0
// 00437779  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043777d  64890d00000000       mov dword ptr fs:[0], ecx
// 00437784  83c410               add esp, 0x10
// 00437787  c3                   ret 
// 00437788  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043778c  33c0                 xor eax, eax
// 0043778e  64890d00000000       mov dword ptr fs:[0], ecx
// 00437795  83c410               add esp, 0x10
// 00437798  c3                   ret 

// 0044edf0  6aff                 push -1
// 0044edf2  681afa7b00           push 0x7bfa1a
// 0044edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044edfd  50                   push eax
// 0044edfe  64892500000000       mov dword ptr fs:[0], esp
// 0044ee05  51                   push ecx
// 0044ee06  6884010000           push 0x14c
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
    char storage[0x14c];
    CRobloxControlColorSelector();
};

CRobloxControlColorSelector* createColorSelector()
{
    return new CRobloxControlColorSelector;
}
