// from server: 44% by colin
// roc 2008-06 0054e320  unit: RBX::RenderBase::Mesh  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054e320
//
// 0054e320  55                   push ebp
// 0054e321  8bec                 mov ebp, esp
// 0054e323  51                   push ecx
// 0054e324  894dfc               mov dword ptr [ebp - 4], ecx
// 0054e327  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0054e32a  50                   push eax
// 0054e32b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054e32e  51                   push ecx
// 0054e32f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054e332  e809160000           call 0x54f940
// 0054e337  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054e33a  8be5                 mov esp, ebp
// 0054e33c  5d                   pop ebp
// 0054e33d  c20800               ret 8

struct S
{
    S* f(int, int);
    void g(int, int);
};

S* S::f(int a, int b)
{
    g(a, b);
    return this;
}
