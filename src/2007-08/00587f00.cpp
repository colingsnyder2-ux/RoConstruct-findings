// from server: 41% by colin
// roc 2007-08 00587f00  unit: RBX::SoundChannel  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587f00
//
// 00587f00  6aff                 push -1
// 00587f02  68bb5f7500           push 0x755fbb
// 00587f07  64a100000000         mov eax, dword ptr fs:[0]
// 00587f0d  50                   push eax
// 00587f0e  64892500000000       mov dword ptr fs:[0], esp
// 00587f15  51                   push ecx
// 00587f16  56                   push esi
// 00587f17  8bf1                 mov esi, ecx
// 00587f19  89742404             mov dword ptr [esp + 4], esi
// 00587f1d  8b06                 mov eax, dword ptr [esi]
// 00587f1f  85c0                 test eax, eax
// 00587f21  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00587f29  740c                 je 0x587f37
// 00587f2b  50                   push eax
// 00587f2c  e8d77c0a00           call 0x62fc08
// 00587f31  c70600000000         mov dword ptr [esi], 0
// 00587f37  8d4e0c               lea ecx, [esi + 0xc]
// 00587f3a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00587f42  ff15ace67700         call dword ptr [0x77e6ac]
// 00587f48  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00587f4c  5e                   pop esi
// 00587f4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00587f54  83c410               add esp, 0x10
// 00587f57  c3                   ret 

struct SoundChannel {
    void* field0;
    char pad[8];
    void* fieldC;
    void destroy();
};

extern "C" void __stdcall sub_62FC08(void*);
extern "C" void __stdcall sub_77E6AC(void*);

void SoundChannel::destroy()
{
    if (field0) {
        sub_62FC08(field0);
        field0 = 0;
    }
    sub_77E6AC(&fieldC);
}
