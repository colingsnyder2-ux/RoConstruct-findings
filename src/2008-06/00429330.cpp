// from server: 100% by king_originala
// roc 2008-06 00429330  unit: ThreadLogManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00429330
//
// 00429330  56                   push esi
// 00429331  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00429335  56                   push esi
// 00429336  6a01                 push 1
// 00429338  e8e3e8ffff           call 0x427c20
// 0042933d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00429341  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00429345  83c408               add esp, 8
// 00429348  50                   push eax
// 00429349  68ec018500           push 0x8501ec
// 0042934e  6a00                 push 0
// 00429350  6a00                 push 0
// 00429352  56                   push esi
// 00429353  51                   push ecx
// 00429354  e857fdffff           call 0x4290b0
// 00429359  5e                   pop esi
// 0042935a  c3                   ret 

extern "C" void __cdecl prepareLog(int, int);
extern "C" void __stdcall writeLog(int, int, int, int, const char*, int);
extern const char logFormat[];

void __cdecl logMessage(int context, int value, int argument)
{
    prepareLog(1, value);
    writeLog(context, value, 0, 0, logFormat, argument);
}
