// from server: 100% by king_originala
// roc 2008-06 005bc930  unit: RBX::Stats::I::?$TypedStatsItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc930
//
// 005bc930  51                   push ecx
// 005bc931  56                   push esi
// 005bc932  8bf1                 mov esi, ecx
// 005bc934  8d8e58010000         lea ecx, [esi + 0x158]
// 005bc93a  e881e6e6ff           call 0x42afc0
// 005bc93f  89442404             mov dword ptr [esp + 4], eax
// 005bc943  8d442404             lea eax, [esp + 4]
// 005bc947  50                   push eax
// 005bc948  8bce                 mov ecx, esi
// 005bc94a  e8f1c70000           call 0x5c9140
// 005bc94f  5e                   pop esi
// 005bc950  59                   pop ecx
// 005bc951  c3                   ret 

struct EventHandler {
    void* table;
    unsigned int f();
};

struct LaserTool {
    char storage[0x158];
    EventHandler handler;
    void setValue(const unsigned int* value);
    void update();
};

void LaserTool::update()
{
    unsigned int value = handler.f();
    setValue(&value);
}
