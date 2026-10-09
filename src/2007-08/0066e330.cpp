// from server: 25% by colin
// roc 2007-08 0066e330  unit: CXTPDockingPaneManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e330
//
// 0066e330  6aff                 push -1
// 0066e332  68fa2f7600           push 0x762ffa
// 0066e337  64a100000000         mov eax, dword ptr fs:[0]
// 0066e33d  50                   push eax
// 0066e33e  51                   push ecx
// 0066e33f  a188518b00           mov eax, dword ptr [0x8b5188]
// 0066e344  33c4                 xor eax, esp
// 0066e346  50                   push eax
// 0066e347  8d442408             lea eax, [esp + 8]
// 0066e34b  64a300000000         mov dword ptr fs:[0], eax
// 0066e351  6a2c                 push 0x2c
// 0066e353  e8d69f0c00           call 0x73832e
// 0066e358  89442404             mov dword ptr [esp + 4], eax
// 0066e35c  85c0                 test eax, eax
// 0066e35e  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0066e366  7417                 je 0x66e37f
// 0066e368  8bc8                 mov ecx, eax
// 0066e36a  e831f90600           call 0x6ddca0
// 0066e36f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066e373  64890d00000000       mov dword ptr fs:[0], ecx
// 0066e37a  59                   pop ecx
// 0066e37b  83c410               add esp, 0x10
// 0066e37e  c3                   ret 
// 0066e37f  33c0                 xor eax, eax
// 0066e381  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066e385  64890d00000000       mov dword ptr fs:[0], ecx
// 0066e38c  59                   pop ecx
// 0066e38d  83c410               add esp, 0x10
// 0066e390  c3                   ret 

struct CXTPDockingPaneManager {
    void construct();
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl func_006ddca0(CXTPDockingPaneManager* p);

CXTPDockingPaneManager* __cdecl func_0066e330()
{
    CXTPDockingPaneManager* p = (CXTPDockingPaneManager*)operator_new(0x2c);
    if (p != 0)
    {
        func_006ddca0(p);
    }
    return p;
}
