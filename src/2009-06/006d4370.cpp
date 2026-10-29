// roc 2009-06 006d4370  unit: RBX::Ball  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d4370
//
// 006d4370  56                   push esi
// 006d4371  8bf1                 mov esi, ecx
// 006d4373  8b4630               mov eax, dword ptr [esi + 0x30]
// 006d4376  85c0                 test eax, eax
// 006d4378  7406                 je 0x6d4380
// 006d437a  80780400             cmp byte ptr [eax + 4], 0
// 006d437e  7524                 jne 0x6d43a4
// 006d4380  8b4e04               mov ecx, dword ptr [esi + 4]
// 006d4383  85c9                 test ecx, ecx
// 006d4385  7407                 je 0x6d438e
// 006d4387  e8e4ffffff           call 0x6d4370
// 006d438c  eb0b                 jmp 0x6d4399
// 006d438e  8b4634               mov eax, dword ptr [esi + 0x34]
// 006d4391  85c0                 test eax, eax
// 006d4393  7404                 je 0x6d4399
// 006d4395  c6400801             mov byte ptr [eax + 8], 1
// 006d4399  8b7630               mov esi, dword ptr [esi + 0x30]
// 006d439c  85f6                 test esi, esi
// 006d439e  7404                 je 0x6d43a4
// 006d43a0  c6460401             mov byte ptr [esi + 4], 1
// 006d43a4  5e                   pop esi
// 006d43a5  c3                   ret 
// copied from an identical function in another client (function ?f@Ball@ns_ROCX000015@@QAEXXZ)

namespace ns_ROCX000015 {
// from server: 100% by atomic.potato
struct Ball
{
    char padding0[4];
    Ball* field4;
    char padding8[0x28];
    struct Node* field30;
    struct Node2* field34;

    void f();
};

struct Node
{
    char padding0[4];
    char field4;
};

struct Node2
{
    char padding0[8];
    char field8;
};

void Ball::f()
{
    if (this->field30 != 0 && this->field30->field4 != 0)
        return;

    if (this->field4 != 0)
    {
        this->field4->f();
    }
    else if (this->field34 != 0)
    {
        this->field34->field8 = 1;
    }

    if (this->field30 != 0)
        this->field30->field4 = 1;
}
}
