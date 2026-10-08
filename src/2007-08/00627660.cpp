// from server: 100% by colin
// roc 2007-08 00627660  unit: RBX::SeparateStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627660
//
// 00627660  56                   push esi
// 00627661  57                   push edi
// 00627662  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00627666  8bf1                 mov esi, ecx
// 00627668  8b4e08               mov ecx, dword ptr [esi + 8]
// 0062766b  57                   push edi
// 0062766c  e8cfc5fdff           call 0x603c40
// 00627671  56                   push esi
// 00627672  8bcf                 mov ecx, edi
// 00627674  e8c71afeff           call 0x609140
// 00627679  5f                   pop edi
// 0062767a  5e                   pop esi
// 0062767b  c20400               ret 4

struct SeparateStage;

struct Helper1 {
    void method(void* arg);
};

struct Helper2 {
    void method(void* arg);
};

struct SeparateStage {
    char pad[8];
    Helper1* field8;
    void process(void* arg);
};

void SeparateStage::process(void* arg) {
    field8->method(arg);
    ((Helper2*)arg)->method(this);
}
