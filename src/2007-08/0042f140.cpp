// from server: 84% by colin
// roc 2007-08 0042f140  unit: CMainFrame  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f140
//
// 0042f140  56                   push esi
// 0042f141  8bf1                 mov esi, ecx
// 0042f143  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042f147  e8e0132000           call 0x63052c
// 0042f14c  85c0                 test eax, eax
// 0042f14e  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0042f154  7504                 jne 0x42f15a
// 0042f156  5e                   pop esi
// 0042f157  c20400               ret 4
// 0042f15a  56                   push esi
// 0042f15b  8bc8                 mov ecx, eax
// 0042f15d  e8fe382000           call 0x632a60
// 0042f162  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0042f168  e8332b2000           call 0x631ca0
// 0042f16d  b801000000           mov eax, 1
// 0042f172  5e                   pop esi
// 0042f173  c20400               ret 4

struct CMainFrame {
    char pad[0xd8];
    int field_0xd8;
    int __thiscall sub_0042f140(int);
};

extern "C" int __stdcall sub_0063052C(int);
extern "C" void __stdcall sub_00632A60(int, CMainFrame*);
extern "C" void __stdcall sub_00631CA0(int);

int CMainFrame::sub_0042f140(int a)
{
    int v = sub_0063052C(a);
    field_0xd8 = v;
    if (v == 0)
        return 0;
    sub_00632A60(v, this);
    sub_00631CA0(field_0xd8);
    return 1;
}
