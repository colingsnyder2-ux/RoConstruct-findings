// from server: 31% by colin
// roc 2007-08 0068b1f0  unit: CXTPTabClientWnd  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b1f0
//
// 0068b1f0  6aff                 push -1
// 0068b1f2  68b82a7600           push 0x762ab8
// 0068b1f7  64a100000000         mov eax, dword ptr fs:[0]
// 0068b1fd  50                   push eax
// 0068b1fe  51                   push ecx
// 0068b1ff  56                   push esi
// 0068b200  57                   push edi
// 0068b201  a188518b00           mov eax, dword ptr [0x8b5188]
// 0068b206  33c4                 xor eax, esp
// 0068b208  50                   push eax
// 0068b209  8d442410             lea eax, [esp + 0x10]
// 0068b20d  64a300000000         mov dword ptr fs:[0], eax
// 0068b213  8bf1                 mov esi, ecx
// 0068b215  8974240c             mov dword ptr [esp + 0xc], esi
// 0068b219  e8bc53faff           call 0x6305da
// 0068b21e  8d7e58               lea edi, [esi + 0x58]
// 0068b221  8bcf                 mov ecx, edi
// 0068b223  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0068b22b  e840f2ffff           call 0x68a470
// 0068b230  c706f4f87c00         mov dword ptr [esi], 0x7cf8f4
// 0068b236  c70764f87c00         mov dword ptr [edi], 0x7cf864
// 0068b23c  8bc6                 mov eax, esi
// 0068b23e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068b242  64890d00000000       mov dword ptr fs:[0], ecx
// 0068b249  59                   pop ecx
// 0068b24a  5f                   pop edi
// 0068b24b  5e                   pop esi
// 0068b24c  83c410               add esp, 0x10
// 0068b24f  c3                   ret 

struct CXTPTabClientWnd {
    char pad[0x58];
    int field_58;
    void sub_6305da();
    void sub_68a470();
    CXTPTabClientWnd* destructor();
};

CXTPTabClientWnd* CXTPTabClientWnd::destructor()
{
    sub_6305da();
    sub_68a470();
    *(int*)this = 0x7cf8f4;
    *(int*)((char*)this + 0x58) = 0x7cf864;
    return this;
}
