// from server: 38% by colin
// roc 2007-08 004b3b20  unit: RBX::Network::VMarker::?$SignalDesc  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b3b20
//
// 004b3b20  6aff                 push -1
// 004b3b22  6868ad7400           push 0x74ad68
// 004b3b27  64a100000000         mov eax, dword ptr fs:[0]
// 004b3b2d  50                   push eax
// 004b3b2e  51                   push ecx
// 004b3b2f  56                   push esi
// 004b3b30  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b3b35  33c4                 xor eax, esp
// 004b3b37  50                   push eax
// 004b3b38  8d44240c             lea eax, [esp + 0xc]
// 004b3b3c  64a300000000         mov dword ptr fs:[0], eax
// 004b3b42  8bf1                 mov esi, ecx
// 004b3b44  89742408             mov dword ptr [esp + 8], esi
// 004b3b48  33c0                 xor eax, eax
// 004b3b4a  894604               mov dword ptr [esi + 4], eax
// 004b3b4d  c706f4dd7900         mov dword ptr [esi], 0x79ddf4
// 004b3b53  89442414             mov dword ptr [esp + 0x14], eax
// 004b3b57  c60539258c0001       mov byte ptr [0x8c2539], 1
// 004b3b5e  e89d48f6ff           call 0x418400
// 004b3b63  894608               mov dword ptr [esi + 8], eax
// 004b3b66  8bc6                 mov eax, esi
// 004b3b68  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b3b6c  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3b73  59                   pop ecx
// 004b3b74  5e                   pop esi
// 004b3b75  83c410               add esp, 0x10
// 004b3b78  c3                   ret 

struct VMarker_SignalDesc
{
    void* vtable;
    int field_4;
    int field_8;
    VMarker_SignalDesc();
};

extern "C" int __cdecl sub_418400();

VMarker_SignalDesc::VMarker_SignalDesc()
{
    field_4 = 0;
    vtable = (void*)0x79ddf4;
    *(volatile char*)0x8c2539 = 1;
    field_8 = sub_418400();
}
