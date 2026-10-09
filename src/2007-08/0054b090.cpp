// from server: 77% by colin
// roc 2007-08 0054b090  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b090
//
// 0054b090  56                   push esi
// 0054b091  57                   push edi
// 0054b092  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0054b096  83ffff               cmp edi, -1
// 0054b099  8bf1                 mov esi, ecx
// 0054b09b  7507                 jne 0x54b0a4
// 0054b09d  bf00100000           mov edi, 0x1000
// 0054b0a2  eb04                 jmp 0x54b0a8
// 0054b0a4  85ff                 test edi, edi
// 0054b0a6  7409                 je 0x54b0b1
// 0054b0a8  57                   push edi
// 0054b0a9  8d4e48               lea ecx, [esi + 0x48]
// 0054b0ac  e8fffdffff           call 0x54aeb0
// 0054b0b1  8b06                 mov eax, dword ptr [esi]
// 0054b0b3  8b5058               mov edx, dword ptr [eax + 0x58]
// 0054b0b6  8bce                 mov ecx, esi
// 0054b0b8  ffd2                 call edx
// 0054b0ba  807e4100             cmp byte ptr [esi + 0x41], 0
// 0054b0be  7404                 je 0x54b0c4
// 0054b0c0  c6464100             mov byte ptr [esi + 0x41], 0
// 0054b0c4  8a442410             mov al, byte ptr [esp + 0x10]
// 0054b0c8  b901000000           mov ecx, 1
// 0054b0cd  884640               mov byte ptr [esi + 0x40], al
// 0054b0d0  884e41               mov byte ptr [esi + 0x41], cl
// 0054b0d3  094e54               or dword ptr [esi + 0x54], ecx
// 0054b0d6  3bf9                 cmp edi, ecx
// 0054b0d8  8b4654               mov eax, dword ptr [esi + 0x54]
// 0054b0db  c6463c00             mov byte ptr [esi + 0x3c], 0
// 0054b0df  7e06                 jle 0x54b0e7
// 0054b0e1  83c808               or eax, 8
// 0054b0e4  894654               mov dword ptr [esi + 0x54], eax
// 0054b0e7  5f                   pop edi
// 0054b0e8  5e                   pop esi
// 0054b0e9  c20c00               ret 0xc

struct Uinput_chain_client
{
    char pad0[0x3c];
    unsigned char field_3c;
    char pad1[0x3];
    unsigned char field_40;
    unsigned char field_41;
    char pad2[0x2];
    char pad3[0x4];
    unsigned int field_48;
    char pad4[0x8];
    unsigned int field_54;

    void method(int a, int b, int c);
};

extern "C" void __stdcall sub_54aeb0(unsigned int value);

void Uinput_chain_client::method(int a, int b, int c)
{
    int size = a;
    if (size == -1)
    {
        size = 0x1000;
    }
    else if (size != 0)
    {
        sub_54aeb0((unsigned int)size);
    }

    void (__thiscall *fn)(Uinput_chain_client*) = *(void (__thiscall **)(Uinput_chain_client*))((*(int*)this) + 0x58);
    fn(this);

    if (field_41 != 0)
    {
        field_41 = 0;
    }

    field_40 = (unsigned char)b;
    field_41 = 1;
    field_54 |= 1;
    field_3c = 0;

    if (size > 1)
    {
        field_54 |= 8;
    }
}
