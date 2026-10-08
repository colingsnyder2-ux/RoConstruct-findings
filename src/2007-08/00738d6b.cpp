// from server: 85% by colin
// roc 2007-08 00738d6b  unit: CSpinButtonCtrl  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00738d6b
//
// 00738d6b  e89271efff           call 0x62ff02
// 00738d70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00738d74  85c9                 test ecx, ecx
// 00738d76  8b542408             mov edx, dword ptr [esp + 8]
// 00738d7a  884814               mov byte ptr [eax + 0x14], cl
// 00738d7d  895044               mov dword ptr [eax + 0x44], edx
// 00738d80  7509                 jne 0x738d8b
// 00738d82  6afd                 push -3
// 00738d84  ff1568e77700         call dword ptr [0x77e768]
// 00738d8a  59                   pop ecx
// 00738d8b  33c0                 xor eax, eax
// 00738d8d  40                   inc eax
// 00738d8e  c20800               ret 8

extern "C" int __stdcall sub_62ff02();
extern "C" int (__stdcall *sub_77e768)(int);

struct CSpinButtonCtrl
{
    char pad[0x14];
    unsigned char field_14;
    char pad2[0x2f];
    int field_44;

    int sub_738d6b(int a, int b);
};

int CSpinButtonCtrl::sub_738d6b(int a, int b)
{
    CSpinButtonCtrl *p = (CSpinButtonCtrl *)sub_62ff02();
    p->field_14 = (unsigned char)a;
    p->field_44 = b;
    if (a == 0)
    {
        sub_77e768(-3);
    }
    return 1;
}
