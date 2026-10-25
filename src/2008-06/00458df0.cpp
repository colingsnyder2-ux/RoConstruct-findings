// from server: 100% by tester
// roc 2008-06 00458df0  unit: CRobloxReportView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458df0
//
// 00458df0  6aff                 push -1
// 00458df2  681afa7b00           push 0x7bfa1a
// 00458df7  64a100000000         mov eax, dword ptr fs:[0]
// 00458dfd  50                   push eax
// 00458dfe  64892500000000       mov dword ptr fs:[0], esp
// 00458e05  51                   push ecx
// 00458e06  68d8030000           push 0x3d8
// 00458e0b  e8107b2400           call 0x6a0920
// 00458e10  83c404               add esp, 4
// 00458e13  890424               mov dword ptr [esp], eax
// 00458e16  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00458e1e  85c0                 test eax, eax
// 00458e20  7416                 je 0x458e38
// 00458e22  8bc8                 mov ecx, eax
// 00458e24  e857feffff           call 0x458c80
// 00458e29  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00458e2d  64890d00000000       mov dword ptr fs:[0], ecx
// 00458e34  83c410               add esp, 0x10
// 00458e37  c3                   ret 
// 00458e38  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00458e3c  33c0                 xor eax, eax
// 00458e3e  64890d00000000       mov dword ptr fs:[0], ecx
// 00458e45  83c410               add esp, 0x10
// 00458e48  c3                   ret 

// 0044edf0  6aff                 push -1
// 0044edf2  681afa7b00           push 0x7bfa1a
// 0044edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044edfd  50                   push eax
// 0044edfe  64892500000000       mov dword ptr fs:[0], esp
// 0044ee05  51                   push ecx
// 0044ee06  6884010000           push 0x3d8
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
    char storage[0x3d8];
    CRobloxControlColorSelector();
};

CRobloxControlColorSelector* createColorSelector()
{
    return new CRobloxControlColorSelector;
}
