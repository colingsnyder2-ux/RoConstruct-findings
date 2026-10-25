// from server: 100% by king_originala
// roc 2008-06 0049df50  unit: RBX::Network::Players::Plugin  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049df50
//
// 0049df50  8b442408             mov eax, dword ptr [esp + 8]
// 0049df54  8b542404             mov edx, dword ptr [esp + 4]
// 0049df58  8b4904               mov ecx, dword ptr [ecx + 4]
// 0049df5b  50                   push eax
// 0049df5c  52                   push edx
// 0049df5d  e80ef8ffff           call 0x49d770
// 0049df62  33c9                 xor ecx, ecx
// 0049df64  84c0                 test al, al
// 0049df66  0f95c1               setne cl
// 0049df69  8bc1                 mov eax, ecx
// 0049df6b  c20800               ret 8

struct Receiver
{
    unsigned char func_0049d770(int a, int b);
};

struct S
{
    int unused;
    Receiver* receiver;
    int func_0049df50(int a, int b);
};

int S::func_0049df50(int a, int b)
{
    return receiver->func_0049d770(a, b) != 0;
}
