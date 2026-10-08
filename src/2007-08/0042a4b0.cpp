// from server: 69% by colin
// roc 2007-08 0042a4b0  unit: MainLogManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a4b0
//
// 0042a4b0  56                   push esi
// 0042a4b1  8bf1                 mov esi, ecx
// 0042a4b3  ff15c4d27700         call dword ptr [0x77d2c4]
// 0042a4b9  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0042a4bc  7509                 jne 0x42a4c7
// 0042a4be  8d4e04               lea ecx, [esi + 4]
// 0042a4c1  5e                   pop esi
// 0042a4c2  e929d2ffff           jmp 0x4276f0
// 0042a4c7  e804ffffff           call 0x42a3d0
// 0042a4cc  8bc8                 mov ecx, eax
// 0042a4ce  5e                   pop esi
// 0042a4cf  e91cd2ffff           jmp 0x4276f0

extern "C" unsigned long __stdcall GetCurrentThreadId();

struct LogManager {
    int getLog();
};

struct MainLogManager {
    char pad0[4];
    LogManager mgr;
    unsigned long threadID;
    int getLog();
};

int MainLogManager::getLog()
{
    if (GetCurrentThreadId() == threadID)
        return mgr.getLog();
    return ((MainLogManager*)0)->mgr.getLog();
}
