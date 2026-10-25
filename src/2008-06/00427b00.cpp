// from server: 100% by king_originala
// roc 2008-06 00427b00  unit: RobloxCrashReporter  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427b00
//
// 00427b00  8b442404             mov eax, dword ptr [esp + 4]
// 00427b04  56                   push esi
// 00427b05  50                   push eax
// 00427b06  e885670700           call 0x49e290
// 00427b0b  8bf0                 mov esi, eax
// 00427b0d  b801000000           mov eax, 1
// 00427b12  840508d19600         test byte ptr [0x96d108], al
// 00427b18  7512                 jne 0x427b2c
// 00427b1a  8a0df4d09600         mov cl, byte ptr [0x96d0f4]
// 00427b20  090508d19600         or dword ptr [0x96d108], eax
// 00427b26  880d04d19600         mov byte ptr [0x96d104], cl
// 00427b2c  803d04d1960000       cmp byte ptr [0x96d104], 0
// 00427b33  7519                 jne 0x427b4e
// 00427b35  6a00                 push 0
// 00427b37  6870038100           push 0x810370
// 00427b3c  6828038100           push 0x810328
// 00427b41  6a00                 push 0
// 00427b43  a204d19600           mov byte ptr [0x96d104], al
// 00427b48  ff15782d8000         call dword ptr [0x802d78]
// 00427b4e  8bc6                 mov eax, esi
// 00427b50  5e                   pop esi
// 00427b51  c20400               ret 4

extern bool initialShown;
extern "C" int __stdcall reportCrash(void *);
extern "C" int (__stdcall *MessageBoxA)(void *, const char *, const char *, unsigned int);

int __stdcall crashHandler(void *argument)
{
    int result = reportCrash(argument);
    static bool shown = initialShown;
    if (!shown)
    {
        shown = true;
        MessageBoxA(0,
            "An unexpected error occurred and ROBLOX needs to quit.  We're sorry!",
            "ROBLOX Crash", 0);
    }
    return result;
}
