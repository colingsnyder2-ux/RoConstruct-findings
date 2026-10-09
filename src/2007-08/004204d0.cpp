// from server: 95% by colin
// roc 2007-08 004204d0  unit: CRobloxTreeCtrl  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004204d0
//
// 004204d0  53                   push ebx
// 004204d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004204d5  83fb71               cmp ebx, 0x71
// 004204d8  56                   push esi
// 004204d9  8bf1                 mov esi, ecx
// 004204db  752b                 jne 0x420508
// 004204dd  8b4620               mov eax, dword ptr [esi + 0x20]
// 004204e0  57                   push edi
// 004204e1  8b3dd8ec7700         mov edi, dword ptr [0x77ecd8]
// 004204e7  6a00                 push 0
// 004204e9  6a09                 push 9
// 004204eb  680a110000           push 0x110a
// 004204f0  50                   push eax
// 004204f1  ffd7                 call edi
// 004204f3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004204f6  50                   push eax
// 004204f7  6a00                 push 0
// 004204f9  680e110000           push 0x110e
// 004204fe  51                   push ecx
// 004204ff  ffd7                 call edi
// 00420501  50                   push eax
// 00420502  e8b9fc2000           call 0x6301c0
// 00420507  5f                   pop edi
// 00420508  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042050c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00420510  52                   push edx
// 00420511  50                   push eax
// 00420512  53                   push ebx
// 00420513  8d4e54               lea ecx, [esi + 0x54]
// 00420516  e855732400           call 0x667870
// 0042051b  5e                   pop esi
// 0042051c  5b                   pop ebx
// 0042051d  c20c00               ret 0xc

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);
extern "C" void __stdcall sub_6301C0(void*);
extern "C" void __stdcall sub_667870(void*, int, int, int);

struct CRobloxTreeCtrl {
    char pad[0x20];
    void* hWnd;
    char pad2[0x54 - 0x24];
    void OnNotify(int code, int id, int param);
};

void CRobloxTreeCtrl::OnNotify(int code, int id, int param) {
    if (code == 0x71) {
        void* r1 = (void*)SendMessageA(hWnd, 0x110a, 9, 0);
        void* r2 = (void*)SendMessageA(hWnd, 0x110e, 0, (long)r1);
        sub_6301C0(r2);
    }
    sub_667870((char*)this + 0x54, code, id, param);
}
