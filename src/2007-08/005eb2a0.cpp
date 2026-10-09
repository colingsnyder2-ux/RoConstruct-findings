// from server: 53% by colin
// roc 2007-08 005eb2a0  unit: RBX::FlagStand  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eb2a0
//
// 005eb2a0  8bc1                 mov eax, ecx
// 005eb2a2  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 005eb2a5  83ec24               sub esp, 0x24
// 005eb2a8  85c9                 test ecx, ecx
// 005eb2aa  7407                 je 0x5eb2b3
// 005eb2ac  e84f9e0300           call 0x625100
// 005eb2b1  eb03                 jmp 0x5eb2b6
// 005eb2b3  83c058               add eax, 0x58
// 005eb2b6  56                   push esi
// 005eb2b7  50                   push eax
// 005eb2b8  8d4c2408             lea ecx, [esp + 8]
// 005eb2bc  e80fe3f1ff           call 0x5095d0
// 005eb2c1  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005eb2c5  8d442404             lea eax, [esp + 4]
// 005eb2c9  50                   push eax
// 005eb2ca  56                   push esi
// 005eb2cb  e870fafbff           call 0x5aad40
// 005eb2d0  83c408               add esp, 8
// 005eb2d3  8bc6                 mov eax, esi
// 005eb2d5  5e                   pop esi
// 005eb2d6  83c424               add esp, 0x24
// 005eb2d9  c20400               ret 4

struct FlagStand {
    char pad[0x1c];
    void* watchingFlag;
    char pad2[0x58 - 0x20];
    void* getJoinedFlag();
    void affixFlag(void* flag);
};

extern "C" void __stdcall func_00625100();
extern "C" void __stdcall func_005095d0();
extern "C" void __stdcall func_005aad40();

void* FlagStand::getJoinedFlag()
{
    void* result;
    void* flag = watchingFlag;
    if (flag != 0) {
        func_00625100();
    } else {
        flag = (char*)this + 0x58;
    }
    func_005095d0();
    func_005aad40();
    return flag;
}
