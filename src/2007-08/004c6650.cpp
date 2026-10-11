// from server: 92% by atomic.potato
// roc 2007-08 004c6650  unit: RakPeer  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c6650
//
// 004c6650  53                   push ebx
// 004c6651  56                   push esi
// 004c6652  8bf1                 mov esi, ecx
// 004c6654  6880000000           push 0x80
// 004c6659  33db                 xor ebx, ebx
// 004c665b  8d86d4020000         lea eax, [esi + 0x2d4]
// 004c6661  53                   push ebx
// 004c6662  50                   push eax
// 004c6663  e824a51600           call 0x630b8c
// 004c6668  6880000000           push 0x80
// 004c666d  8d8e54030000         lea ecx, [esi + 0x354]
// 004c6673  53                   push ebx
// 004c6674  51                   push ecx
// 004c6675  e812a51600           call 0x630b8c
// 004c667a  6880000000           push 0x80
// 004c667f  8d96d4010000         lea edx, [esi + 0x1d4]
// 004c6685  53                   push ebx
// 004c6686  52                   push edx
// 004c6687  e800a51600           call 0x630b8c
// 004c668c  6880000000           push 0x80
// 004c6691  8d8654020000         lea eax, [esi + 0x254]
// 004c6697  53                   push ebx
// 004c6698  50                   push eax
// 004c6699  e8eea41600           call 0x630b8c
// 004c669e  68c8000000           push 0xc8
// 004c66a3  8d8ee8030000         lea ecx, [esi + 0x3e8]
// 004c66a9  53                   push ebx
// 004c66aa  51                   push ecx
// 004c66ab  e8dca41600           call 0x630b8c
// 004c66b0  83c43c               add esp, 0x3c
// 004c66b3  e8b818ffff           call 0x4b7f70
// 004c66b8  8986a8040000         mov dword ptr [esi + 0x4a8], eax
// 004c66be  66899edc030000       mov word ptr [esi + 0x3dc], bx
// 004c66c5  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 004c66cb  e87017ffff           call 0x4b7e40
// 004c66d0  8996dc040000         mov dword ptr [esi + 0x4dc], edx
// 004c66d6  8bd0                 mov edx, eax
// 004c66d8  8bca                 mov ecx, edx
// 004c66da  8986d8040000         mov dword ptr [esi + 0x4d8], eax
// 004c66e0  8b86dc040000         mov eax, dword ptr [esi + 0x4dc]
// 004c66e6  899608050000         mov dword ptr [esi + 0x508], edx
// 004c66ec  898e00050000         mov dword ptr [esi + 0x500], ecx
// 004c66f2  8bd0                 mov edx, eax
// 004c66f4  68e8030000           push 0x3e8
// 004c66f9  8bce                 mov ecx, esi
// 004c66fb  89860c050000         mov dword ptr [esi + 0x50c], eax
// 004c6701  899604050000         mov dword ptr [esi + 0x504], edx
// 004c6707  889ed5030000         mov byte ptr [esi + 0x3d5], bl
// 004c670d  889ed4030000         mov byte ptr [esi + 0x3d4], bl
// 004c6713  899eb8000000         mov dword ptr [esi + 0xb8], ebx
// 004c6719  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 004c671f  899ecc040000         mov dword ptr [esi + 0x4cc], ebx
// 004c6725  c686d004000001       mov byte ptr [esi + 0x4d0], 1
// 004c672c  899e70070000         mov dword ptr [esi + 0x770], ebx
// 004c6732  899e6c070000         mov dword ptr [esi + 0x76c], ebx
// 004c6738  e863f1ffff           call 0x4c58a0
// 004c673d  b840420f00           mov eax, 0xf4240
// 004c6742  899ee4040000         mov dword ptr [esi + 0x4e4], ebx
// 004c6748  899ef4040000         mov dword ptr [esi + 0x4f4], ebx
// 004c674e  899e7c070000         mov dword ptr [esi + 0x77c], ebx
// 004c6754  899ee8040000         mov dword ptr [esi + 0x4e8], ebx
// 004c675a  899eec040000         mov dword ptr [esi + 0x4ec], ebx
// 004c6760  889efc040000         mov byte ptr [esi + 0x4fc], bl
// 004c6766  899eb0040000         mov dword ptr [esi + 0x4b0], ebx
// 004c676c  899eb4040000         mov dword ptr [esi + 0x4b4], ebx
// 004c6772  899eb8040000         mov dword ptr [esi + 0x4b8], ebx
// 004c6778  c786e0040000a0860100 mov dword ptr [esi + 0x4e0], 0x186a0
// 004c6782  8986f0040000         mov dword ptr [esi + 0x4f0], eax
// 004c6788  898678070000         mov dword ptr [esi + 0x778], eax
// 004c678e  5e                   pop esi
// 004c678f  5b                   pop ebx
// 004c6790  c3                   ret 

struct RakPeer {
    char pad0[0xb0];
    int field_b0;
    char pad_b4[0x4];
    int field_b8;
    int field_bc;
    char pad_c0[0x114];
    char field_1d4[0x80];
    char field_254[0x80];
    char field_2d4[0x80];
    char field_354[0x80];
    char field_3d4;
    char field_3d5;
    char pad_3d6[0x6];
    short field_3dc;
    char pad_3de[0xa];
    char field_3e8[0xc8];
    int field_4b0;
    int field_4b4;
    int field_4b8;
    char pad_4bc[0x10];
    int field_4cc;
    char field_4d0;
    char pad_4d1[0x7];
    int field_4d8;
    int field_4dc;
    int field_4e0;
    int field_4e4;
    int field_4e8;
    int field_4ec;
    int field_4f0;
    int field_4f4;
    char pad_4f8[0x4];
    char field_4fc;
    char pad_4fd[0x3];
    int field_500;
    int field_504;
    int field_508;
    int field_50c;
    char pad_510[0x25c];
    int field_76c;
    int field_770;
    int field_774;
    int field_778;
    int field_77c;

    void construct();
};

extern "C" void __cdecl func_630b8c(void*, int, unsigned int);
extern "C" int __cdecl func_4b7f70();
extern "C" int __cdecl func_4b7e40();
extern "C" void __cdecl func_4c58a0();

void RakPeer::construct() {
    func_630b8c(field_2d4, 0, 0x80);
    func_630b8c(field_354, 0, 0x80);
    func_630b8c(field_1d4, 0, 0x80);
    func_630b8c(field_254, 0, 0x80);
    func_630b8c(field_3e8, 0, 0xc8);
    field_4b0 = func_4b7f70();
    field_3dc = 0;
    field_b0 = 0;
    int a = func_4b7e40();
    field_4dc = a;
    field_4d8 = a;
    field_508 = a;
    field_500 = a;
    field_50c = a;
    field_504 = a;
    field_3d5 = 0;
    field_3d4 = 0;
    field_b8 = 0;
    field_bc = 0;
    field_4cc = 0;
    field_4d0 = 1;
    field_770 = 0;
    field_76c = 0;
    func_4c58a0();
    field_4e4 = 0;
    field_4f4 = 0;
    field_77c = 0;
    field_4e8 = 0;
    field_4ec = 0;
    field_4fc = 0;
    field_4b4 = 0;
    field_4b8 = 0;
    field_4e0 = 0x186a0;
    field_4f0 = 0xf4240;
    field_778 = 0xf4240;
}
