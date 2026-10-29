// roc 2010-06 00477e40  unit: CTaskSchedulerPaneView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00477e40
//
// 00477e40  8b542404             mov edx, dword ptr [esp + 4]
// 00477e44  8bc1                 mov eax, ecx
// 00477e46  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00477e4a  8908                 mov dword ptr [eax], ecx
// 00477e4c  895004               mov dword ptr [eax + 4], edx
// 00477e4f  33c9                 xor ecx, ecx
// 00477e51  66894808             mov word ptr [eax + 8], cx
// 00477e55  33d2                 xor edx, edx
// 00477e57  6689500a             mov word ptr [eax + 0xa], dx
// 00477e5b  6689480c             mov word ptr [eax + 0xc], cx
// 00477e5f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00477e63  6689500e             mov word ptr [eax + 0xe], dx
// 00477e67  894810               mov dword ptr [eax + 0x10], ecx
// 00477e6a  c20c00               ret 0xc
// copied from an identical function in another client (function ??0CSettingsDialog@@QAE@HHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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