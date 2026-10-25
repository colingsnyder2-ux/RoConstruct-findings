// from server: 100% by king_originala
// roc 2008-06 00492320  unit: RBX::Network::VPlayer::?$SignalDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492320
//
// 00492320  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00492324  e8a702f8ff           call 0x4125d0
// 00492329  85c0                 test eax, eax
// 0049232b  7424                 je 0x492351
// 0049232d  56                   push esi
// 0049232e  8bb0a0010000         mov esi, dword ptr [eax + 0x1a0]
// 00492334  85f6                 test esi, esi
// 00492336  7418                 je 0x492350
// 00492338  56                   push esi
// 00492339  e89275ffff           call 0x4898d0
// 0049233e  83c404               add esp, 4
// 00492341  85c0                 test eax, eax
// 00492343  740b                 je 0x492350
// 00492345  e8c6600700           call 0x508410
// 0049234a  dd9ed0010000         fstp qword ptr [esi + 0x1d0]
// 00492350  5e                   pop esi
// 00492351  c3                   ret 

struct Target {
    char padding[0x1d0];
    double timestamp;
};

struct Result {
    char padding[0x1a0];
    Target* target;
};

struct Input {
    Result* get();
};

extern "C" int __cdecl check(Target*);
extern "C" double __cdecl timeNow();

void __cdecl update(Input* input)
{
    Result* result = input->get();
    if (result) {
        Target* target = result->target;
        if (target && check(target))
            target->timestamp = timeNow();
    }
}
