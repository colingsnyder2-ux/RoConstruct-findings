// from server: 100% by tester
// roc 2008-06 00433950  unit: CClassTreeView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433950
//
// 00433950  6aff                 push -1
// 00433952  681afa7b00           push 0x7bfa1a
// 00433957  64a100000000         mov eax, dword ptr fs:[0]
// 0043395d  50                   push eax
// 0043395e  64892500000000       mov dword ptr fs:[0], esp
// 00433965  51                   push ecx
// 00433966  6888020000           push 0x288
// 0043396b  e8b0cf2600           call 0x6a0920
// 00433970  83c404               add esp, 4
// 00433973  890424               mov dword ptr [esp], eax
// 00433976  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0043397e  85c0                 test eax, eax
// 00433980  7416                 je 0x433998
// 00433982  8bc8                 mov ecx, eax
// 00433984  e897faffff           call 0x433420
// 00433989  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043398d  64890d00000000       mov dword ptr fs:[0], ecx
// 00433994  83c410               add esp, 0x10
// 00433997  c3                   ret 
// 00433998  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043399c  33c0                 xor eax, eax
// 0043399e  64890d00000000       mov dword ptr fs:[0], ecx
// 004339a5  83c410               add esp, 0x10
// 004339a8  c3                   ret 

// 0044edf0  6aff                 push -1
// 0044edf2  681afa7b00           push 0x7bfa1a
// 0044edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044edfd  50                   push eax
// 0044edfe  64892500000000       mov dword ptr fs:[0], esp
// 0044ee05  51                   push ecx
// 0044ee06  6884010000           push 0x288
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
    char storage[0x288];
    CRobloxControlColorSelector();
};

CRobloxControlColorSelector* createColorSelector()
{
    return new CRobloxControlColorSelector;
}
