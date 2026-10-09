// from server: 41% by colin
// roc 2007-08 004b8810  unit: RakPeerInterface  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8810
//
// 004b8810  6aff                 push -1
// 004b8812  68abb57400           push 0x74b5ab
// 004b8817  64a100000000         mov eax, dword ptr fs:[0]
// 004b881d  50                   push eax
// 004b881e  51                   push ecx
// 004b881f  56                   push esi
// 004b8820  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b8825  33c4                 xor eax, esp
// 004b8827  50                   push eax
// 004b8828  8d44240c             lea eax, [esp + 0xc]
// 004b882c  64a300000000         mov dword ptr fs:[0], eax
// 004b8832  8bf1                 mov esi, ecx
// 004b8834  89742408             mov dword ptr [esp + 8], esi
// 004b8838  8d4e18               lea ecx, [esi + 0x18]
// 004b883b  e8b0000100           call 0x4c88f0
// 004b8840  8d8e28080000         lea ecx, [esi + 0x828]
// 004b8846  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004b884e  e86d160100           call 0x4c9ec0
// 004b8853  8bc6                 mov eax, esi
// 004b8855  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b8859  64890d00000000       mov dword ptr fs:[0], ecx
// 004b8860  59                   pop ecx
// 004b8861  5e                   pop esi
// 004b8862  83c410               add esp, 0x10
// 004b8865  c3                   ret 

struct RakPeerInterface {
    char pad0[0x18];
    char field_18;
    char pad1[0x828 - 0x19];
    char field_828;
};

extern "C" void __fastcall sub_004c88f0(void*);
extern "C" void __fastcall sub_004c9ec0(void*);

RakPeerInterface* __fastcall func_004b8810(RakPeerInterface* self)
{
    sub_004c88f0(&self->field_18);
    sub_004c9ec0(&self->field_828);
    return self;
}
