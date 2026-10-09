// from server: 29% by colin
// roc 2007-08 004983f0  unit: RBX::Network::Players::Plugin  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004983f0
//
// 004983f0  6aff                 push -1
// 004983f2  6828887400           push 0x748828
// 004983f7  64a100000000         mov eax, dword ptr fs:[0]
// 004983fd  50                   push eax
// 004983fe  51                   push ecx
// 004983ff  56                   push esi
// 00498400  a188518b00           mov eax, dword ptr [0x8b5188]
// 00498405  33c4                 xor eax, esp
// 00498407  50                   push eax
// 00498408  8d44240c             lea eax, [esp + 0xc]
// 0049840c  64a300000000         mov dword ptr fs:[0], eax
// 00498412  8bf1                 mov esi, ecx
// 00498414  89742408             mov dword ptr [esp + 8], esi
// 00498418  8d4e14               lea ecx, [esi + 0x14]
// 0049841b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00498423  e8f8d22800           call 0x725720
// 00498428  8bce                 mov ecx, esi
// 0049842a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00498432  e889e4ffff           call 0x4968c0
// 00498437  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049843b  64890d00000000       mov dword ptr fs:[0], ecx
// 00498442  59                   pop ecx
// 00498443  5e                   pop esi
// 00498444  83c410               add esp, 0x10
// 00498447  c3                   ret 

struct Plugin {
    char pad[0x14];
    void* field14;
    void destroy();
};

void Plugin::destroy()
{
    void* p = (char*)this + 0x14;
    *(int*)((char*)this + 0x14) = 0;
    ((void(*)(void*))0x725720)(p);
    ((void(*)(void*))0x4968c0)(this);
}
