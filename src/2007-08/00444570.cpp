// from server: 100% by colin
// roc 2007-08 00444570  unit: RBX::MergeBinder  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444570
//
// 00444570  56                   push esi
// 00444571  8bf1                 mov esi, ecx
// 00444573  e898fbffff           call 0x444110
// 00444578  c7066cf97800         mov dword ptr [esi], 0x78f96c
// 0044457e  c7460464f97800       mov dword ptr [esi + 4], 0x78f964
// 00444585  c746105cf97800       mov dword ptr [esi + 0x10], 0x78f95c
// 0044458c  c746144cf97800       mov dword ptr [esi + 0x14], 0x78f94c
// 00444593  c7462c3cf97800       mov dword ptr [esi + 0x2c], 0x78f93c
// 0044459a  c746442cf97800       mov dword ptr [esi + 0x44], 0x78f92c
// 004445a1  c7465c1cf97800       mov dword ptr [esi + 0x5c], 0x78f91c
// 004445a8  c746740cf97800       mov dword ptr [esi + 0x74], 0x78f90c
// 004445af  c7868c000000fcf87800 mov dword ptr [esi + 0x8c], 0x78f8fc
// 004445b9  c786e800000000000000 mov dword ptr [esi + 0xe8], 0
// 004445c3  8bc6                 mov eax, esi
// 004445c5  5e                   pop esi
// 004445c6  c3                   ret 

struct MergeBinder {
    char pad[0xec];
    int field_0xe8;
    MergeBinder();
};

extern void __fastcall sub_444110(MergeBinder* self);

MergeBinder::MergeBinder()
{
    sub_444110(this);
    *(int*)((char*)this + 0x00) = 0x78f96c;
    *(int*)((char*)this + 0x04) = 0x78f964;
    *(int*)((char*)this + 0x10) = 0x78f95c;
    *(int*)((char*)this + 0x14) = 0x78f94c;
    *(int*)((char*)this + 0x2c) = 0x78f93c;
    *(int*)((char*)this + 0x44) = 0x78f92c;
    *(int*)((char*)this + 0x5c) = 0x78f91c;
    *(int*)((char*)this + 0x74) = 0x78f90c;
    *(int*)((char*)this + 0x8c) = 0x78f8fc;
    *(int*)((char*)this + 0xe8) = 0;
}
