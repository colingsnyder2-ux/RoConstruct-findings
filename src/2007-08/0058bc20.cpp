// from server: 82% by colin
// roc 2007-08 0058bc20  unit: RBX::Stats::I::?$TypedStatsItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058bc20
//
// 0058bc20  51                   push ecx
// 0058bc21  56                   push esi
// 0058bc22  8bf1                 mov esi, ecx
// 0058bc24  8d8e10010000         lea ecx, [esi + 0x110]
// 0058bc2a  e8612bffff           call 0x57e790
// 0058bc2f  89442404             mov dword ptr [esp + 4], eax
// 0058bc33  8d442404             lea eax, [esp + 4]
// 0058bc37  50                   push eax
// 0058bc38  8bce                 mov ecx, esi
// 0058bc3a  e891b00000           call 0x596cd0
// 0058bc3f  5e                   pop esi
// 0058bc40  59                   pop ecx
// 0058bc41  c3                   ret 

struct Item {
    char pad[0x110];
    int field_110;
};

struct Helper {
    int get();
};

struct S : Item {
    void update();
};

int Helper_get(Helper* h);

void S::update() {
    Helper* h = (Helper*)((char*)this + 0x110);
    int v = h->get();
    int tmp = v;
    ((void (__thiscall*)(S*, int*))0x596cd0)(this, &tmp);
}
