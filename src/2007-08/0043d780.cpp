// from server: 39% by colin
// roc 2007-08 0043d780  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043d780
//
// 0043d780  6aff                 push -1
// 0043d782  68c9e67300           push 0x73e6c9
// 0043d787  64a100000000         mov eax, dword ptr fs:[0]
// 0043d78d  50                   push eax
// 0043d78e  51                   push ecx
// 0043d78f  56                   push esi
// 0043d790  a188518b00           mov eax, dword ptr [0x8b5188]
// 0043d795  33c4                 xor eax, esp
// 0043d797  50                   push eax
// 0043d798  8d44240c             lea eax, [esp + 0xc]
// 0043d79c  64a300000000         mov dword ptr fs:[0], eax
// 0043d7a2  8bf1                 mov esi, ecx
// 0043d7a4  89742408             mov dword ptr [esp + 8], esi
// 0043d7a8  ff15a4e67700         call dword ptr [0x77e6a4]
// 0043d7ae  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0043d7b6  e875f30e00           call 0x52cb30
// 0043d7bb  89461c               mov dword ptr [esi + 0x1c], eax
// 0043d7be  8bc6                 mov eax, esi
// 0043d7c0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043d7c4  64890d00000000       mov dword ptr fs:[0], ecx
// 0043d7cb  59                   pop ecx
// 0043d7cc  5e                   pop esi
// 0043d7cd  83c410               add esp, 0x10
// 0043d7d0  c3                   ret 

struct Descriptor {
    Descriptor();
    char pad[0x1c];
};

struct Item : Descriptor {
    void* field_1c;
    Item();
};

extern "C" void __stdcall sub_52cb30();

Item::Item()
{
    field_1c = 0;
    sub_52cb30();
    field_1c = (void*)0;
}
