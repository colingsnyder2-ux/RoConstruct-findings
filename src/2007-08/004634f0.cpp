// from server: 59% by colin
// roc 2007-08 004634f0  unit: CSettingsDialog  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004634f0
//
// 004634f0  56                   push esi
// 004634f1  8bf1                 mov esi, ecx
// 004634f3  d94660               fld dword ptr [esi + 0x60]
// 004634f6  57                   push edi
// 004634f7  d86658               fsub dword ptr [esi + 0x58]
// 004634fa  e861d81c00           call 0x630d60
// 004634ff  d94664               fld dword ptr [esi + 0x64]
// 00463502  d8665c               fsub dword ptr [esi + 0x5c]
// 00463505  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00463509  668907               mov word ptr [edi], ax
// 0046350c  e84fd81c00           call 0x630d60
// 00463511  66894702             mov word ptr [edi + 2], ax
// 00463515  8bc7                 mov eax, edi
// 00463517  5f                   pop edi
// 00463518  5e                   pop esi
// 00463519  c20400               ret 4

struct CSettingsDialog {
    char pad[0x58];
    float f58;
    float f5c;
    float f60;
    float f64;
    short* getSize(short* out);
};

extern "C" short __stdcall FloatToShort(float value);

short* CSettingsDialog::getSize(short* out) {
    out[0] = FloatToShort(f60 - f58);
    out[1] = FloatToShort(f64 - f5c);
    return out;
}
