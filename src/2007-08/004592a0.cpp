// from server: 28% by colin
// roc 2007-08 004592a0  unit: CRobloxWnd  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004592a0
//
// 004592a0  55                   push ebp
// 004592a1  8bec                 mov ebp, esp
// 004592a3  6aff                 push -1
// 004592a5  68b9207400           push 0x7420b9
// 004592aa  64a100000000         mov eax, dword ptr fs:[0]
// 004592b0  50                   push eax
// 004592b1  83ec1c               sub esp, 0x1c
// 004592b4  53                   push ebx
// 004592b5  56                   push esi
// 004592b6  57                   push edi
// 004592b7  a188518b00           mov eax, dword ptr [0x8b5188]
// 004592bc  33c5                 xor eax, ebp
// 004592be  50                   push eax
// 004592bf  8d45f4               lea eax, [ebp - 0xc]
// 004592c2  64a300000000         mov dword ptr fs:[0], eax
// 004592c8  8965f0               mov dword ptr [ebp - 0x10], esp
// 004592cb  8bf1                 mov esi, ecx
// 004592cd  e86c6f1d00           call 0x63023e
// 004592d2  83f8ff               cmp eax, -1
// 004592d5  7517                 jne 0x4592ee

struct CRobloxWnd {
    int sub_4592a0();
};

extern "C" int __cdecl func_0063023e();

int CRobloxWnd::sub_4592a0()
{
    if (func_0063023e() == -1)
        return 0;
    return 1;
}
