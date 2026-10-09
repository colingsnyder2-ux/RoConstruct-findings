// from server: 100% by colin
// roc 2007-08 004278c0  unit: RobloxCrashReporter  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004278c0
//
// 004278c0  8b442404             mov eax, dword ptr [esp + 4]
// 004278c4  56                   push esi
// 004278c5  50                   push eax
// 004278c6  e885110700           call 0x498a50
// 004278cb  8bf0                 mov esi, eax
// 004278cd  b801000000           mov eax, 1
// 004278d2  8405f4b88b00         test byte ptr [0x8bb8f4], al
// 004278d8  7512                 jne 0x4278ec
// 004278da  8a0de0b88b00         mov cl, byte ptr [0x8bb8e0]
// 004278e0  0905f4b88b00         or dword ptr [0x8bb8f4], eax
// 004278e6  880df0b88b00         mov byte ptr [0x8bb8f0], cl
// 004278ec  803df0b88b0000       cmp byte ptr [0x8bb8f0], 0
// 004278f3  7519                 jne 0x42790e
// 004278f5  6a00                 push 0
// 004278f7  6808a07800           push 0x78a008
// 004278fc  68c09f7800           push 0x789fc0
// 00427901  6a00                 push 0
// 00427903  a2f0b88b00           mov byte ptr [0x8bb8f0], al
// 00427908  ff15e8ed7700         call dword ptr [0x77ede8]
// 0042790e  8bc6                 mov eax, esi
// 00427910  5e                   pop esi
// 00427911  c20400               ret 4

extern "C" __declspec(dllimport) int __stdcall MessageBoxA(void* hWnd, const char* lpText, const char* lpCaption, unsigned int uType);

extern char G_8bb8e0;
extern char G_8bb8f0;
extern unsigned int G_8bb8f4;

int __stdcall sub_498a50(const char* msg);

int __stdcall sub_4278c0(const char* msg)
{
    int result = sub_498a50(msg);

    if ((G_8bb8f4 & 1) == 0)
    {
        char cl = G_8bb8e0;
        G_8bb8f4 |= 1;
        G_8bb8f0 = cl;
    }

    if (G_8bb8f0 == 0)
    {
        G_8bb8f0 = 1;
        MessageBoxA(0, (const char*)0x789fc0, (const char*)0x78a008, 0);
    }

    return result;
}
