// from server: 100% by king_originala
// roc 2008-06 004672a0  unit: CSettingsDialog  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004672a0
//
// 004672a0  8b542404             mov edx, dword ptr [esp + 4]
// 004672a4  8bc1                 mov eax, ecx
// 004672a6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004672aa  8908                 mov dword ptr [eax], ecx
// 004672ac  895004               mov dword ptr [eax + 4], edx
// 004672af  33c9                 xor ecx, ecx
// 004672b1  66894808             mov word ptr [eax + 8], cx
// 004672b5  33d2                 xor edx, edx
// 004672b7  6689500a             mov word ptr [eax + 0xa], dx
// 004672bb  6689480c             mov word ptr [eax + 0xc], cx
// 004672bf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004672c3  6689500e             mov word ptr [eax + 0xe], dx
// 004672c7  894810               mov dword ptr [eax + 0x10], ecx
// 004672ca  c20c00               ret 0xc

struct CSettingsDialog
{
    volatile int first;
    volatile int second;
    volatile short third;
    volatile short fourth;
    volatile short fifth;
    volatile short sixth;
    volatile int seventh;

    CSettingsDialog(int a, int b, int c);
};

CSettingsDialog::CSettingsDialog(int a, int b, int c)
{
    first = b;
    second = a;
    third = 0;
    fourth = 0;
    fifth = 0;
    sixth = 0;
    seventh = c;
}
