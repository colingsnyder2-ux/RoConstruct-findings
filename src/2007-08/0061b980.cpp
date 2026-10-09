// from server: 33% by colin
// roc 2007-08 0061b980  unit: RBX::ChatWidget  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b980
//
// 0061b980  6aff                 push -1
// 0061b982  6878c67500           push 0x75c678
// 0061b987  64a100000000         mov eax, dword ptr fs:[0]
// 0061b98d  50                   push eax
// 0061b98e  64892500000000       mov dword ptr fs:[0], esp
// 0061b995  51                   push ecx
// 0061b996  56                   push esi
// 0061b997  8bf1                 mov esi, ecx
// 0061b999  89742404             mov dword ptr [esp + 4], esi
// 0061b99d  8d8e04010000         lea ecx, [esi + 0x104]
// 0061b9a3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061b9ab  ff15ace67700         call dword ptr [0x77e6ac]
// 0061b9b1  8bce                 mov ecx, esi
// 0061b9b3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061b9bb  e8304ffeff           call 0x6008f0
// 0061b9c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061b9c4  5e                   pop esi
// 0061b9c5  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b9cc  83c410               add esp, 0x10
// 0061b9cf  c3                   ret 

struct ChatWidget {
    char pad[0x104];
    void* m_str;
    void destroy();
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_6008F0(ChatWidget*);

void ChatWidget::destroy()
{
    sub_77E6AC(&pad[0x104]);
    sub_6008F0(this);
}
