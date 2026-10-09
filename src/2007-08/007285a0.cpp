// from server: 26% by colin
// roc 2007-08 007285a0  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007285a0
//
// 007285a0  6aff                 push -1
// 007285a2  6828ba7600           push 0x76ba28
// 007285a7  64a100000000         mov eax, dword ptr fs:[0]
// 007285ad  50                   push eax
// 007285ae  51                   push ecx
// 007285af  56                   push esi
// 007285b0  a188518b00           mov eax, dword ptr [0x8b5188]
// 007285b5  33c4                 xor eax, esp
// 007285b7  50                   push eax
// 007285b8  8d44240c             lea eax, [esp + 0xc]
// 007285bc  64a300000000         mov dword ptr fs:[0], eax
// 007285c2  8bf1                 mov esi, ecx
// 007285c4  89742408             mov dword ptr [esp + 8], esi
// 007285c8  807e1000             cmp byte ptr [esi + 0x10], 0
// 007285cc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007285d4  7505                 jne 0x7285db
// 007285d6  e875fdffff           call 0x728350
// 007285db  8bce                 mov ecx, esi
// 007285dd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007285e5  e876feffff           call 0x728460
// 007285ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007285ee  64890d00000000       mov dword ptr fs:[0], ecx
// 007285f5  59                   pop ecx
// 007285f6  5e                   pop esi
// 007285f7  83c410               add esp, 0x10
// 007285fa  c3                   ret 

struct Vsignal_base_impl_sp_counted_impl_p {
    char pad[0x10];
    bool flag;
    void destroy();
    void dispose();
    void release();
};

void Vsignal_base_impl_sp_counted_impl_p::release()
{
    if (!flag)
        destroy();
    dispose();
}
