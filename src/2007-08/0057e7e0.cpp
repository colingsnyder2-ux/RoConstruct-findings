// from server: 9% by colin
// roc 2007-08 0057e7e0  unit: RBX::Stats::N::?$TypedStatsItem  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057e7e0
//
// 0057e7e0  83ec08               sub esp, 8
// 0057e7e3  56                   push esi
// 0057e7e4  8bf1                 mov esi, ecx
// 0057e7e6  8d8e10010000         lea ecx, [esi + 0x110]
// 0057e7ec  e89fffffff           call 0x57e790
// 0057e7f1  dd5c2404             fstp qword ptr [esp + 4]
// 0057e7f5  8d442404             lea eax, [esp + 4]
// 0057e7f9  50                   push eax
// 0057e7fa  8bce                 mov ecx, esi
// 0057e7fc  e86f840100           call 0x596c70
// 0057e801  5e                   pop esi
// 0057e802  83c408               add esp, 8
// 0057e805  c3                   ret 

struct TypedStatsItem {
    char pad[0x110];
    double getValue();
    void formatValue(double);
    void update();
};

double TypedStatsItem::getValue() {
    return 0.0;
}

void TypedStatsItem::formatValue(double) {
}

void TypedStatsItem::update() {
    formatValue(getValue());
}
