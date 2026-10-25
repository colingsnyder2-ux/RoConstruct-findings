// from server: 100% by tester
// roc 2008-06 00411ef0  unit: ChatEnter  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411ef0
//
// 00411ef0  6aff                 push -1
// 00411ef2  681afa7b00           push 0x7bfa1a
// 00411ef7  64a100000000         mov eax, dword ptr fs:[0]
// 00411efd  50                   push eax
// 00411efe  64892500000000       mov dword ptr fs:[0], esp
// 00411f05  51                   push ecx
// 00411f06  68a8000000           push 0xa8
// 00411f0b  e810ea2800           call 0x6a0920
// 00411f10  83c404               add esp, 4
// 00411f13  890424               mov dword ptr [esp], eax
// 00411f16  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00411f1e  85c0                 test eax, eax
// 00411f20  7416                 je 0x411f38
// 00411f22  8bc8                 mov ecx, eax
// 00411f24  e8b7fcffff           call 0x411be0
// 00411f29  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00411f2d  64890d00000000       mov dword ptr fs:[0], ecx
// 00411f34  83c410               add esp, 0x10
// 00411f37  c3                   ret 
// 00411f38  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00411f3c  33c0                 xor eax, eax
// 00411f3e  64890d00000000       mov dword ptr fs:[0], ecx
// 00411f45  83c410               add esp, 0x10
// 00411f48  c3                   ret 

// 0044edf0  6aff                 push -1
// 0044edf2  681afa7b00           push 0x7bfa1a
// 0044edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044edfd  50                   push eax
// 0044edfe  64892500000000       mov dword ptr fs:[0], esp
// 0044ee05  51                   push ecx
// 0044ee06  6884010000           push 0xa8
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
    char storage[0xa8];
    CRobloxControlColorSelector();
};

CRobloxControlColorSelector* createColorSelector()
{
    return new CRobloxControlColorSelector;
}
