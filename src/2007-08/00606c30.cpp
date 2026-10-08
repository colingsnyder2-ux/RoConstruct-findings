// from server: 75% by colin
// roc 2007-08 00606c30  unit: RBX::ClumpStage  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00606c30
//
// 00606c30  83ec0c               sub esp, 0xc
// 00606c33  56                   push esi
// 00606c34  57                   push edi
// 00606c35  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00606c39  8bf1                 mov esi, ecx
// 00606c3b  8d442418             lea eax, [esp + 0x18]
// 00606c3f  50                   push eax
// 00606c40  8d4e74               lea ecx, [esi + 0x74]
// 00606c43  897c241c             mov dword ptr [esp + 0x1c], edi
// 00606c47  e824d4faff           call 0x5b4070
// 00606c4c  8d4c2418             lea ecx, [esp + 0x18]
// 00606c50  51                   push ecx
// 00606c51  8d54240c             lea edx, [esp + 0xc]
// 00606c55  52                   push edx
// 00606c56  8d8eb4000000         lea ecx, [esi + 0xb4]
// 00606c5c  897c2420             mov dword ptr [esp + 0x20], edi
// 00606c60  e84bbdfdff           call 0x5e29b0
// 00606c65  5f                   pop edi
// 00606c66  5e                   pop esi
// 00606c67  83c40c               add esp, 0xc
// 00606c6a  c20400               ret 4

struct ClumpStage {
    char pad[0x74];
    char field74;
    char pad2[0xb4 - 0x75];
    char fieldb4;
    void func(int);
};

extern "C" void __stdcall sub_5B4070(void*, void*);
extern "C" void __stdcall sub_5E29B0(void*, void*, void*);

void ClumpStage::func(int arg) {
    int local1;
    int local2;
    int local3;
    local1 = arg;
    sub_5B4070(&field74, &local1);
    local2 = arg;
    sub_5E29B0(&fieldb4, &local3, &local2);
}
