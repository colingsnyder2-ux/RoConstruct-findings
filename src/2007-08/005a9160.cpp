// from server: 100% by colin
// roc 2007-08 005a9160  unit: RBX::VHumanoid::?$SignalDesc  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9160
//
// 005a9160  56                   push esi
// 005a9161  8b7134               mov esi, dword ptr [ecx + 0x34]
// 005a9164  8b06                 mov eax, dword ptr [esi]
// 005a9166  8b5004               mov edx, dword ptr [eax + 4]
// 005a9169  8bce                 mov ecx, esi
// 005a916b  ffd2                 call edx
// 005a916d  83f804               cmp eax, 4
// 005a9170  7411                 je 0x5a9183
// 005a9172  8b7608               mov esi, dword ptr [esi + 8]
// 005a9175  8b06                 mov eax, dword ptr [esi]
// 005a9177  8b5004               mov edx, dword ptr [eax + 4]
// 005a917a  8bce                 mov ecx, esi
// 005a917c  ffd2                 call edx
// 005a917e  83f804               cmp eax, 4
// 005a9181  75ef                 jne 0x5a9172
// 005a9183  8bc6                 mov eax, esi
// 005a9185  5e                   pop esi
// 005a9186  c3                   ret 

struct Stage {
    virtual int getStage();
    virtual int getOther();
    char pad[4];
    Stage* next;
};

struct World {
    char pad[0x34];
    Stage* stage;
    Stage* getStage();
};

Stage* World::getStage() {
    Stage* s = stage;
    while (s->getOther() != 4) {
        s = s->next;
    }
    return s;
}
