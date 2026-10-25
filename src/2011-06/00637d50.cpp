// from server: 100% by tester
// roc 2011-06 00637d50  unit: FLog::VFastLogSettingsItem::?$FactoryProduct::Creator  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00637d50
//
// 00637d50  b801000000           mov eax, 1
// 00637d55  84051ccacc00         test byte ptr [0xccca1c], al
// 00637d5b  750d                 jne 0x637d6a
// 00637d5d  09051ccacc00         or dword ptr [0xccca1c], eax
// 00637d63  c60518cacc0000       mov byte ptr [0xccca18], 0
// 00637d6a  c3                   ret 

typedef unsigned char byte;

static byte g_00D1F0E0;
static int g_00D1F0E4;

void f0092b920()
{
    if ((g_00D1F0E4 & 1) == 0)
    {
        g_00D1F0E4 |= 1;
        g_00D1F0E0 = 0;
    }
}
