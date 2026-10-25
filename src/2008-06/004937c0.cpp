// from server: 100% by tester
// roc 2008-06 004937c0  unit: RBX::Network::Player  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004937c0
//
// 004937c0  56                   push esi
// 004937c1  68a81f8200           push 0x821fa8
// 004937c6  6a03                 push 3
// 004937c8  8bf1                 mov esi, ecx
// 004937ca  e891ffffff           call 0x493760
// 004937cf  8bc8                 mov ecx, eax
// 004937d1  e83a60ffff           call 0x489810
// 004937d6  8b442408             mov eax, dword ptr [esp + 8]
// 004937da  50                   push eax
// 004937db  8bce                 mov ecx, esi
// 004937dd  e8ae770c00           call 0x55af90
// 004937e2  5e                   pop esi
// 004937e3  c20400               ret 4

struct Sec { void enter(); };
Sec* __stdcall getSec(int, const char*);
struct Base { void setName(const void* n); };
struct Player : Base {
    void setName(const void* n);
};
void Player::setName(const void* n) {
    getSec(3, "set a Player's name")->enter();
    Base::setName(n);
}
