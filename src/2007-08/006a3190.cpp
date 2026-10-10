// from server: 33% by colin
extern "C" {
    int __stdcall CallNextHookEx(int hhk, int nCode, int wParam, int lParam);
}

struct CXTPHookManager;

struct CHookSink {
    int unknown0;
    int hHook;
    int unknown8;
    int unknownC;
    int field10;
    int unknown14;
    int unknown18;
    int unknown1C;
    int count;
};

CHookSink* __fastcall GetHookSink(void* ecx, void* edx, void* arg);
void __cdecl ThrowHookError();
void __fastcall ConstructTemp(void* ecx, void* edx, int arg);
CXTPHookManager* __cdecl GetHookManager();
int __fastcall CHookSink_Process(CHookSink* self, void* edx, int a, int b, int c);
void __fastcall CXTPHookManager_Unhook(CXTPHookManager* self, void* edx);
void __fastcall DestroyTemp(void* ecx, void* edx);

struct CXTPHookManager {
    int unknown0;
};

int __fastcall CHookSink_HookProc(CHookSink* self, void* edx, int nCode, int wParam, int lParam)
{
    CHookSink* sink = GetHookSink((void*)0x8c9310, 0, (void*)0x632210);
    if (sink == 0) {
        ThrowHookError();
    }

    if (nCode != 0) {
        return CallNextHookEx(sink->hHook, nCode, wParam, lParam);
    }

    if (sink->count > 0) {
        unsigned int flags = (unsigned int)lParam;
        unsigned int high = flags >> 16;
        if ((high & 0x8000) == 0) {
            ConstructTemp((void*)((char*)sink + 0x10), 0, sink->field10);

            int cleanupFlag = 0;

            if ((high & 0x2000) != 0) {
                if (wParam == 0x12) {
                    CXTPHookManager* mgr = GetHookManager();
                    if (mgr->unknown0 > 0) {
                    } else {
                        if ((high & 0x4000) == 0) {
                            CXTPHookManager* mgr2 = GetHookManager();
                            CXTPHookManager_Unhook(mgr2, 0);
                        }
                        cleanupFlag = -1;
                        DestroyTemp((void*)((char*)sink + 0x10), 0);
                        return 1;
                    }
                }
            }

            int result = CHookSink_Process(sink, 0, 0x100, wParam, lParam);
            if (result != 0) {
                cleanupFlag = -1;
                DestroyTemp((void*)((char*)sink + 0x10), 0);
                return 1;
            }

            cleanupFlag = -1;
            DestroyTemp((void*)((char*)sink + 0x10), 0);
        }
    }

    return CallNextHookEx(sink->hHook, nCode, wParam, lParam);
}
