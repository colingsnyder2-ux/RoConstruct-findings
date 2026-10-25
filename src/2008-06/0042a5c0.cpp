// from server: 100% by king_originala
// roc 2008-06 0042a5c0  unit: MainLogManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a5c0
//
// 0042a5c0  56                   push esi
// 0042a5c1  8bf1                 mov esi, ecx
// 0042a5c3  ff1598218000         call dword ptr [0x802198]
// 0042a5c9  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0042a5cc  7509                 jne 0x42a5d7
// 0042a5ce  8d4e04               lea ecx, [esi + 4]
// 0042a5d1  5e                   pop esi
// 0042a5d2  e979d3ffff           jmp 0x427950
// 0042a5d7  e814ffffff           call 0x42a4f0
// 0042a5dc  8bc8                 mov ecx, eax
// 0042a5de  5e                   pop esi
// 0042a5df  e96cd3ffff           jmp 0x427950

extern "C" unsigned long (__stdcall *GetCurrentThreadId)();

struct LogState {
    unsigned char storage[8];
    void apply();
};

LogState* __cdecl currentLogState();

struct MainLogManager {
    unsigned char storage[4];
    LogState state;
    unsigned long threadId;
    void apply();
};

void MainLogManager::apply()
{
    if (GetCurrentThreadId() == threadId)
        state.apply();
    else
        currentLogState()->apply();
}
