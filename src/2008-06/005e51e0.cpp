// from server: 100% by tester
// roc 2008-06 005e51e0  unit: RBX::SimJob  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e51e0
//
// 005e51e0  56                   push esi
// 005e51e1  8bf1                 mov esi, ecx
// 005e51e3  e808ffffff           call 0x5e50f0
// 005e51e8  8b442408             mov eax, dword ptr [esp + 8]
// 005e51ec  894624               mov dword ptr [esi + 0x24], eax
// 005e51ef  c7063cf78300         mov dword ptr [esi], 0x83f73c
// 005e51f5  8bc6                 mov eax, esi
// 005e51f7  5e                   pop esi
// 005e51f8  c20400               ret 4

struct SimJob {
    SimJob* construct(int);
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
};

extern "C" void __fastcall SimJob_base_ctor(SimJob* self);

SimJob* SimJob::construct(int value) {
    SimJob_base_ctor(this);
    this->field24 = value;
    *(int*)this = 0x83f73c;
    return this;
}
