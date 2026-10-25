// from server: 52% by atomic.potato
// roc 2011-06 0061ab40  unit: RBX::VScriptContext::?$FactoryProduct  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061ab40
//
// 0061ab40  53                   push ebx
// 0061ab41  56                   push esi
// 0061ab42  8bf1                 mov esi, ecx
// 0061ab44  57                   push edi
// 0061ab45  bb01000000           mov ebx, 1
// 0061ab4a  011de4a3cc00         add dword ptr [0xcca3e4], ebx
// 0061ab50  8d7e14               lea edi, [esi + 0x14]
// 0061ab53  e8e8250100           call 0x62d140
// 0061ab58  8907                 mov dword ptr [edi], eax
// 0061ab5a  011d48a7cc00         add dword ptr [0xcca748], ebx
// 0061ab60  e86bf7f9ff           call 0x5ba2d0
// 0061ab65  8d4e30               lea ecx, [esi + 0x30]
// 0061ab68  51                   push ecx
// 0061ab69  50                   push eax
// 0061ab6a  8d542418             lea edx, [esp + 0x18]
// 0061ab6e  52                   push edx
// 0061ab6f  e8cc7ff7ff           call 0x592b40
// 0061ab74  83c404               add esp, 4
// 0061ab77  50                   push eax
// 0061ab78  8bcf                 mov ecx, edi
// 0061ab7a  e851260100           call 0x62d1d0
// 0061ab7f  011d04a8cc00         add dword ptr [0xcca804], ebx
// 0061ab85  e866f6f9ff           call 0x5ba1f0
// 0061ab8a  8d4e38               lea ecx, [esi + 0x38]
// 0061ab8d  51                   push ecx
// 0061ab8e  50                   push eax
// 0061ab8f  8d54241c             lea edx, [esp + 0x1c]
// 0061ab93  52                   push edx
// 0061ab94  e8a77ff7ff           call 0x592b40
// 0061ab99  83c404               add esp, 4
// 0061ab9c  50                   push eax
// 0061ab9d  8bcf                 mov ecx, edi
// 0061ab9f  e82c260100           call 0x62d1d0
// 0061aba4  011d50a4cc00         add dword ptr [0xcca450], ebx
// 0061abaa  e831faf9ff           call 0x5ba5e0
// 0061abaf  83c640               add esi, 0x40
// 0061abb2  56                   push esi
// 0061abb3  50                   push eax
// 0061abb4  8d442420             lea eax, [esp + 0x20]
// 0061abb8  50                   push eax
// 0061abb9  e8827ff7ff           call 0x592b40
// 0061abbe  83c404               add esp, 4
// 0061abc1  50                   push eax
// 0061abc2  8bcf                 mov ecx, edi
// 0061abc4  e807260100           call 0x62d1d0
// 0061abc9  5f                   pop edi
// 0061abca  5e                   pop esi
// 0061abcb  5b                   pop ebx
// 0061abcc  c20c00               ret 0xc

struct S_0061ab40 {
    char pad_0[0x14];
    void* f_14;
    char pad_18[0x18];
    void* f_30;
    void* f_38;
    void* f_40;
    void init(void* a, void* b, void* c);
};

extern "C" void* __cdecl sub_0062d140();
extern "C" void* __cdecl sub_005ba2d0();
extern "C" void* __cdecl sub_005ba1f0();
extern "C" void* __cdecl sub_005ba5e0();
extern "C" void* __cdecl sub_00592b40(void* a, void* b, void* c);
extern "C" void __cdecl sub_0062d1d0(void* a, void* b);

extern unsigned int dword_00cca3e4;
extern unsigned int dword_00cca748;
extern unsigned int dword_00cca804;
extern unsigned int dword_00cca450;

void S_0061ab40::init(void* a, void* b, void* c) {
    dword_00cca3e4 += 1;
    f_14 = sub_0062d140();
    dword_00cca748 += 1;
    void* v1 = sub_005ba2d0();
    void* t1 = sub_00592b40(v1, &f_30, 0);
    sub_0062d1d0(f_14, t1);
    dword_00cca804 += 1;
    void* v2 = sub_005ba1f0();
    void* t2 = sub_00592b40(v2, &f_38, 0);
    sub_0062d1d0(f_14, t2);
    dword_00cca450 += 1;
    void* v3 = sub_005ba5e0();
    void* t3 = sub_00592b40(v3, &f_40, 0);
    sub_0062d1d0(f_14, t3);
}
