// from server: 75% by colin
// roc 2007-08 00597890  unit: RBX::Stats::N::?$TypedStatsItem  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597890
//
// 00597890  56                   push esi
// 00597891  8bf1                 mov esi, ecx
// 00597893  8b06                 mov eax, dword ptr [esi]
// 00597895  8b5010               mov edx, dword ptr [eax + 0x10]
// 00597898  6831010000           push 0x131
// 0059789d  ffd2                 call edx
// 0059789f  84c0                 test al, al
// 005978a1  7516                 jne 0x5978b9
// 005978a3  8b06                 mov eax, dword ptr [esi]
// 005978a5  8b5010               mov edx, dword ptr [eax + 0x10]
// 005978a8  6832010000           push 0x132
// 005978ad  8bce                 mov ecx, esi
// 005978af  ffd2                 call edx
// 005978b1  84c0                 test al, al
// 005978b3  7504                 jne 0x5978b9
// 005978b5  33c0                 xor eax, eax
// 005978b7  5e                   pop esi
// 005978b8  c3                   ret 
// 005978b9  b801000000           mov eax, 1
// 005978be  5e                   pop esi
// 005978bf  c3                   ret 

struct TypedStatsItem {
    virtual bool hasValue(int id);
    bool check();
};

bool TypedStatsItem::check() {
    if (this->hasValue(0x131)) {
        return true;
    }
    if (this->hasValue(0x132)) {
        return true;
    }
    return false;
}
