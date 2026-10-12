// from server: 71% by king_originala
// roc 2008-06 0054c650  unit: RBX::RenderBase::Mesh  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c650
//
// 0054c650  55                   push ebp
// 0054c651  8bec                 mov ebp, esp
// 0054c653  6aff                 push -1
// 0054c655  68a8cb7c00           push 0x7ccba8
// 0054c65a  64a100000000         mov eax, dword ptr fs:[0]
// 0054c660  50                   push eax
// 0054c661  83ec08               sub esp, 8
// 0054c664  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0054c669  33c5                 xor eax, ebp
// 0054c66b  50                   push eax
// 0054c66c  8d45f4               lea eax, [ebp - 0xc]
// 0054c66f  64a300000000         mov dword ptr fs:[0], eax
// 0054c675  894dec               mov dword ptr [ebp - 0x14], ecx
// 0054c678  51                   push ecx
// 0054c679  8bcc                 mov ecx, esp
// 0054c67b  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054c67e  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0054c681  50                   push eax
// 0054c682  e8996b0000           call 0x553220
// 0054c687  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054c68a  51                   push ecx
// 0054c68b  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0054c68e  e8fd7bffff           call 0x544290
// 0054c693  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054c69a  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0054c69d  e89e1f0000           call 0x54e640
// 0054c6a2  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0054c6a9  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0054c6ac  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054c6af  64890d00000000       mov dword ptr fs:[0], ecx
// 0054c6b6  59                   pop ecx
// 0054c6b7  8be5                 mov esp, ebp
// 0054c6b9  5d                   pop ebp
// 0054c6ba  c20800               ret 8

struct Argument {
    int value;
    Argument(int);
    Argument(const Argument&);
    ~Argument();
};

struct Base {
    Base(int, Argument);
    ~Base();
};

struct S : Base {
    S(int, int);
    void initialize();
};

#pragma optimize("", off)
S::S(int first, int second)
    : Base(first, Argument(second))
{
    initialize();
}
#pragma optimize("", on)
