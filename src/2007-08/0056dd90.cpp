// from server: 40% by colin
// roc 2007-08 0056dd90  unit: RBX::VContentId::?$holder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056dd90
//
// 0056dd90  6aff                 push -1
// 0056dd92  68f8b57500           push 0x75b5f8
// 0056dd97  64a100000000         mov eax, dword ptr fs:[0]
// 0056dd9d  50                   push eax
// 0056dd9e  64892500000000       mov dword ptr fs:[0], esp
// 0056dda5  51                   push ecx
// 0056dda6  56                   push esi
// 0056dda7  8bf1                 mov esi, ecx
// 0056dda9  89742404             mov dword ptr [esp + 4], esi
// 0056ddad  8d4e04               lea ecx, [esi + 4]
// 0056ddb0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056ddb8  ff15ace67700         call dword ptr [0x77e6ac]
// 0056ddbe  f644241801           test byte ptr [esp + 0x18], 1
// 0056ddc3  c706bc707800         mov dword ptr [esi], 0x7870bc
// 0056ddc9  7409                 je 0x56ddd4
// 0056ddcb  56                   push esi
// 0056ddcc  e8911e0c00           call 0x62fc62
// 0056ddd1  83c404               add esp, 4
// 0056ddd4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056ddd8  8bc6                 mov eax, esi
// 0056ddda  5e                   pop esi
// 0056dddb  64890d00000000       mov dword ptr fs:[0], ecx
// 0056dde2  83c410               add esp, 0x10
// 0056dde5  c20400               ret 4

struct ContentId {
    void* vtable;
    char pad[4];
    void* str;
    ContentId* construct(char flag);
};

extern "C" void __stdcall sub_77E6AC();
extern "C" void __cdecl sub_62FC62(void* p);

ContentId* ContentId::construct(char flag)
{
    sub_77E6AC();
    this->vtable = (void*)0x7870BC;
    if (flag & 1) {
        sub_62FC62(this);
    }
    return this;
}
