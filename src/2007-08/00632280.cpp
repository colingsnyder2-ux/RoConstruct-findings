// from server: 25% by colin
// roc 2007-08 00632280  unit: CRobloxControlColorSelector  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632280
//
// 00632280  6aff                 push -1
// 00632282  68fa2f7600           push 0x762ffa
// 00632287  64a100000000         mov eax, dword ptr fs:[0]
// 0063228d  50                   push eax
// 0063228e  51                   push ecx
// 0063228f  a188518b00           mov eax, dword ptr [0x8b5188]
// 00632294  33c4                 xor eax, esp
// 00632296  50                   push eax
// 00632297  8d442408             lea eax, [esp + 8]
// 0063229b  64a300000000         mov dword ptr fs:[0], eax
// 006322a1  6a48                 push 0x48
// 006322a3  e886601000           call 0x73832e
// 006322a8  89442404             mov dword ptr [esp + 4], eax
// 006322ac  85c0                 test eax, eax
// 006322ae  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006322b6  7417                 je 0x6322cf
// 006322b8  8bc8                 mov ecx, eax
// 006322ba  e8211d0700           call 0x6a3fe0
// 006322bf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006322c3  64890d00000000       mov dword ptr fs:[0], ecx
// 006322ca  59                   pop ecx
// 006322cb  83c410               add esp, 0x10
// 006322ce  c3                   ret 
// 006322cf  33c0                 xor eax, eax
// 006322d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006322d5  64890d00000000       mov dword ptr fs:[0], ecx
// 006322dc  59                   pop ecx
// 006322dd  83c410               add esp, 0x10
// 006322e0  c3                   ret 

extern "C" void* __cdecl func_0073832e(unsigned int size);
extern "C" void __cdecl func_006a3fe0(void* p);

void* func_00632280()
{
    void* p = func_0073832e(0x48);
    if (p != 0) {
        func_006a3fe0(p);
    }
    return p;
}
