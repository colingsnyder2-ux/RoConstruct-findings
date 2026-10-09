// from server: 33% by colin
// roc 2007-08 0061b6d0  unit: RBX::ChatWidget  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b6d0
//
// 0061b6d0  6aff                 push -1
// 0061b6d2  6808c77500           push 0x75c708
// 0061b6d7  64a100000000         mov eax, dword ptr fs:[0]
// 0061b6dd  50                   push eax
// 0061b6de  64892500000000       mov dword ptr fs:[0], esp
// 0061b6e5  51                   push ecx
// 0061b6e6  56                   push esi
// 0061b6e7  8bf1                 mov esi, ecx
// 0061b6e9  89742404             mov dword ptr [esp + 4], esi
// 0061b6ed  8d8e00010000         lea ecx, [esi + 0x100]
// 0061b6f3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061b6fb  ff15ace67700         call dword ptr [0x77e6ac]
// 0061b701  8bce                 mov ecx, esi
// 0061b703  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061b70b  e85018dfff           call 0x40cf60
// 0061b710  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061b714  5e                   pop esi
// 0061b715  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b71c  83c410               add esp, 0x10
// 0061b71f  c3                   ret 

struct S_61b6d0 {
    char pad[0x100];
    char m_str[0x1c];
    void m();
};

void S_61b6d0::m()
{
    char* p = m_str;
    extern void __stdcall sub_77e6ac(char*);
    sub_77e6ac(p);
    extern void __stdcall sub_40cf60(void*);
    sub_40cf60(this);
}
