// from server: 100% by king_originala
// roc 2008-06 00643280  unit: RBX::ScriptMouseCommand  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643280
//
// 00643280  6aff                 push -1
// 00643282  683bf47b00           push 0x7bf43b
// 00643287  64a100000000         mov eax, dword ptr fs:[0]
// 0064328d  50                   push eax
// 0064328e  64892500000000       mov dword ptr fs:[0], esp
// 00643295  51                   push ecx
// 00643296  68cc000000           push 0xcc
// 0064329b  e880d60500           call 0x6a0920
// 006432a0  83c404               add esp, 4
// 006432a3  890424               mov dword ptr [esp], eax
// 006432a6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006432ae  85c0                 test eax, eax
// 006432b0  741b                 je 0x6432cd
// 006432b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006432b6  51                   push ecx
// 006432b7  8bc8                 mov ecx, eax
// 006432b9  e802380200           call 0x666ac0
// 006432be  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006432c2  64890d00000000       mov dword ptr fs:[0], ecx
// 006432c9  83c410               add esp, 0x10
// 006432cc  c3                   ret 
// 006432cd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006432d1  33c0                 xor eax, eax
// 006432d3  64890d00000000       mov dword ptr fs:[0], ecx
// 006432da  83c410               add esp, 0x10
// 006432dd  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Command {
    char storage[0xcc];
    Command(void*);
};

Command* __cdecl createCommand(void* argument)
{
    return new Command(argument);
}
