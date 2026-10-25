// from server: 82% by colin
// roc 2008-06 00449120  unit: CRenderSettings  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449120
//
// 00449120  83ec08               sub esp, 8
// 00449123  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00449127  83f801               cmp eax, 1
// 0044912a  c7042401000000       mov dword ptr [esp], 1
// 00449131  c7442404e8030000     mov dword ptr [esp + 4], 0x3e8
// 00449139  7e0f                 jle 0x44914a
// 0044913b  3de8030000           cmp eax, 0x3e8
// 00449140  8d54240c             lea edx, [esp + 0xc]
// 00449144  7d0b                 jge 0x449151
// 00449146  8bc2                 mov eax, edx
// 00449148  eb0b                 jmp 0x449155
// 0044914a  8d1424               lea edx, [esp]
// 0044914d  8bc2                 mov eax, edx
// 0044914f  eb04                 jmp 0x449155
// 00449151  8d442404             lea eax, [esp + 4]
// 00449155  8b00                 mov eax, dword ptr [eax]
// 00449157  3b05f82d9400         cmp eax, dword ptr [0x942df8]
// 0044915d  7415                 je 0x449174
// 0044915f  a3f82d9400           mov dword ptr [0x942df8], eax
// 00449164  83c408               add esp, 8
// 00449167  c7442404b8d49600     mov dword ptr [esp + 4], 0x96d4b8
// 0044916f  e98c49fcff           jmp 0x40db00
// 00449174  83c408               add esp, 8
// 00449177  c20400               ret 4

extern int G_942df8;
extern char G_96d4b8;

void __stdcall sub_40db00(int);

void __stdcall f_449120(int a)
{
    int v0 = 1;
    int v1 = 1000;
    int* p = (a > 1 && a < 1000) ? &a : (a <= 1 ? &v0 : &v1);
    int val = *p;
    if (val != G_942df8) {
        G_942df8 = val;
        sub_40db00((int)&G_96d4b8);
    }
}