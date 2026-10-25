// from server: 100% by tester
// roc 2008-06 00465160  unit: CScriptEditor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465160
//
// 00465160  6aff                 push -1
// 00465162  681afa7b00           push 0x7bfa1a
// 00465167  64a100000000         mov eax, dword ptr fs:[0]
// 0046516d  50                   push eax
// 0046516e  64892500000000       mov dword ptr fs:[0], esp
// 00465175  51                   push ecx
// 00465176  6860010000           push 0x160
// 0046517b  e8a0b72300           call 0x6a0920
// 00465180  83c404               add esp, 4
// 00465183  890424               mov dword ptr [esp], eax
// 00465186  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0046518e  85c0                 test eax, eax
// 00465190  7416                 je 0x4651a8
// 00465192  8bc8                 mov ecx, eax
// 00465194  e877feffff           call 0x465010
// 00465199  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046519d  64890d00000000       mov dword ptr fs:[0], ecx
// 004651a4  83c410               add esp, 0x10
// 004651a7  c3                   ret 
// 004651a8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004651ac  33c0                 xor eax, eax
// 004651ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004651b5  83c410               add esp, 0x10
// 004651b8  c3                   ret 

// 0044edf0  6aff                 push -1
// 0044edf2  681afa7b00           push 0x7bfa1a
// 0044edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0044edfd  50                   push eax
// 0044edfe  64892500000000       mov dword ptr fs:[0], esp
// 0044ee05  51                   push ecx
// 0044ee06  6884010000           push 0x160
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
    char storage[0x160];
    CRobloxControlColorSelector();
};

CRobloxControlColorSelector* createColorSelector()
{
    return new CRobloxControlColorSelector;
}
