// roc 2010-06 00750c60  unit: RBX::Assembly  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750c60
//
// 00750c60  56                   push esi
// 00750c61  8bf1                 mov esi, ecx
// 00750c63  8b4630               mov eax, dword ptr [esi + 0x30]
// 00750c66  85c0                 test eax, eax
// 00750c68  7406                 je 0x750c70
// 00750c6a  80780400             cmp byte ptr [eax + 4], 0
// 00750c6e  7524                 jne 0x750c94
// 00750c70  8b4e04               mov ecx, dword ptr [esi + 4]
// 00750c73  85c9                 test ecx, ecx
// 00750c75  7407                 je 0x750c7e
// 00750c77  e8e4ffffff           call 0x750c60
// 00750c7c  eb0b                 jmp 0x750c89
// 00750c7e  8b4634               mov eax, dword ptr [esi + 0x34]
// 00750c81  85c0                 test eax, eax
// 00750c83  7404                 je 0x750c89
// 00750c85  c6400801             mov byte ptr [eax + 8], 1
// 00750c89  8b7630               mov esi, dword ptr [esi + 0x30]
// 00750c8c  85f6                 test esi, esi
// 00750c8e  7404                 je 0x750c94
// 00750c90  c6460401             mov byte ptr [esi + 4], 1
// 00750c94  5e                   pop esi
// 00750c95  c3                   ret 
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