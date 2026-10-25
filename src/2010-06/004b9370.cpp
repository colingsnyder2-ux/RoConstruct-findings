// from server: 100% by atomic.potato
// roc 2010-06 004b9370  unit: RBX::Network::VPlayer::?$EventDesc  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b9370
//
// 004b9370  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b9374  e8f773f5ff           call 0x410770
// 004b9379  85c0                 test eax, eax
// 004b937b  7421                 je 0x4b939e
// 004b937d  56                   push esi
// 004b937e  8bb05c010000         mov esi, dword ptr [eax + 0x15c]
// 004b9384  85f6                 test esi, esi
// 004b9386  7415                 je 0x4b939d
// 004b9388  56                   push esi
// 004b9389  e85278fbff           call 0x470be0
// 004b938e  83c404               add esp, 4
// 004b9391  85c0                 test eax, eax
// 004b9393  7408                 je 0x4b939d
// 004b9395  8bce                 mov ecx, esi
// 004b9397  5e                   pop esi
// 004b9398  e9a39efeff           jmp 0x4a3240
// 004b939d  5e                   pop esi
// 004b939e  c3                   ret 

struct VPlayer {
    char pad[0x15c];
    void* field_15c;
};

extern "C" VPlayer* __fastcall func_00410770(void*);
extern "C" void* __cdecl func_00470be0(void*);
extern "C" void* __fastcall func_004a3240(void*);

void* func_004b9370(void* p) {
    VPlayer* v = func_00410770(p);
    if (v) {
        void* s = v->field_15c;
        if (s) {
            if (func_00470be0(s))
                return func_004a3240(s);
        }
    }
}
