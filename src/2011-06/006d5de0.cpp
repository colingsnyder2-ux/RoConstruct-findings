// from server: 82% by atomic.potato
// roc 2011-06 006d5de0  unit: RBX::VMotor6D::?$FactoryProduct  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d5de0
//
// 006d5de0  56                   push esi
// 006d5de1  57                   push edi
// 006d5de2  6a00                 push 0
// 006d5de4  68a4fdc600           push 0xc6fda4
// 006d5de9  8bf1                 mov esi, ecx
// 006d5deb  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 006d5df1  6874b9c500           push 0xc5b974
// 006d5df6  6a00                 push 0
// 006d5df8  50                   push eax
// 006d5df9  e8ec541300           call 0x80b2ea
// 006d5dfe  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 006d5e04  6a00                 push 0
// 006d5e06  688cfec600           push 0xc6fe8c
// 006d5e0b  6874b9c500           push 0xc5b974
// 006d5e10  6a00                 push 0
// 006d5e12  51                   push ecx
// 006d5e13  8bf8                 mov edi, eax
// 006d5e15  e8d0541300           call 0x80b2ea
// 006d5e1a  83c428               add esp, 0x28
// 006d5e1d  85ff                 test edi, edi
// 006d5e1f  7423                 je 0x6d5e44
// 006d5e21  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d5e25  3b8798000000         cmp eax, dword ptr [edi + 0x98]
// 006d5e2b  7439                 je 0x6d5e66
// 006d5e2d  682816cd00           push 0xcd1628
// 006d5e32  8bce                 mov ecx, esi
// 006d5e34  898798000000         mov dword ptr [edi + 0x98], eax
// 006d5e3a  e821c1d3ff           call 0x411f60
// 006d5e3f  5f                   pop edi
// 006d5e40  5e                   pop esi
// 006d5e41  c20400               ret 4
// 006d5e44  85c0                 test eax, eax
// 006d5e46  741e                 je 0x6d5e66
// 006d5e48  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d5e4c  3b8800010000         cmp ecx, dword ptr [eax + 0x100]
// 006d5e52  7412                 je 0x6d5e66
// 006d5e54  898800010000         mov dword ptr [eax + 0x100], ecx
// 006d5e5a  682816cd00           push 0xcd1628
// 006d5e5f  8bce                 mov ecx, esi
// 006d5e61  e8fac0d3ff           call 0x411f60
// 006d5e66  5f                   pop edi
// 006d5e67  5e                   pop esi
// 006d5e68  c20400               ret 4

struct Joint {
    char pad[0xb4];
    void* field_b4;
    void set(int arg);
};

extern "C" void* __stdcall sub_80b2ea(void* a, int b, int c, int d, int e);
extern "C" void __stdcall sub_411f60(void* a, int b);

void Joint::set(int arg)
{
    void* p1 = sub_80b2ea(this->field_b4, 0, 0xc5b974, 0xc6fda4, 0);
    void* p2 = sub_80b2ea(this->field_b4, 0, 0xc5b974, 0xc6fe8c, 0);
    if (p1 != 0) {
        if (arg != *(int*)((char*)p1 + 0x98)) {
            *(int*)((char*)p1 + 0x98) = arg;
            sub_411f60(this, 0xcd1628);
        }
    } else if (p2 != 0) {
        if (arg != *(int*)((char*)p2 + 0x100)) {
            *(int*)((char*)p2 + 0x100) = arg;
            sub_411f60(this, 0xcd1628);
        }
    }
}
