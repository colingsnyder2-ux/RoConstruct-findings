// from server: 100% by tester
// roc 2008-06 00410e20  unit: CBrowserView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00410e20
//
// 00410e20  6aff                 push -1
// 00410e22  681afa7b00           push 0x7bfa1a
// 00410e27  64a100000000         mov eax, dword ptr fs:[0]
// 00410e2d  50                   push eax
// 00410e2e  64892500000000       mov dword ptr fs:[0], esp
// 00410e35  51                   push ecx
// 00410e36  68d0020000           push 0x2d0
// 00410e3b  e8e0fa2800           call 0x6a0920
// 00410e40  83c404               add esp, 4
// 00410e43  890424               mov dword ptr [esp], eax
// 00410e46  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00410e4e  85c0                 test eax, eax
// 00410e50  7416                 je 0x410e68
// 00410e52  8bc8                 mov ecx, eax
// 00410e54  e877feffff           call 0x410cd0
// 00410e59  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00410e5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00410e64  83c410               add esp, 0x10
// 00410e67  c3                   ret 
// 00410e68  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00410e6c  33c0                 xor eax, eax
// 00410e6e  64890d00000000       mov dword ptr fs:[0], ecx
// 00410e75  83c410               add esp, 0x10
// 00410e78  c3                   ret 

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
