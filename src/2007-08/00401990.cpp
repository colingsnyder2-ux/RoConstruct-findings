// from server: 95% by colin
// roc 2007-08 00401990  unit: CAboutRobloxDialog  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401990
//
// 00401990  56                   push esi
// 00401991  8bf1                 mov esi, ecx
// 00401993  e848540600           call 0x466de0
// 00401998  c7064c4b7800         mov dword ptr [esi], 0x784b4c
// 0040199e  c74604344b7800       mov dword ptr [esi + 4], 0x784b34
// 004019a5  c746081c4b7800       mov dword ptr [esi + 8], 0x784b1c
// 004019ac  c7460cf84a7800       mov dword ptr [esi + 0xc], 0x784af8
// 004019b3  c74618e04a7800       mov dword ptr [esi + 0x18], 0x784ae0
// 004019ba  c74620c44a7800       mov dword ptr [esi + 0x20], 0x784ac4
// 004019c1  c74628b84a7800       mov dword ptr [esi + 0x28], 0x784ab8
// 004019c8  c7462cac4a7800       mov dword ptr [esi + 0x2c], 0x784aac
// 004019cf  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 004019d5  8b01                 mov eax, dword ptr [ecx]
// 004019d7  8b5004               mov edx, dword ptr [eax + 4]
// 004019da  ffd2                 call edx
// 004019dc  8bc6                 mov eax, esi
// 004019de  5e                   pop esi
// 004019df  c20400               ret 4

struct CAboutRobloxDialog {
    CAboutRobloxDialog* construct(int);
};

extern CAboutRobloxDialog* g_8bae44;

extern "C" void __stdcall sub_466de0();

CAboutRobloxDialog* CAboutRobloxDialog::construct(int)
{
    sub_466de0();
    *(int*)((char*)this + 0) = 0x784b4c;
    *(int*)((char*)this + 4) = 0x784b34;
    *(int*)((char*)this + 8) = 0x784b1c;
    *(int*)((char*)this + 0xc) = 0x784af8;
    *(int*)((char*)this + 0x18) = 0x784ae0;
    *(int*)((char*)this + 0x20) = 0x784ac4;
    *(int*)((char*)this + 0x28) = 0x784ab8;
    *(int*)((char*)this + 0x2c) = 0x784aac;
    int* p = (int*)g_8bae44;
    int* vt = (int*)*p;
    void (__stdcall *fn)() = (void (__stdcall *)())vt[1];
    fn();
    return this;
}
