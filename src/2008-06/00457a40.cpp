// from server: 100% by king_originala
// roc 2008-06 00457a40  unit: RBX::VInstance::?$MarshaledListener  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457a40
//
// 00457a40  6aff                 push -1
// 00457a42  68e6257c00           push 0x7c25e6
// 00457a47  64a100000000         mov eax, dword ptr fs:[0]
// 00457a4d  50                   push eax
// 00457a4e  64892500000000       mov dword ptr fs:[0], esp
// 00457a55  51                   push ecx
// 00457a56  53                   push ebx
// 00457a57  55                   push ebp
// 00457a58  56                   push esi
// 00457a59  8bf1                 mov esi, ecx
// 00457a5b  57                   push edi
// 00457a5c  89742410             mov dword ptr [esp + 0x10], esi
// 00457a60  e80bd62600           call 0x6c5070
// 00457a65  8dbe78030000         lea edi, [esi + 0x378]
// 00457a6b  33ed                 xor ebp, ebp
// 00457a6d  8bcf                 mov ecx, edi
// 00457a6f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00457a73  e8d8f5ffff           call 0x457050
// 00457a78  8d9e9c030000         lea ebx, [esi + 0x39c]
// 00457a7e  8bcb                 mov ecx, ebx
// 00457a80  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00457a85  e846f6ffff           call 0x4570d0
// 00457a8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00457a8e  89aec0030000         mov dword ptr [esi + 0x3c0], ebp
// 00457a94  c7068c888100         mov dword ptr [esi], 0x81888c
// 00457a9a  c70778888100         mov dword ptr [edi], 0x818878
// 00457aa0  c70364888100         mov dword ptr [ebx], 0x818864
// 00457aa6  89aec4030000         mov dword ptr [esi + 0x3c4], ebp
// 00457aac  89aec8030000         mov dword ptr [esi + 0x3c8], ebp
// 00457ab2  89aecc030000         mov dword ptr [esi + 0x3cc], ebp
// 00457ab8  5f                   pop edi
// 00457ab9  89aed0030000         mov dword ptr [esi + 0x3d0], ebp
// 00457abf  8bc6                 mov eax, esi
// 00457ac1  5e                   pop esi
// 00457ac2  5d                   pop ebp
// 00457ac3  5b                   pop ebx
// 00457ac4  64890d00000000       mov dword ptr fs:[0], ecx
// 00457acb  83c410               add esp, 0x10
// 00457ace  c3                   ret 

struct Base {
    char data[0x374];
    Base();
    virtual ~Base();
};

struct ListenerA {
    char data[0x20];
    ListenerA();
    virtual ~ListenerA();
};

struct ListenerB {
    char data[0x20];
    ListenerB();
    virtual ~ListenerB();
};

struct S : Base, ListenerA, ListenerB {
    unsigned int first;
    volatile unsigned int second;
    volatile unsigned int third;
    volatile unsigned int fourth;
    volatile unsigned int fifth;

    S();
    virtual ~S();
};

S::S() : first(0)
{
    second = 0;
    third = 0;
    fourth = 0;
    fifth = 0;
}
