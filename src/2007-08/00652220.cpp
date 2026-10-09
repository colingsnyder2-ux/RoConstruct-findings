// from server: 82% by colin
// roc 2007-08 00652220  unit: CXTPPrintingDialog  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00652220
//
// 00652220  8b442404             mov eax, dword ptr [esp + 4]
// 00652224  83ec10               sub esp, 0x10
// 00652227  56                   push esi
// 00652228  50                   push eax
// 00652229  8bf1                 mov esi, ecx
// 0065222b  e816e4fdff           call 0x630646
// 00652230  83f8ff               cmp eax, -1
// 00652233  7509                 jne 0x65223e
// 00652235  0bc0                 or eax, eax
// 00652237  5e                   pop esi
// 00652238  83c410               add esp, 0x10
// 0065223b  c20400               ret 4
// 0065223e  8b16                 mov edx, dword ptr [esi]
// 00652240  33c0                 xor eax, eax
// 00652242  50                   push eax
// 00652243  6a64                 push 0x64
// 00652245  56                   push esi
// 00652246  8d4c2410             lea ecx, [esp + 0x10]
// 0065224a  51                   push ecx
// 0065224b  89442414             mov dword ptr [esp + 0x14], eax
// 0065224f  89442418             mov dword ptr [esp + 0x18], eax
// 00652253  8944241c             mov dword ptr [esp + 0x1c], eax
// 00652257  89442420             mov dword ptr [esp + 0x20], eax
// 0065225b  8b828c010000         mov eax, dword ptr [edx + 0x18c]
// 00652261  6800000150           push 0x50010000
// 00652266  8bce                 mov ecx, esi
// 00652268  ffd0                 call eax
// 0065226a  8bc8                 mov ecx, eax
// 0065226c  e84f380000           call 0x655ac0
// 00652271  f7d8                 neg eax
// 00652273  1bc0                 sbb eax, eax
// 00652275  f7d8                 neg eax
// 00652277  83e801               sub eax, 1
// 0065227a  5e                   pop esi
// 0065227b  83c410               add esp, 0x10
// 0065227e  c20400               ret 4

struct CXTPPrintingDialog {
    int sub_652220(int);
};

extern "C" int __cdecl sub_630646(int);
extern "C" int __cdecl sub_655AC0(int);

int CXTPPrintingDialog::sub_652220(int a)
{
    int result = sub_630646(a);
    if (result == -1) {
        return 0;
    }

    int v[4];
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;

    int (CXTPPrintingDialog::*pmf)(int, int, int, int, int);
    int r = ((int (__thiscall *)(CXTPPrintingDialog *, int *, int, int, int, int))(
        *(void **)(*(int *)this + 0x18c)))(this, v, 0x50010000, 0x64, 0, 0);

    int r2 = sub_655AC0(r);
    return (r2 != 0) ? 0 : -1;
}
