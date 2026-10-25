// from server: 59% by atomic.potato
// roc 2010-06 004d16a0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d16a0
//
// 004d16a0  8b442404             mov eax, dword ptr [esp + 4]
// 004d16a4  56                   push esi
// 004d16a5  57                   push edi
// 004d16a6  50                   push eax
// 004d16a7  8bf1                 mov esi, ecx
// 004d16a9  e852faffff           call 0x4d1100
// 004d16ae  8b38                 mov edi, dword ptr [eax]
// 004d16b0  83c404               add esp, 4
// 004d16b3  85ff                 test edi, edi
// 004d16b5  7d07                 jge 0x4d16be
// 004d16b7  5f                   pop edi
// 004d16b8  33c0                 xor eax, eax
// 004d16ba  5e                   pop esi
// 004d16bb  c20400               ret 4
// 004d16be  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 004d16c4  2b8eb0000000         sub ecx, dword ptr [esi + 0xb0]
// 004d16ca  c1f902               sar ecx, 2
// 004d16cd  3bf9                 cmp edi, ecx
// 004d16cf  73e6                 jae 0x4d16b7
// 004d16d1  8b96b4000000         mov edx, dword ptr [esi + 0xb4]
// 004d16d7  2b96b0000000         sub edx, dword ptr [esi + 0xb0]
// 004d16dd  c1fa02               sar edx, 2
// 004d16e0  3bfa                 cmp edi, edx
// 004d16e2  7206                 jb 0x4d16ea
// 004d16e4  ff150ca99e00         call dword ptr [0x9ea90c]
// 004d16ea  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 004d16f0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004d16f3  5f                   pop edi
// 004d16f4  5e                   pop esi
// 004d16f5  c20400               ret 4

extern "C" void __stdcall invalid_parameter_noinfo();

struct Inner_004d16a0 {
    int value;
};

struct Outer_004d16a0 {
    char pad_0000[0xb0];
    Inner_004d16a0* begin;
    Inner_004d16a0* end;
};

extern "C" Inner_004d16a0* __stdcall get_004d1100(int);

struct S_004d16a0 {
    char pad_0000[0xb0];
    Inner_004d16a0* begin;
    Inner_004d16a0* end;
    Inner_004d16a0* at(int index);
};

Inner_004d16a0* S_004d16a0::at(int index) {
    Inner_004d16a0* result = get_004d1100(index);
    int i = result->value;
    if (i < 0) {
        return 0;
    }
    unsigned int count = (unsigned int)((end - begin) >> 2);
    if ((unsigned int)i >= count) {
        return 0;
    }
    if ((unsigned int)i >= (unsigned int)((end - begin) >> 2)) {
        invalid_parameter_noinfo();
    }
    return &begin[i];
}
