// from server: 100% by king_originala
// roc 2008-06 004b51d0  unit: RBX::Stats::_N::?$TypedStatsItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b51d0
//
// 004b51d0  51                   push ecx
// 004b51d1  56                   push esi
// 004b51d2  8bf1                 mov esi, ecx
// 004b51d4  8d8e58010000         lea ecx, [esi + 0x158]
// 004b51da  e8e15df7ff           call 0x42afc0
// 004b51df  88442407             mov byte ptr [esp + 7], al
// 004b51e3  8d442407             lea eax, [esp + 7]
// 004b51e7  50                   push eax
// 004b51e8  8bce                 mov ecx, esi
// 004b51ea  e8813f1100           call 0x5c9170
// 004b51ef  5e                   pop esi
// 004b51f0  59                   pop ecx
// 004b51f1  c3                   ret 

struct Table;
struct EventHandler {
    Table* table;
    bool f();
};

struct S {
    char padding[0x158];
    EventHandler handler;
    void setValue(const bool* state);
    void f();
};

void S::f() {
    bool state = handler.f();
    setValue(&state);
}
