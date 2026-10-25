// from server: 100% by king_originala
// roc 2008-06 00498e80  unit: RBX::Network::VPlayers::?$SignalDesc  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498e80
//
// 00498e80  6aff                 push -1
// 00498e82  68b86d7c00           push 0x7c6db8
// 00498e87  64a100000000         mov eax, dword ptr fs:[0]
// 00498e8d  50                   push eax
// 00498e8e  64892500000000       mov dword ptr fs:[0], esp
// 00498e95  51                   push ecx
// 00498e96  56                   push esi
// 00498e97  57                   push edi
// 00498e98  8bf9                 mov edi, ecx
// 00498e9a  83ec10               sub esp, 0x10
// 00498e9d  8bf4                 mov esi, esp
// 00498e9f  8d442434             lea eax, [esp + 0x34]
// 00498ea3  89642418             mov dword ptr [esp + 0x18], esp
// 00498ea7  50                   push eax
// 00498ea8  8bce                 mov ecx, esi
// 00498eaa  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00498eb2  e839e0ffff           call 0x496ef0
// 00498eb7  8a4c2440             mov cl, byte ptr [esp + 0x40]
// 00498ebb  884e0c               mov byte ptr [esi + 0xc], cl
// 00498ebe  8a542441             mov dl, byte ptr [esp + 0x41]
// 00498ec2  88560d               mov byte ptr [esi + 0xd], dl
// 00498ec5  8b442430             mov eax, dword ptr [esp + 0x30]
// 00498ec9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00498ecd  50                   push eax
// 00498ece  51                   push ecx
// 00498ecf  8bcf                 mov ecx, edi
// 00498ed1  e83af7ffff           call 0x498610
// 00498ed6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00498eda  52                   push edx
// 00498edb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00498ee3  e838ee0600           call 0x507d20
// 00498ee8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00498eec  83c404               add esp, 4
// 00498eef  8bc7                 mov eax, edi
// 00498ef1  5f                   pop edi
// 00498ef2  64890d00000000       mov dword ptr fs:[0], ecx
// 00498ef9  5e                   pop esi
// 00498efa  83c410               add esp, 0x10
// 00498efd  c21800               ret 0x18

void __cdecl alignedFree(void*);

struct Array {
    void* data;
    int size;
    int capacity;

    Array(const Array&);
    ~Array();
};

__forceinline Array::~Array()
{
    alignedFree(data);
}

struct Payload {
    Array array;
    volatile bool first;
    volatile bool second;
};

struct Base {
    Base(int, int, Payload);
};

struct S : Base {
    S(int, int, Payload);
};

S::S(volatile int a, volatile int b, Payload payload)
    : Base(a, b, payload)
{
}
