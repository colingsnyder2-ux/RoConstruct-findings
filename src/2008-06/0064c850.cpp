// from server: 100% by king_originala
// roc 2008-06 0064c850  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064c850
//
// 0064c850  56                   push esi
// 0064c851  6a02                 push 2
// 0064c853  8bf1                 mov esi, ecx
// 0064c855  6a00                 push 0
// 0064c857  8d8600010000         lea eax, [esi + 0x100]
// 0064c85d  50                   push eax
// 0064c85e  e84dfeffff           call 0x64c6b0
// 0064c863  6a01                 push 1
// 0064c865  6a00                 push 0
// 0064c867  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0064c86d  51                   push ecx
// 0064c86e  8bce                 mov ecx, esi
// 0064c870  e83bfeffff           call 0x64c6b0
// 0064c875  6a04                 push 4
// 0064c877  6a00                 push 0
// 0064c879  8d9640010000         lea edx, [esi + 0x140]
// 0064c87f  52                   push edx
// 0064c880  8bce                 mov ecx, esi
// 0064c882  e829feffff           call 0x64c6b0
// 0064c887  6a05                 push 5
// 0064c889  6a00                 push 0
// 0064c88b  8d8660010000         lea eax, [esi + 0x160]
// 0064c891  50                   push eax
// 0064c892  8bce                 mov ecx, esi
// 0064c894  e817feffff           call 0x64c6b0
// 0064c899  5e                   pop esi
// 0064c89a  c3                   ret 

struct S {
    char padding[0xe0];
    char first[0x20];
    char second[0x40];
    char third[0x20];
    char fourth[0x20];

    void helper(void *, int, int);
    void f();
};

void S::f()
{
    helper(second, 0, 2);
    helper(first, 0, 1);
    helper(third, 0, 4);
    helper(fourth, 0, 5);
}
