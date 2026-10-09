// from server: 39% by colin
// roc 2007-08 00493930  unit: RBX::Network::VPlayers::?$Notifier  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493930
//
// 00493930  6aff                 push -1
// 00493932  682c7f7400           push 0x747f2c
// 00493937  64a100000000         mov eax, dword ptr fs:[0]
// 0049393d  50                   push eax
// 0049393e  51                   push ecx
// 0049393f  56                   push esi
// 00493940  57                   push edi
// 00493941  a188518b00           mov eax, dword ptr [0x8b5188]
// 00493946  33c4                 xor eax, esp
// 00493948  50                   push eax
// 00493949  8d442410             lea eax, [esp + 0x10]
// 0049394d  64a300000000         mov dword ptr fs:[0], eax
// 00493953  8bf1                 mov esi, ecx
// 00493955  8974240c             mov dword ptr [esp + 0xc], esi
// 00493959  8d4e08               lea ecx, [esi + 8]
// 0049395c  ff15a4e67700         call dword ptr [0x77e6a4]
// 00493962  8d7e24               lea edi, [esi + 0x24]
// 00493965  8bcf                 mov ecx, edi
// 00493967  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049396f  e80c230b00           call 0x545c80
// 00493974  894704               mov dword ptr [edi + 4], eax
// 00493977  c7470800000000       mov dword ptr [edi + 8], 0
// 0049397e  8bc6                 mov eax, esi
// 00493980  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00493984  64890d00000000       mov dword ptr fs:[0], ecx
// 0049398b  59                   pop ecx
// 0049398c  5f                   pop edi
// 0049398d  5e                   pop esi
// 0049398e  83c410               add esp, 0x10
// 00493991  c3                   ret 

struct Notifier {
    char pad0[8];
    void* field8;
    char pad12[0x24 - 12];
    void* field24;
    void* field28;
    void* field2c;
    Notifier();
};

extern "C" void __stdcall sub_77E6A4(void*);
extern "C" void* __fastcall sub_545C80(void*);

Notifier::Notifier() {
    sub_77E6A4(&field8);
    field24 = 0;
    field28 = 0;
    field2c = 0;
    void* p = sub_545C80(&field24);
    field28 = p;
    field2c = 0;
}
