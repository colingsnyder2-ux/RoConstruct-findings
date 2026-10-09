// from server: 46% by colin
// roc 2007-08 00726380  unit: boost::thread_resource_error  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00726380
//
// 00726380  6aff                 push -1
// 00726382  6888b67600           push 0x76b688
// 00726387  64a100000000         mov eax, dword ptr fs:[0]
// 0072638d  50                   push eax
// 0072638e  51                   push ecx
// 0072638f  56                   push esi
// 00726390  a188518b00           mov eax, dword ptr [0x8b5188]
// 00726395  33c4                 xor eax, esp
// 00726397  50                   push eax
// 00726398  8d44240c             lea eax, [esp + 0xc]
// 0072639c  64a300000000         mov dword ptr fs:[0], eax
// 007263a2  8bf1                 mov esi, ecx
// 007263a4  89742408             mov dword ptr [esp + 8], esi
// 007263a8  e853f3ffff           call 0x725700
// 007263ad  8d4e08               lea ecx, [esi + 8]
// 007263b0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007263b8  e833040000           call 0x7267f0
// 007263bd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007263c1  894620               mov dword ptr [esi + 0x20], eax
// 007263c4  c6462400             mov byte ptr [esi + 0x24], 0
// 007263c8  8bc6                 mov eax, esi
// 007263ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007263ce  64890d00000000       mov dword ptr fs:[0], ecx
// 007263d5  59                   pop ecx
// 007263d6  5e                   pop esi
// 007263d7  83c410               add esp, 0x10
// 007263da  c20400               ret 4

struct ThreadResourceError {
    char pad0[8];
    int field8;
    char padC[0x14];
    int field20;
    char field24;
    ThreadResourceError(int);
};

extern "C" void __stdcall sub_725700();
extern "C" void __stdcall sub_7267F0();

ThreadResourceError::ThreadResourceError(int arg) {
    sub_725700();
    field8 = 0;
    sub_7267F0();
    field20 = arg;
    field24 = 0;
}
