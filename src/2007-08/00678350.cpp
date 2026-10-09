// from server: 83% by colin
// roc 2007-08 00678350  unit: CXTPPopupBar  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00678350
//
// 00678350  8b542404             mov edx, dword ptr [esp + 4]
// 00678354  83ec10               sub esp, 0x10
// 00678357  56                   push esi
// 00678358  8bf1                 mov esi, ecx
// 0067835a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067835e  8b06                 mov eax, dword ptr [esi]
// 00678360  51                   push ecx
// 00678361  52                   push edx
// 00678362  8b90ec010000         mov edx, dword ptr [eax + 0x1ec]
// 00678368  8d4c240c             lea ecx, [esp + 0xc]
// 0067836c  51                   push ecx
// 0067836d  8bce                 mov ecx, esi
// 0067836f  ffd2                 call edx
// 00678371  8b4620               mov eax, dword ptr [esi + 0x20]
// 00678374  50                   push eax
// 00678375  ff15a0ed7700         call dword ptr [0x77eda0]
// 0067837b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067837f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00678383  f7d8                 neg eax
// 00678385  1bc0                 sbb eax, eax
// 00678387  83e004               and eax, 4
// 0067838a  0d50020000           or eax, 0x250
// 0067838f  50                   push eax
// 00678390  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00678394  2bc8                 sub ecx, eax
// 00678396  51                   push ecx
// 00678397  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067839b  2bd1                 sub edx, ecx
// 0067839d  52                   push edx
// 0067839e  50                   push eax
// 0067839f  a158e17700           mov eax, dword ptr [0x77e158]
// 006783a4  51                   push ecx
// 006783a5  50                   push eax
// 006783a6  8bce                 mov ecx, esi
// 006783a8  e8817cfbff           call 0x63002e
// 006783ad  5e                   pop esi
// 006783ae  83c410               add esp, 0x10
// 006783b1  c20800               ret 8

struct CXTPPopupBar {
    void sub_00678350(int, int);
};

extern "C" int __stdcall IsWindowVisible(void*);

extern int g_77e158;
extern int g_77eda0;

void CXTPPopupBar::sub_00678350(int a1, int a2)
{
    int local[4];
    int v1;
    int v2;
    int v3;
    int v4;

    (*(void (__thiscall**)(CXTPPopupBar*, int*, int, int))(*(int*)this + 0x1ec))(this, local, a1, a2);

    int vis = IsWindowVisible(*(void**)((char*)this + 0x20));
    int flag = (vis == 0) ? 0 : 4;
    flag |= 0x250;

    v1 = local[0];
    v2 = local[1];
    v3 = local[2];
    v4 = local[3];

    int dx = v3 - v1;
    int dy = v2 - v4;

    (*(void (__thiscall**)(CXTPPopupBar*, int, int, int, int, int, int))(*(int*)this + 0))(this, g_77e158, v1, v4, dx, dy, flag);
}
