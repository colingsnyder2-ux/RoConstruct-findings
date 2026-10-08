// from server: 54% by colin
// roc 2007-08 005b7090  unit: RBX::$04W4SurfaceType::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7090
//
// 005b7090  8b442404             mov eax, dword ptr [esp + 4]
// 005b7094  85c0                 test eax, eax
// 005b7096  56                   push esi
// 005b7097  8bf1                 mov esi, ecx
// 005b7099  7414                 je 0x5b70af
// 005b709b  8d48fc               lea ecx, [eax - 4]
// 005b709e  e8edc7fbff           call 0x573890
// 005b70a3  8d4820               lea ecx, [eax + 0x20]
// 005b70a6  8b4604               mov eax, dword ptr [esi + 4]
// 005b70a9  ffd0                 call eax
// 005b70ab  5e                   pop esi
// 005b70ac  c20400               ret 4
// 005b70af  33c9                 xor ecx, ecx
// 005b70b1  e8dac7fbff           call 0x573890
// 005b70b6  8d4820               lea ecx, [eax + 0x20]
// 005b70b9  8b4604               mov eax, dword ptr [esi + 4]
// 005b70bc  ffd0                 call eax
// 005b70be  5e                   pop esi
// 005b70bf  c20400               ret 4

struct SurfaceGetSet {
    int (__thiscall *get)(void*, int);
    void (__thiscall *set)(void*, int, int);
    void setValue(void* instance, int value);
};

extern "C" void* __cdecl sub_573890(void*);

void SurfaceGetSet::setValue(void* instance, int value)
{
    void* p;
    if (instance != 0) {
        p = sub_573890((char*)instance - 4);
    } else {
        p = sub_573890(0);
    }
    char* q = (char*)p + 0x20;
    void (__thiscall *fn)(void*, int, int) = this->set;
    fn(q, 0, value);
}
