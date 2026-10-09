// from server: 89% by colin
// roc 2007-08 00401310  unit: CAboutRobloxDialog  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401310
//
// 00401310  b801000000           mov eax, 1
// 00401315  840520ae8b00         test byte ptr [0x8bae20], al
// 0040131b  753e                 jne 0x40135b
// 0040131d  090520ae8b00         or dword ptr [0x8bae20], eax
// 00401323  b810114000           mov eax, 0x401110
// 00401328  b98cffffff           mov ecx, 0xffffff8c
// 0040132d  a360018800           mov dword ptr [0x880160], eax
// 00401332  33c0                 xor eax, eax
// 00401334  890d64018800         mov dword ptr [0x880164], ecx
// 0040133a  33c9                 xor ecx, ecx
// 0040133c  c7056801880005000000 mov dword ptr [0x880168], 5
// 00401346  a36c018800           mov dword ptr [0x88016c], eax
// 0040134b  a370018800           mov dword ptr [0x880170], eax
// 00401350  a374018800           mov dword ptr [0x880174], eax
// 00401355  890d78018800         mov dword ptr [0x880178], ecx
// 0040135b  b854018800           mov eax, 0x880154
// 00401360  c3                   ret 

extern int G_8bae20;
extern int G_880160;
extern int G_880164;
extern int G_880168;
extern int G_88016c;
extern int G_880170;
extern int G_880174;
extern int G_880178;

int f_401110();

int* func_00401310()
{
    if ((G_8bae20 & 1) == 0)
    {
        G_8bae20 |= 1;
        G_880160 = (int)&f_401110;
        G_880164 = -116;
        G_880168 = 5;
        G_88016c = 0;
        G_880170 = 0;
        G_880174 = 0;
        G_880178 = 0;
    }
    return (int*)0x880154;
}
