// from server: 100% by tester
// roc 2008-06 00452f00  unit: RBX::VVisit::?$FactoryProduct::Creator  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00452f00
//
// 00452f00  6aff                 push -1
// 00452f02  681afa7b00           push 0x7bfa1a
// 00452f07  64a100000000         mov eax, dword ptr fs:[0]
// 00452f0d  50                   push eax
// 00452f0e  64892500000000       mov dword ptr fs:[0], esp
// 00452f15  51                   push ecx
// 00452f16  6898000000           push 0x98
// 00452f1b  e800da2400           call 0x6a0920
// 00452f20  83c404               add esp, 4
// 00452f23  890424               mov dword ptr [esp], eax
// 00452f26  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00452f2e  85c0                 test eax, eax
// 00452f30  7416                 je 0x452f48
// 00452f32  8bc8                 mov ecx, eax
// 00452f34  e887ebffff           call 0x451ac0
// 00452f39  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00452f3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00452f44  83c410               add esp, 0x10
// 00452f47  c3                   ret 
// 00452f48  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00452f4c  33c0                 xor eax, eax
// 00452f4e  64890d00000000       mov dword ptr fs:[0], ecx
// 00452f55  83c410               add esp, 0x10
// 00452f58  c3                   ret 

// 0044edf0  6aff                 push -1
// 0044edf2  681afa7b00           push 0x7bfa1a
// 0044edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044edfd  50                   push eax
// 0044edfe  64892500000000       mov dword ptr fs:[0], esp
// 0044ee05  51                   push ecx
// 0044ee06  6884010000           push 0x98
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
    char storage[0x98];
    CRobloxControlColorSelector();
};

CRobloxControlColorSelector* createColorSelector()
{
    return new CRobloxControlColorSelector;
}
