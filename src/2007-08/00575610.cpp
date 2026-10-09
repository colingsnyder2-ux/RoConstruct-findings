// from server: 82% by colin
// roc 2007-08 00575610  unit: RBX::PartInstance  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00575610
//
// 00575610  56                   push esi
// 00575611  57                   push edi
// 00575612  8bf1                 mov esi, ecx
// 00575614  e8b75b0400           call 0x5bb1d0
// 00575619  c6865002000001       mov byte ptr [esi + 0x250], 1
// 00575620  8bbed8010000         mov edi, dword ptr [esi + 0x1d8]
// 00575626  8bce                 mov ecx, esi
// 00575628  e833feffff           call 0x575460
// 0057562d  50                   push eax
// 0057562e  8bcf                 mov ecx, edi
// 00575630  e81b010400           call 0x5b5750
// 00575635  5f                   pop edi
// 00575636  5e                   pop esi
// 00575637  c3                   ret 

struct PartInstance {
    void sub_5BB1D0();
    int sub_575460();
    void sub_5B5750(int);
    void target();
};

void PartInstance::target() {
    sub_5BB1D0();
    *(unsigned char*)((char*)this + 0x250) = 1;
    int edi = *(int*)((char*)this + 0x1d8);
    int eax = sub_575460();
    ((PartInstance*)edi)->sub_5B5750(eax);
}
