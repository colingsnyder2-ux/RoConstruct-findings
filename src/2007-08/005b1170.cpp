// from server: 100% by colin
// roc 2007-08 005b1170  unit: RBX::JointInstance  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1170
//
// 005b1170  8b442404             mov eax, dword ptr [esp + 4]
// 005b1174  56                   push esi
// 005b1175  50                   push eax
// 005b1176  8bf1                 mov esi, ecx
// 005b1178  e833ffffff           call 0x5b10b0
// 005b117d  c706646c7b00         mov dword ptr [esi], 0x7b6c64
// 005b1183  c746045c6c7b00       mov dword ptr [esi + 4], 0x7b6c5c
// 005b118a  c74610546c7b00       mov dword ptr [esi + 0x10], 0x7b6c54
// 005b1191  c74614446c7b00       mov dword ptr [esi + 0x14], 0x7b6c44
// 005b1198  c7462c346c7b00       mov dword ptr [esi + 0x2c], 0x7b6c34
// 005b119f  c74644246c7b00       mov dword ptr [esi + 0x44], 0x7b6c24
// 005b11a6  c7465c146c7b00       mov dword ptr [esi + 0x5c], 0x7b6c14
// 005b11ad  c74674046c7b00       mov dword ptr [esi + 0x74], 0x7b6c04
// 005b11b4  c7868c000000f46b7b00 mov dword ptr [esi + 0x8c], 0x7b6bf4
// 005b11be  c786e8000000dc6b7b00 mov dword ptr [esi + 0xe8], 0x7b6bdc
// 005b11c8  8bc6                 mov eax, esi
// 005b11ca  5e                   pop esi
// 005b11cb  c20400               ret 4

struct JointInstance {
    char pad[0x100];
    JointInstance* construct(void*);
};

JointInstance* JointInstance::construct(void* a)
{
    JointInstance* self = this;
    self->construct(a);
    *(int*)((char*)self + 0x00) = 0x7b6c64;
    *(int*)((char*)self + 0x04) = 0x7b6c5c;
    *(int*)((char*)self + 0x10) = 0x7b6c54;
    *(int*)((char*)self + 0x14) = 0x7b6c44;
    *(int*)((char*)self + 0x2c) = 0x7b6c34;
    *(int*)((char*)self + 0x44) = 0x7b6c24;
    *(int*)((char*)self + 0x5c) = 0x7b6c14;
    *(int*)((char*)self + 0x74) = 0x7b6c04;
    *(int*)((char*)self + 0x8c) = 0x7b6bf4;
    *(int*)((char*)self + 0xe8) = 0x7b6bdc;
    return self;
}
