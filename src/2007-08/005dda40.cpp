// from server: 100% by colin
// roc 2007-08 005dda40  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dda40
//
// 005dda40  56                   push esi
// 005dda41  8bf1                 mov esi, ecx
// 005dda43  e8e8fbffff           call 0x5dd630
// 005dda48  c70644c47b00         mov dword ptr [esi], 0x7bc444
// 005dda4e  c7460438c47b00       mov dword ptr [esi + 4], 0x7bc438
// 005dda55  c7461030c47b00       mov dword ptr [esi + 0x10], 0x7bc430
// 005dda5c  c7461420c47b00       mov dword ptr [esi + 0x14], 0x7bc420
// 005dda63  c7462c10c47b00       mov dword ptr [esi + 0x2c], 0x7bc410
// 005dda6a  c7464400c47b00       mov dword ptr [esi + 0x44], 0x7bc400
// 005dda71  c7465cf0c37b00       mov dword ptr [esi + 0x5c], 0x7bc3f0
// 005dda78  c74674e0c37b00       mov dword ptr [esi + 0x74], 0x7bc3e0
// 005dda7f  c7868c000000d0c37b00 mov dword ptr [esi + 0x8c], 0x7bc3d0
// 005dda89  c786e8000000b8c37b00 mov dword ptr [esi + 0xe8], 0x7bc3b8
// 005dda93  8bc6                 mov eax, esi
// 005dda95  5e                   pop esi
// 005dda96  c3                   ret 

struct EnumPropDescriptor {
    EnumPropDescriptor* init();
};

extern "C" void __fastcall base_init(EnumPropDescriptor* self);

EnumPropDescriptor* EnumPropDescriptor::init()
{
    base_init(this);
    char* p = (char*)this;
    *(int*)(p + 0) = 0x7bc444;
    *(int*)(p + 4) = 0x7bc438;
    *(int*)(p + 0x10) = 0x7bc430;
    *(int*)(p + 0x14) = 0x7bc420;
    *(int*)(p + 0x2c) = 0x7bc410;
    *(int*)(p + 0x44) = 0x7bc400;
    *(int*)(p + 0x5c) = 0x7bc3f0;
    *(int*)(p + 0x74) = 0x7bc3e0;
    *(int*)(p + 0x8c) = 0x7bc3d0;
    *(int*)(p + 0xe8) = 0x7bc3b8;
    return this;
}
