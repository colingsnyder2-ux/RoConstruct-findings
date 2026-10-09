// from server: 100% by colin
// roc 2007-08 00499370  unit: Exposer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00499370
//
// 00499370  c70144c07900         mov dword ptr [ecx], 0x79c044
// 00499376  c7410438c07900       mov dword ptr [ecx + 4], 0x79c038
// 0049937d  c7411030c07900       mov dword ptr [ecx + 0x10], 0x79c030
// 00499384  c7411420c07900       mov dword ptr [ecx + 0x14], 0x79c020
// 0049938b  c7412c10c07900       mov dword ptr [ecx + 0x2c], 0x79c010
// 00499392  c7414400c07900       mov dword ptr [ecx + 0x44], 0x79c000
// 00499399  c7415cf0bf7900       mov dword ptr [ecx + 0x5c], 0x79bff0
// 004993a0  c74174e0bf7900       mov dword ptr [ecx + 0x74], 0x79bfe0
// 004993a7  c7818c000000d0bf7900 mov dword ptr [ecx + 0x8c], 0x79bfd0
// 004993b1  c781e8000000a0bf7900 mov dword ptr [ecx + 0xe8], 0x79bfa0
// 004993bb  c781ec00000094bf7900 mov dword ptr [ecx + 0xec], 0x79bf94
// 004993c5  e9b6110100           jmp 0x4aa580

struct Exposer {
    void construct();
};

extern "C" void __stdcall sub_4AA580();

void Exposer::construct() {
    *(int*)((char*)this + 0x00) = 0x79c044;
    *(int*)((char*)this + 0x04) = 0x79c038;
    *(int*)((char*)this + 0x10) = 0x79c030;
    *(int*)((char*)this + 0x14) = 0x79c020;
    *(int*)((char*)this + 0x2c) = 0x79c010;
    *(int*)((char*)this + 0x44) = 0x79c000;
    *(int*)((char*)this + 0x5c) = 0x79bff0;
    *(int*)((char*)this + 0x74) = 0x79bfe0;
    *(int*)((char*)this + 0x8c) = 0x79bfd0;
    *(int*)((char*)this + 0xe8) = 0x79bfa0;
    *(int*)((char*)this + 0xec) = 0x79bf94;
    sub_4AA580();
}
