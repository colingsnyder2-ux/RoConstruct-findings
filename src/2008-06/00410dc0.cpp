// from server: 100% by tester
// roc 2008-06 00410dc0  unit: CBrowserView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00410dc0
//
// 00410dc0  6aff                 push -1
// 00410dc2  681afa7b00           push 0x7bfa1a
// 00410dc7  64a100000000         mov eax, dword ptr fs:[0]
// 00410dcd  50                   push eax
// 00410dce  64892500000000       mov dword ptr fs:[0], esp
// 00410dd5  51                   push ecx
// 00410dd6  68d0020000           push 0x2d0
// 00410ddb  e840fb2800           call 0x6a0920
// 00410de0  83c404               add esp, 4
// 00410de3  890424               mov dword ptr [esp], eax
// 00410de6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00410dee  85c0                 test eax, eax
// 00410df0  7416                 je 0x410e08
// 00410df2  8bc8                 mov ecx, eax
// 00410df4  e847feffff           call 0x410c40
// 00410df9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00410dfd  64890d00000000       mov dword ptr fs:[0], ecx
// 00410e04  83c410               add esp, 0x10
// 00410e07  c3                   ret 
// 00410e08  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00410e0c  33c0                 xor eax, eax
// 00410e0e  64890d00000000       mov dword ptr fs:[0], ecx
// 00410e15  83c410               add esp, 0x10
// 00410e18  c3                   ret 

// 0044edf0  6aff                 push -1
// 0044edf2  681afa7b00           push 0x7bfa1a
// 0044edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044edfd  50                   push eax
// 0044edfe  64892500000000       mov dword ptr fs:[0], esp
// 0044ee05  51                   push ecx
// 0044ee06  6884010000           push 0x2d0
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
    char storage[0x2d0];
    CRobloxControlColorSelector();
};

CRobloxControlColorSelector* createColorSelector()
{
    return new CRobloxControlColorSelector;
}
