// roc 2011-06 00494950  unit: CTaskSchedulerPaneView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00494950
//
// 00494950  8b542404             mov edx, dword ptr [esp + 4]
// 00494954  8bc1                 mov eax, ecx
// 00494956  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049495a  8908                 mov dword ptr [eax], ecx
// 0049495c  895004               mov dword ptr [eax + 4], edx
// 0049495f  33c9                 xor ecx, ecx
// 00494961  66894808             mov word ptr [eax + 8], cx
// 00494965  33d2                 xor edx, edx
// 00494967  6689500a             mov word ptr [eax + 0xa], dx
// 0049496b  6689480c             mov word ptr [eax + 0xc], cx
// 0049496f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00494973  6689500e             mov word ptr [eax + 0xe], dx
// 00494977  894810               mov dword ptr [eax + 0x10], ecx
// 0049497a  c20c00               ret 0xc
// copied from an identical function in another client (function ??0CSettingsDialog@ns_ROCX000002@@QAE@HHH@Z)

namespace ns_ROCX000002 {
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
}
