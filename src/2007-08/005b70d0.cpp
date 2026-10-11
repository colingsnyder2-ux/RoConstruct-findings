// from server: 100% by colin
// roc 2007-08 005b70d0  unit: RBX::$01W4SurfaceType::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b70d0
//
// 005b70d0  8b442404             mov eax, dword ptr [esp + 4]
// 005b70d4  85c0                 test eax, eax
// 005b70d6  56                   push esi
// 005b70d7  8bf1                 mov esi, ecx
// 005b70d9  7414                 je 0x5b70ef
// 005b70db  8d48fc               lea ecx, [eax - 4]
// 005b70de  e8adc7fbff           call 0x573890
// 005b70e3  8d4828               lea ecx, [eax + 0x28]
// 005b70e6  8b4604               mov eax, dword ptr [esi + 4]
// 005b70e9  ffd0                 call eax
// 005b70eb  5e                   pop esi
// 005b70ec  c20400               ret 4
// 005b70ef  33c9                 xor ecx, ecx
// 005b70f1  e89ac7fbff           call 0x573890
// 005b70f6  8d4828               lea ecx, [eax + 0x28]
// 005b70f9  8b4604               mov eax, dword ptr [esi + 4]
// 005b70fc  ffd0                 call eax
// 005b70fe  5e                   pop esi
// 005b70ff  c20400               ret 4

struct SurfaceGetSet {
    int (__fastcall *get)(void*, int);
    void (__fastcall *set)(void*);
    void setValue(void* instance);
};

extern "C" void* __fastcall sub_00573890(void* p);

void SurfaceGetSet::setValue(void* instance)
{
    void* obj;
    if (instance != 0) {
        obj = sub_00573890((char*)instance - 4);
    } else {
        obj = sub_00573890(0);
    }
    void (__fastcall *fn)(void*) = this->set;
    fn((char*)obj + 0x28);
}
