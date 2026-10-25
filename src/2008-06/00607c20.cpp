// from server: 100% by king_originala
// roc 2008-06 00607c20  unit: RBX::BlockBlockContact  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00607c20
//
// 00607c20  56                   push esi
// 00607c21  8bf1                 mov esi, ecx
// 00607c23  8b4610               mov eax, dword ptr [esi + 0x10]
// 00607c26  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00607c29  83e880               sub eax, -0x80
// 00607c2c  50                   push eax
// 00607c2d  83e980               sub ecx, -0x80
// 00607c30  e82befffff           call 0x606b60
// 00607c35  84c0                 test al, al
// 00607c37  741c                 je 0x607c55
// 00607c39  d9442408             fld dword ptr [esp + 8]
// 00607c3d  51                   push ecx
// 00607c3e  8bce                 mov ecx, esi
// 00607c40  d91c24               fstp dword ptr [esp]
// 00607c43  e838f6ffff           call 0x607280
// 00607c48  84c0                 test al, al
// 00607c4a  7409                 je 0x607c55
// 00607c4c  b801000000           mov eax, 1
// 00607c51  5e                   pop esi
// 00607c52  c20400               ret 4
// 00607c55  33c0                 xor eax, eax
// 00607c57  5e                   pop esi
// 00607c58  c20400               ret 4

struct Node {
    bool compare(Node* other);
};

struct S {
    char padding[12];
    Node* first;
    Node* second;

    bool update(float value);
    int f(float value);
};

int S::f(float value)
{
    if (((Node*)((char*)first + 128))->compare(
            (Node*)((char*)second + 128)) && update(value))
        return 1;
    return 0;
}
