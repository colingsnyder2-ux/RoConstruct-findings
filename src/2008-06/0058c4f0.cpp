// from server: 100% by king_originala
// roc 2008-06 0058c4f0  unit: RBX::ChangeHistoryService  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058c4f0
//
// 0058c4f0  837c240400           cmp dword ptr [esp + 4], 0
// 0058c4f5  56                   push esi
// 0058c4f6  8bf1                 mov esi, ecx
// 0058c4f8  7430                 je 0x58c52a
// 0058c4fa  e8c1feffff           call 0x58c3c0
// 0058c4ff  8d8e68010000         lea ecx, [esi + 0x168]
// 0058c505  e8268d0000           call 0x595230
// 0058c50a  8d8e7c010000         lea ecx, [esi + 0x17c]
// 0058c510  e81b8d0000           call 0x595230
// 0058c515  8d8e90010000         lea ecx, [esi + 0x190]
// 0058c51b  e8108d0000           call 0x595230
// 0058c520  c7863001000000000000 mov dword ptr [esi + 0x130], 0
// 0058c52a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058c52e  85c0                 test eax, eax
// 0058c530  7406                 je 0x58c538
// 0058c532  898630010000         mov dword ptr [esi + 0x130], eax
// 0058c538  5e                   pop esi
// 0058c539  c20800               ret 8

struct Container {
    char storage[20];
    void clear();
};

struct S {
    char padding0[0x130];
    int value;
    char padding1[0x34];
    Container first;
    Container second;
    Container third;

    void reset();
    void update(int clearState, int newValue);
};

void S::update(int clearState, int newValue)
{
    if (clearState) {
        reset();
        first.clear();
        second.clear();
        third.clear();
        value = 0;
    }
    if (newValue)
        value = newValue;
}
