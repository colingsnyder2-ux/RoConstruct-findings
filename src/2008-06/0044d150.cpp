// from server: 100% by king_originala
// roc 2008-06 0044d150  unit: CRobloxCommandLineInfo  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d150
//
// 0044d150  83ec10               sub esp, 0x10
// 0044d153  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044d157  8b1568c29600         mov edx, dword ptr [0x96c268]
// 0044d15d  33c0                 xor eax, eax
// 0044d15f  89442408             mov dword ptr [esp + 8], eax
// 0044d163  8944240c             mov dword ptr [esp + 0xc], eax
// 0044d167  8d0424               lea eax, [esp]
// 0044d16a  50                   push eax
// 0044d16b  51                   push ecx
// 0044d16c  6a67                 push 0x67
// 0044d16e  52                   push edx
// 0044d16f  c7442410e8698100     mov dword ptr [esp + 0x10], 0x8169e8
// 0044d177  c7442414c8658100     mov dword ptr [esp + 0x14], 0x8165c8
// 0044d17f  e86c86fbff           call 0x4057f0
// 0044d184  83c410               add esp, 0x10
// 0044d187  c20400               ret 4

extern char text_8169e8[];
extern char text_8165c8[];
extern unsigned long global_96c268;

struct MessageData {
    const char* first;
    const char* second;
    unsigned long third;
    unsigned long fourth;
};

extern "C" int __stdcall dispatch(
    unsigned long, unsigned int, unsigned long, MessageData*);

int __stdcall command(unsigned long argument)
{
    MessageData data = { text_8169e8, text_8165c8, 0, 0 };
    return dispatch(global_96c268, 103, argument, &data);
}
